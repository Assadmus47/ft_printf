/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 19:00:51 by mkacemi           #+#    #+#             */
/*   Updated: 2025/12/01 12:31:44 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_x(va_list args, int *count)
{
	unsigned int	nbr;

	nbr = va_arg(args, int);
	ft_putnbr_base(nbr, "0123456789abcdef", count);
}

void	print_x_maj(va_list args, int *count)
{
	unsigned int	nbr;

	nbr = va_arg(args, int);
	ft_putnbr_base(nbr, "0123456789ABCDEF", count);
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		(*count)++;
		i++;
	}
}
