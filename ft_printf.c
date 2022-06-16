/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:34:08 by ksaffron          #+#    #+#             */
/*   Updated: 2022/06/16 10:15:51 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(char ch, va_list temp)
{
	if (ch == 'c')
		return (ft_putchar((char)(va_arg(temp, int))));
	else if (ch == 's')
		return (ft_putstr(va_arg(temp, char *)));
	else if (ch == 'p')
	{
		write(1, "0x", 2);
		return (ft_putptr_hex(va_arg(temp, unsigned long)));
	}
	else if (ch == 'd' || ch == 'i')
		return (ft_putnbr(va_arg(temp, int)));
	else if (ch == 'u')
		return (ft_putnbr_u(va_arg(temp, unsigned int)));
	else if (ch == 'x')
		return (ft_putnbr_hex(va_arg(temp, unsigned int)));
	else if (ch == 'X')
		return (ft_putnbr_hex_up(va_arg(temp, unsigned int)));
	else if (ch == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	temp;
	int		result;

	result = 0;
	i = 0;
	va_start(temp, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			result++;
		}
		else if (str[i++] == '%')
			result += ft_flags(str[i], temp);
		i++;
	}
	va_end(temp);
	return (result);
}

