/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:41:21 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 19:11:29 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

int		ft_strchr(const char *s, char c);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_putnbr_base_unsigned(unsigned long nbr, char *base, int *count);
void	ft_putchar(char c);
void	ft_putstr(char *str, int *count);
void	print_c(va_list args, int *count);
void	print_s(va_list args, int *count);
void	print_p(va_list args, int *count);
void	print_d(va_list args, int *count);
void	print_u(va_list args, int *count);
void	print_x(va_list args, int *count);
void	print_x_maj(va_list args, int *count);

#endif