/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:10:42 by ksaffron          #+#    #+#             */
/*   Updated: 2021/12/09 19:33:38 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned long	ft_getptr_size(unsigned long n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	while (n)
	{
		n /= 16;
		size++;
	}
	return (size + 2);
}

unsigned long	ft_putptr_hex(unsigned long n)
{
	int	i;

	i = ft_getptr_size(n);
	if (n >= 16)
	{
		ft_putptr_hex(n / 16);
		ft_putptr_hex(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n % 16]);
	return (i);
}
