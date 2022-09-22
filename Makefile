# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 16:19:35 by isojo-go          #+#    #+#              #
#    Updated: 2022/09/22 09:47:45 by isojo-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Key variable and files definitions:

NAME = libftprintf.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = rm -f

SRC =	ft_printf.c ft_printf_utils1.c ft_printf_utils2.c ft_printf_utils3.c
OBJ = 	$(SRC:.c=.o)

INCLUDE = ft_printf.h

# **************************************************************************** #

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

.c.o:
			$(CC) $(CCFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re