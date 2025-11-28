/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 20:07:25 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		display_char(args, buff, &i, &count);
	}
	return (count);
}
