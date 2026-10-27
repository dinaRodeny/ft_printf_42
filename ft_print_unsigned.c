/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 23:08:30 by user              #+#    #+#             */
/*   Updated: 2026/10/27 14:20:12 by user             ###   ########.fr       */
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
