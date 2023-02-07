/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesaro <lpesaro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:40:29 by lpesaro           #+#    #+#             */
/*   Updated: 2023/02/07 21:30:27 by lpesaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *param, ...);
int		ft_putchar(char c);
int		ft_printchar(va_list arg);
int		ft_print_hexalower(va_list arg);
int		ft_print_hexaupper(va_list arg);
int		ft_printinteger(va_list arg);
int		ft_printpercent(char c);
int		ft_printptr(va_list arg);
int		ft_printstring(va_list arg);
int		ft_printunsint(va_list arg);
int		ft_putnbr_hexalower(unsigned int nb);
int		ft_putnbr_hexaupper(unsigned int nb);
int		ft_contnumuns(unsigned int nb);
int		ft_printunsint(va_list arg);
int		ft_strlen(const char *s);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif