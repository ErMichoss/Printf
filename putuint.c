/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putuint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:04:57 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 11:43:18 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, int *counter)
{
	if (*counter == -1)
		return ;
	if (num >= 10)
	{
		ft_putnbr_pf(num / 10, counter);
		ft_putnbr_pf(num % 10, counter);
	}
	else
		ft_putchar_pf(num + '0', counter);
}
