/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:29:18 by ksaffron          #+#    #+#             */
/*   Updated: 2022/06/16 10:15:14 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_getnbr_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

unsigned int	ft_getnbr_u_size(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

unsigned int	ft_getnbr_hex_size(unsigned int n)
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
	return (size);
}
