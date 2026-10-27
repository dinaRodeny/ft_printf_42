# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: delroudi <delroudi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/17 21:49:47 by user              #+#    #+#              #
#    Updated: 2026/10/27 17:31:03 by delroudi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#complilador 
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror


SRC = ft_printf.c \
	ft_print_putchar.c \
	ft_print_putstr.c \
	ft_print_ptr.c \
	ft_print_putnbr.c \
	ft_print_unsigned.c \
	ft_print_hex.c

OBJ = $(SRC:.c=.o)


RM = rm -f
AR = ar rcs

#Default Rule
all: $(NAME)

#implict rule fpor compiling
#cc -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


#ar -rcs libft.a *.o
# Package library
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Clean object files
clean:
	$(RM) $(OBJ)

# Clean all
fclean: clean
	$(RM) $(NAME)

# Recompile everything
re: fclean all

 # Phony targets (They are not real files)
.PHONY: all clean fclean re