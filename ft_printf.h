/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:58:59 by nicgonza          #+#    #+#             */
/*   Updated: 2023/11/09 11:45:27 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

/*funcion printf*/
int				ft_printf(char const *str, ...);
/*funciones de format*/
void			ft_putchar_pf(int c, int *counter);
void			ft_putstr_pf(char *str, int *counter);
void			ft_putnbr_pf(int n, int *counter);
void			ft_puthex_pf(unsigned long long num, int *counter, char *base);
void			ft_putuint_pf(unsigned int num, int *counter);

#endif
