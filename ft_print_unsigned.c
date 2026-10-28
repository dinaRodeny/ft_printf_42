/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	char	digit[255];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (num == 0)
		count += ft_print_putchar('0');
	while (num)
	{
		digit[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		count += ft_print_putchar(digit[i]);
	}
	return (count);
}
