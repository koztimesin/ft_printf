/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:17:48 by ksaffron          #+#    #+#             */
/*   Updated: 2022/06/16 10:14:51 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_u(unsigned int n);
unsigned int	ft_putnbr_hex(unsigned int n);
unsigned int	ft_putnbr_hex_up(unsigned int n);
unsigned long	ft_putptr_hex(unsigned long n);
int				ft_getnbr_size(int n);
unsigned int	ft_getnbr_u_size(unsigned int n);
unsigned int	ft_getnbr_hex_size(unsigned int n);
int				ft_flags(char ch, va_list temp);

#endif
