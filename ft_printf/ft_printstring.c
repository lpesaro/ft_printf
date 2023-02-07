/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:11:19 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 22:05:26 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstring(va_list arg)
{
	char	*c;

	c = va_arg(arg, char *);
	if (!c)
		return (write(1, "(null)", 6));
	ft_putstr(c);
	return (ft_strlen(c));
}
