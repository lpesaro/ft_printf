/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:10:28 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 22:06:10 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(char c, va_list arg)
{
	int	output;

	output = 0;
	if (c == 'c')
		output = ft_printchar(arg);
	else if (c == 's')
		output = ft_printstring(arg);
	else if (c == 'p')
		output = ft_printptr(arg);
	else if (c == 'd' || c == 'i')
		output = ft_printinteger(arg);
	else if (c == 'u')
		output = ft_printunsint(arg);
	else if (c == 'x')
		output = ft_print_hexalower(arg);
	else if (c == 'X')
		output = ft_print_hexaupper(arg);
	else if (c == '%')
		output = ft_printpercent(c);
	else
		return (0);
	return (output);
}

int	ft_printf(const char *string, ...)
{
	va_list	arg;
	int		i;
	int		output;

	i = 0;
	output = 0;
	va_start(arg, string);
	while (string[i])
	{
		if (string[i] != '%')
			output += ft_putchar(string[i]);
		else
		{
			output += ft_flags(string[i + 1], arg);
			i++;
		}
		i++;
	}
	return (output);
}
