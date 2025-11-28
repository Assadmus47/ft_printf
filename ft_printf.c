/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 19:16:33 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print(const char *str, va_list args, int *i, int *count)
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

int	ft_printf(const char *buff, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start(args, buff);
	count = 0;
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '%')
		{
			if (buff[i + 1] == '%')
			{
				putchar('%');
				count++;
				i += 2;
				continue ;
			}
			i++;
			if (ft_strchr("cspdiuxX", buff[i]))
			{
				print(buff, args, &i, &count);
			}
		}
		else
		{
			write(1, &buff[i++], 1);
			count++;
		}
	}
	return (count);
}
