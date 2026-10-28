/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:24:19 by username          #+#    #+#             */
/*   Updated: 2026/10/28 13:24:28 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long long	address;
	int					len;

	address = (unsigned long long) ptr;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	len += ft_print_hex(address, "0123456789abcdef");
	return (len);
}
