/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_ptr.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/25 21:26:59 by username         #+#    #+#              */
/*   Updated: 2026/10/27 17:27:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long long	address;
	int					len;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	address = (unsigned long long) ptr;
	len = write(1, "0x", 2);
	len += ft_print_hex(address, "0123456789abcdef");
	return (len);
}
