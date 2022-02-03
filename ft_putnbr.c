/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:56:11 by ksaffron          #+#    #+#             */
/*   Updated: 2021/12/09 18:07:06 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = ft_getnbr_size(n);
	if (n == -2147483648)
	{
		ft_putstr("-2");
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	return (i);
}

unsigned int	ft_putnbr_u(unsigned int n)
{
	int	i;

	i = ft_getnbr_u_size(n);
	if (n >= 10)
	{
		ft_putnbr_u(n / 10);
		ft_putnbr_u(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (i);
}

unsigned int	ft_putnbr_hex(unsigned int n)
{
	int	i;

	i = ft_getnbr_hex_size(n);
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}

unsigned int	ft_putnbr_hex_up(unsigned int n)
{
	int	i;

	i = ft_getnbr_hex_size(n);
	if (n >= 16)
	{
		ft_putnbr_hex_up(n / 16);
		ft_putnbr_hex_up(n % 16);
	}
	else
		ft_putchar("0123456789ABCDEF"[n % 16]);
	return (i);
}
