/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:41:21 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/27 20:50:39 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int		ft_strchr(const char *s, char c);
void	ft_putnbr_base(int nbr, char *base, int *count);
void	ft_putnbr_base_unsigned(unsigned int nbr, char *base, int *count);
void	ft_putchar(char c);
void	ft_putstr(char *str, int *count);