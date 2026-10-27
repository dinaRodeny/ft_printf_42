/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_putnbr.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 12:56:03 by username         #+#    #+#              */
/*   Updated: 2026/10/27 17:32:02 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_digits(char *digits, unsigned int length)
{
	int	count;

	count = 0;
	while (length > 0)
	{
		length--;
		count += ft_print_putchar(digits[length]);
	}
	return (count);
}

static int	print_sign(long *num)
{
	if (*num < 0)
	{
		*num *= -1;
		return (ft_print_putchar('-'));
	}
	return (0);
}

int	ft_print_putnbr(int n)
{
	unsigned int	i;
	char			digits[11];
	int				count;
	long			num;

	i = 0;
	num = n;
	if (num == 0)
		return (ft_print_putchar('0'));
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	count = print_sign(&num);
	while (num > 0)
	{
		digits[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	return (count + print_digits(digits, i));
}
