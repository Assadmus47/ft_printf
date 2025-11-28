/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 18:40:05 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 19:05:10 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_c(va_list args, int *count)
{
	int	chr;
	chr = va_arg(args, int);
    ft_putchar(chr);
	(*count)++;
}

void	print_s(va_list args, int *count)
{
	char *chr;
	chr = va_arg(args, char *);
	ft_putstr(chr, count);
}

void	print_p(va_list args, int *count)
{
    unsigned long ptr;
	ptr = va_arg(args, unsigned long);
	write(1, "0x", 2);
	(*count) += 2;
	ft_putnbr_base_unsigned((unsigned long)ptr, "0123456789abcdef", count);
}

void	print_d(va_list args, int *count)
{
	int	nbr;
	nbr = va_arg(args, int);
	ft_putnbr_base(nbr, "0123456789", count);
}

void	print_u(va_list args, int *count)
{
	unsigned int	nbr;
	nbr = va_arg(args, int);
	ft_putnbr_base_unsigned(nbr, "0123456789", count);
}