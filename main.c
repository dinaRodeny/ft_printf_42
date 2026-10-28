/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:44:25 by username          #+#    #+#             */
/*   Updated: 2026/10/28 14:25:17 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:25:43 by username          #+#    #+#             */
/*   Updated: 2026/10/28 13:44:24 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char			c;
	char			*str;
	int				neg;
	int				zero;
	unsigned int	unsigned_value;
	void			*ptr;
	void			*null_ptr;

	c = 'Z';
	ft_printf("char: %c\n", c);
	printf("char: %c\n", c);
	str = "42 Malaga";
	ft_printf("string: %s\n", str);
	printf("string: %s\n", str);
	neg = -42;
	ft_printf("int: %d | %i\n", neg, neg);
	printf("int: %d | %i\n", neg, neg);
	zero = 0;
	ft_printf("zero: %d | %i\n", zero, zero);
	printf("zero: %d | %i\n", zero, zero);
	unsigned_value = 4294967295U;
	ft_printf("unsigned: %u\n", unsigned_value);
	printf("unsigned: %u\n", unsigned_value);
	ft_printf("hex lower: %x\n", unsigned_value);
	printf("hex lower: %x\n", unsigned_value);
	ft_printf("hex upper: %X\n", unsigned_value);
	printf("hex upper: %X\n", unsigned_value);
	ptr = &neg;
	null_ptr = NULL;
	ft_printf("pointer: %p\n", ptr);
	printf("pointer: %p\n", ptr);
	ft_printf("null pointer: %p\n", null_ptr);
	printf("null pointer: %p\n", null_ptr);
	ft_printf("percent: %%\n");
	printf("percent: %%\n");
	ft_printf("mixed: %d %s %c %x %X %p %%\n", neg, str, c, unsigned_value, unsigned_value, ptr);
	return (0);
}
