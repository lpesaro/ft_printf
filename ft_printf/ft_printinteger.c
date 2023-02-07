/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:19:18 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 22:05:57 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_contnum(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
		nb = -2147483646;
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	if (nb == 0)
		count++;
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

int	ft_printinteger(va_list arg)
{
	int	nb;
	int	count;

	nb = va_arg(arg, int);
	count = ft_contnum(nb);
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb *= -1);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb <= 9)
		ft_putchar(nb + 48);
	return (count);
}
