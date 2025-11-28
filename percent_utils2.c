/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:00:51 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 19:05:06 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_x(va_list args, int *count)
{
	int	nbr;
	nbr = va_arg(args, int);
    ft_putnbr_base(nbr, "0123456789abcdef", count);
}

void	print_x_maj(va_list args, int *count)
{
	int	nbr;
	nbr = va_arg(args, int);
    ft_putnbr_base(nbr, "0123456789ABCDEF", count);
}