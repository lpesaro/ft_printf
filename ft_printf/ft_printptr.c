/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:59:46 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 22:05:47 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexaptr(unsigned long int nb)
{
	char				*hexa;
	unsigned long int	output;

	hexa = "0123456789abcdef";
	output = 0;
	if (nb < 0)
		nb = (4294967296 + nb);
	if (nb > 15)
		output += output + ft_putnbr_hexaptr(nb / 16);
	output += write(1, &hexa[nb % 16], 1);
	return (output);
}

int	ft_printptr(va_list arg)
{
	unsigned long int	x;
	int					ptr;

	x = va_arg(arg, unsigned long int);
	ft_putchar('0');
	ft_putchar('x');
	ptr = ft_putnbr_hexaptr(x);
	return (ptr + 2);
}
