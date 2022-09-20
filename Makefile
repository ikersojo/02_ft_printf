# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 15:28:36 by isojo-go          #+#    #+#              #
#    Updated: 2022/09/18 11:30:15 by isojo-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Key variable and files definitions:

NAME = libftprintf.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = rm -f

SRC =	ft_abs.c ft_isspace.c ft_memcpy.c ft_strlen.c ft_itoa.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_printf.c

# SRC_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
# 		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
# 		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = 	$(SRC:.c=.o)

# OBJ_B =	$(SRC_B:.c=.o)

INCLUDE = ft_printf.h

# **************************************************************************** #

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

# bonus:		$(OBJ) $(OBJ_B)
# 			$(AR) $(NAME) $(OBJ) $(OBJ_B)

.c.o:
			$(CC) $(CCFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus