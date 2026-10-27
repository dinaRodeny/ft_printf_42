/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_hex.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/24 14:26:24 by username         #+#    #+#              */
/*   Updated: 2026/10/27 17:35:13 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long number, char *base)
{
	char	buffer[32];
	int		count;
	int		result;

	count = 0;
	result = 0;
	if (number == 0)
		return (ft_print_putchar('0'));
	while (number > 0)
	{
		buffer[count++] = base[number % 16];
		number /= 16;
	}
	while (count)
	{
		count--;
		result += ft_print_putchar(buffer[count]);
	}
	return (result);
}
