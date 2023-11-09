/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:06:03 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 12:04:19 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned long long num, int *counter, char *base)
{
	if (*counter == -1)
		return ;
	if (num >= 16)
	{
		ft_puthex_pf(num / 16, counter, base);
		ft_puthex_pf(num % 16, counter, base);
	}
	else
		ft_putchar_pf(base[num], counter);
}
