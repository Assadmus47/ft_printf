/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 20:27:14 by mkacemi          ###   ########.fr       */
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

int main(void)
{
	/*int	count;

	ft_printf("ft [");
	count = ft_printf(" %s", "");
	printf("]\n count = %d\n", count);
	printf("re [");
	count = printf(" %s", "");
	printf("]\n count = %d", count);*/
	int c;
	unsigned int	nbr;
	nbr = -42;
	c = ft_printf("FT : %p",&nbr);
	printf("\n ft count : %d \n",c);
	printf("\n");
	c = printf("RE : %p",&nbr);
	printf("\n RE count : %d \n",c);
	//ft_printf(" wee [%d] cc", 0);
}