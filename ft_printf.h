/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:41:21 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/30 20:50:50 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>

int		ft_strchr(const char *s, char c);
int		ft_printf(const char *buff, ...);
void	ft_putnbr_base(unsigned int nbr, char *base, int *count);
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
void	display_char(va_list args, const char *buff, int *i, int*count);
void	print(const char *str, va_list args, int *i, int *count);
void	ft_putnbr(int nb, int *count);
int		ft_strlen(char *str);
void	ft_putnbr_unsigned(unsigned long nb, int *count);
void	option_notfound(const char *buff, int *i, int *count);

#endif