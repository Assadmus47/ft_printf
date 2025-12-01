/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:59:52 by marvin            #+#    #+#             */
/*   Updated: 2025/12/01 13:35:14 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static void	print_menu(const char *str, va_list args, int *i, int *count)
{
	if (str[*i] == 'c')
		print_c(args, count);
	else if (str[*i] == 's')
		print_s(args, count);
	else if (str[*i] == 'p')
		print_p(args, count);
	else if (str[*i] == 'd' || str[*i] == 'i')
		print_d(args, count);
	else if (str[*i] == 'u')
		print_u(args, count);
	else if (str[*i] == 'x')
		print_x(args, count);
	else if (str[*i] == 'X')
		print_x_maj(args, count);
	(*i) += 1;
}

void	option_notfound(const char *buff, int *i, int *count)
{
	(*count)--;
	if (buff[(*i) + 1])
	{
		(*i) += 2;
		ft_putchar('%');
		ft_putchar(buff[(*i) - 1]);
		(*count) += 3;
	}
	else
		(*i)++;
}

void	display_char(va_list args, const char *buff, int *i, int*count)
{
	if (buff[(*i)] == '%' && buff[(*i) + 1] == '\0')
		option_notfound(buff, i, count);
	else if (buff[(*i)] == '%')
	{
		if (buff[(*i) + 1] == '%')
		{
			ft_putchar('%');
			(*count)++;
			(*i) += 2;
			return ;
		}
		(*i)++;
		if (ft_strchr("cspdiuxX", buff[(*i)]))
			print_menu(buff, args, i, count);
		else
			option_notfound(buff, i, count);
	}
	else
	{
		write(1, &buff[(*i)++], 1);
		(*count)++;
	}
}
