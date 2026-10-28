/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
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
