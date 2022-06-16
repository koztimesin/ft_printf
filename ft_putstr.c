/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:31:06 by ksaffron          #+#    #+#             */
/*   Updated: 2022/06/16 10:15:09 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!(s))
		return (write (1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
