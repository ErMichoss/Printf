/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:44:35 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 13:41:16 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list list, char *str, int *count)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(list, int), count);
	else if (*str == 's')
		ft_putstr_pf(va_arg(list, char *), count);
	else if (*str == 'p')
	{
		ft_putstr_pf("0x", count);
		if (*count != -1)
			ft_puthex_pf(va_arg(list, unsigned long long), count, HEX_LOW_BASE);
	}	
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(list, int), count);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(list, unsigned int), count);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(list, unsigned int), count, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(list, unsigned int), count, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf(*str, count);
	else
		ft_putchar_pf(*str, count);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '\0')
				return (i);
			ft_format(list, (char *)str, &i);
		}
		else
			ft_putchar_pf(*str, &i);
		str++;
		if (i < 0)
			return (-1);
	}	
	va_end(list);
	return (i);
}
/*int main()
{
	int i = ft_printf("hola");
	printf("\n");
	printf("%d", i);
	printf("\n");
	int j = printf("hola");
	printf("\n");
	printf("%d", j);
}*/
