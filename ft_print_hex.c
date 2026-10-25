/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:26:24 by user              #+#    #+#             */
/*   Updated: 2026/10/25 13:55:40 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_print_hex(unsigned int Dec_Number, char *base)
{
    int count;
    char * buffer[16];
    int result=0;
    while(Dec_Number)
    {
        buffer[count++]= base[Dec_Number %16];
        Dec_Number/=16;
    }
    while(count)
    {
        result+=ft_putchar(buffer[count]);
        count--;
    }
    return(result);
}