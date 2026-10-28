/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(char format, va_list *arg)
{
	if (format == 'c')
		return (ft_print_putchar(va_arg(*arg, int)));
	else if (format == 's')
		return (ft_print_putstr(va_arg(*arg, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_putnbr(va_arg(*arg, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(*arg, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(*arg, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_print_hex(va_arg(*arg, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(*arg, void *)));
	else if (format == '%')
		return (ft_print_putchar('%'));
	return (1);
}

static int	handle_percent(const char *format, int *i, va_list *arg)
{
	int	result;

	if (format[*i + 1] == '\0')
	{
		result = ft_print_putchar(format[*i]);
		(*i)++;
		return (result);
	}
	result = converter(format[*i + 1], arg);
	*i += 2;
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	i = 0;
	result = 0;
	while (format[i])
	{
		if (format[i] == '%')
			result += handle_percent(format, &i, &arg);
		else
		{
			result += ft_print_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (result);
}
