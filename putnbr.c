/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:55:16 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 12:03:27 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, int *counter)
{
	if (*counter == -1)
		return ;
	if (num == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			*counter = -1;
		else
			(*counter) += 11;
		return ;
	}
	if (num < 0)
	{
		ft_putchar_pf('-', counter);
		num = num * -1;
	}
	if (num >= 10)
	{
		ft_putnbr_pf(num / 10, counter);
		ft_putnbr_pf(num % 10, counter);
	}
	else
		ft_putchar_pf(num + '0', counter);
}
