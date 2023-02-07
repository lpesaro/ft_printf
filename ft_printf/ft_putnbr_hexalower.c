/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:54:07 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 20:38:41 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexalower(unsigned int nb)
{
	char	*hexa;
	int		output;

	hexa = "0123456789abcdef";
	output = 0;
	if (nb > 15)
		output += output + ft_putnbr_hexalower(nb / 16);
	output += write(1, &hexa[nb % 16], 1);
	return (output);
}
