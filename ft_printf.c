/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/27 20:51:10 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(va_list args)
{
	if 
}

int	ft_printf(const char *str, ...)
{
	va_list 	args;
	int			i;

	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (ft_strchr("", str[i]))
			{
				
			}
		}
		write(1, &str[i++], 1);
	}

}