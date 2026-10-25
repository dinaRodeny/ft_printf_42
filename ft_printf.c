/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 08:42:33 by user              #+#    #+#             */
/*   Updated: 2026/10/25 13:42:27 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	converter(char format, va_list arg)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	//else if (format == 'p')
	//	return (ft_print_ptr(va_arg(args, uintptr_t)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(arg, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_print_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (1);
}

int ft_printf(char* format,...)
{
   //create a new variable list
    va_list arg;
    int i;
    int cov;
    //start a new where he will point on the format that is sending by the user
    va_start(arg,format);
    i=0;
    while(format[i])
    {
     //to enter the digit afte rthe % sign 
        if(format[i]=='%')
        {
         cov+=converter(format[i + 1], arg);
        }
        i++;
        cov+=converter(format[i + 1], arg);
    }

    // end the list that we start it 
    va_end(arg);

return (cov);

}