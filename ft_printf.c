/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/30 15:55:06 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *buff, ...)
{
	va_list		args;
	int			i;
	int			count;

	count = 0;
	va_start(args, buff);
	i = 0;
	while (buff[i])
	{
		display_char(args, buff, &i, &count);
	}
	va_end(args);
	return (count);
}
