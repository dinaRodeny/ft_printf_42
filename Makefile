# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/17 21:49:47 by user              #+#    #+#              #
#    Updated: 2026/10/20 20:22:10 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



#complilador 
CC = cc
CFLAGS = -Wall -Wextra -Werror


SRC = ft_printf.c 
    
      
#that one to add all the .o inisdie SRC
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