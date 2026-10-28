/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delroudi                                             */
/*   <delroudi@student.42malaga.com>                           */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:00:00 by delroudi          #+#    #+#             */
/*   Updated: 2026/10/28 13:00:00 by delroudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# ifndef _POSIX_C_SOURCE
#  define _POSIX_C_SOURCE 200809L
# endif
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_ptr(void *ptr);
int	ft_print_putchar(int c);
int	ft_print_putstr(char *str);
int	ft_print_putnbr(int n);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hex(unsigned long long number, char *base);

#endif
