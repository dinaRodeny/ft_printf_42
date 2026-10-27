/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:55:07 by user              #+#    #+#             */
/*   Updated: 2026/10/26 08:28:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_pointer(unsigned long long ptr);
int	ft_print_putchar(int c);
int	ft_print_putstr(char *str);
int	ft_print_putnbr(int n);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hex(unsigned int number, char *base);

#endif