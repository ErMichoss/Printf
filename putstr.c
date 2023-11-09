/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:03:17 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 11:33:21 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, int *counter)
{
	int		i;

	if (!str)
	{
		ft_putstr_pf("(null)", counter);
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_pf(str[i], counter);
		if (*counter == -1)
			return ;
		i++;
	}
}
