/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexaupper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:41:19 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 18:53:37 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexaupper(unsigned int nb)
{
	char	*hexa;
	int		output;

	hexa = "0123456789ABCDEF";
	output = 0;
	if (nb > 15)
		output += output + ft_putnbr_hexaupper(nb / 16);
	output += write(1, &hexa[nb % 16], 1);
	return (output);
}
