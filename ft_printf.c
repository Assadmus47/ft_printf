/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:36:25 by mkacemi           #+#    #+#             */
/*   Updated: 2025/12/01 15:39:47 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *buff, ...)
{
	va_list		args;
	int			i;
	int			count;

	if (write(1, "", 0) == -1)
		return (-1);
	if (!buff)
		return (-1);
	count = 0;
	va_start(args, buff);
	i = 0;
	while (buff[i])
		display_char(args, buff, &i, &count);
	va_end(args);
	return (count);
}

/*int	main(void)
{
	char *s = NULL;
	char c;
	int d;
	int i;
	int u;
	char *p = NULL;
	int x;
	int X;


	c = 'a';
	d = 1234566;
	i = 1234566;
	u = -12;
	x = 9999;
	X = 9999;
	ft_printf("%d\n", ft_printf("%s\n",));
	printf("%d\n", printf("%s\n",));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%c\n",c));
	printf("%d\n", printf("%c\n",c));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%d\n",d));
	printf("%d\n", printf("%d\n",d));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%i\n",i));
	printf("%d\n", printf("%i\n",i));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%u\n",u));
	printf("%d\n", printf("%u\n",u));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%x\n",x));
	printf("%d\n", printf("%x\n",x));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%X\n",X));
	printf("%d\n", printf("%X\n",X));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%p\n",p));
	printf("%d\n", printf("%p\n",p));
	printf("----------------------\n");
	ft_printf("%d\n", ft_printf("%%\n"));
	printf("%d\n", printf("%%\n"));

}
*/
