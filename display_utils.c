/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 20:48:31 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 20:27:41 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, int *count)
{
	char	box[32];
	long	n;
	int		size;
	int		i;

	size = ft_strlen(base);
	n = nbr;
	//printf("\nwe [%d]\n",nbr);
	if (n < 0)
	{
		ft_putchar('-');
		(*count)++;
		n *= -1;
	}
	i = 0;
	while (n > 0)
	{
		box[i] = base[n % size];
		n = n / size;
		(*count)++;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);
}

void	ft_putnbr_base_unsigned(unsigned long nbr, char *base, int *count)
{
	char	box[32];
	int		size;
	int		i;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		(*count)++;
		nbr *= -1;
	}
	i = 0;
	while (nbr > 0)
	{
		box[i] = base[nbr % size];
		nbr = nbr / size;
		(*count)++;
		i++;
	}
	while (--i >= 0)
		ft_putchar(box[i]);
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
