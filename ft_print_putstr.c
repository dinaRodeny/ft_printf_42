/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putstr(char *str)
{
	int	count;

	if (!str)
		str = "(null)";
	count = 0;
	while (str[count])
	{
		ft_print_putchar(str[count]);
		count++;
	}
	return (count);
}
