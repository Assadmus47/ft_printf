/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/28 16:44:19 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(const char *str, va_list args, int *i, int *count)
{
	if (str[*i] == 'c')
	{
		int	chr;
		chr = va_arg(args, int);
        ft_putchar(chr);
		count++;
		(*i) += 1;
	}
	else if (str[*i] == 's')
	{
		char *chr;
		chr = va_arg(args, char *);
		ft_putstr(chr, count);
		count++;
		(*i) += 1;
	}
	/*
	else if (str[*i] == 'p')
	{
    	void *ptr;
		ptr = va_arg(arg)
	}
	*/
	else if (str[*i] == 'd' || str[*i] == 'i')
	{
		int	nbr;
		nbr = va_arg(args, int);
        ft_putnbr_base(nbr, "0123456789", count);
		(*i) += 1;
	}
	else if (str[*i] == 'u')
	{
		unsigned int	nbr;
		nbr = va_arg(args, int);
        ft_putnbr_base_unsigned(nbr, "0123456789", count);
		(*i) += 1;
	}
	else if (str[*i] == 'x')
	{
		int	nbr;
		nbr = va_arg(args, int);
        ft_putnbr_base(nbr, "0123456789abcdef", count);
		(*i) += 1;
	}
	else if (str[*i] == 'X')
	{
		int	nbr;
		nbr = va_arg(args, int);
        ft_putnbr_base(nbr, "0123456789ABCDEF", count);
		(*i) += 1;
	}
}

int	ft_printf(const char *buff, ...)
{
	va_list 	args;
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
				i+=2;
				continue ;
			}
			i++;
			count++;
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
int	main(void)
{
	ft_printf("hello %c \n", '5');
	//printf("--ft : %d \n",ft_printf("%%"));
	//printf("--re : %d \n",printf("%%"));
	/*printf("%u",(unsigned int)42);
	printf("\n");
	ft_printf("%u",(unsigned int)42);*/
	//ft_printf("%%%%c",'o');
}