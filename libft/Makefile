# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isojo-go <isojo-go@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 15:28:36 by isojo-go          #+#    #+#              #
#    Updated: 2022/10/11 21:41:16 by isojo-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Key variable and files definitions:

NAME		=	libft.a
INCLUDES	=	inc/
SRC_DIR		=	src/
CC			=	gcc
CCFLAGS		=	-Wall -Wextra -Werror
AR			=	ar rc
RM			=	rm -f


# Source Files:

SRC_FILES	=	ft_is/ft_isalnum.c ft_is/ft_isalpha.c ft_is/ft_isascii.c \
				ft_is/ft_isdigit.c ft_is/ft_isprint.c ft_is/ft_isspace.c \
				ft_is/ft_ischarset.c ft_is/ft_isline.c \
				ft_lst/ft_lstnew_bonus.c ft_lst/ft_lstadd_front_bonus.c \
				ft_lst/ft_lstsize_bonus.c ft_lst/ft_lstlast_bonus.c \
				ft_lst/ft_lstadd_back_bonus.c ft_lst/ft_lstdelone_bonus.c \
				ft_lst/ft_lstclear_bonus.c ft_lst/ft_lstiter_bonus.c \
				ft_lst/ft_lstmap_bonus.c \
				ft_mem/ft_bzero.c ft_mem/ft_calloc.c ft_mem/ft_memccpy.c \
				ft_mem/ft_memchr.c ft_mem/ft_memcmp.c ft_mem/ft_memcpy.c \
				ft_mem/ft_memmove.c ft_mem/ft_memset.c \
				ft_put/ft_putchar_fd.c ft_put/ft_putunbr_fd.c \
				ft_put/ft_putnbr_fd.c ft_put/ft_putstr_fd.c \
				ft_put/ft_putuhexnbr_fd.c \
				ft_str/ft_split.c ft_str/ft_strchr.c ft_str/ft_strdup.c \
				ft_str/ft_striteri.c ft_str/ft_strjoin.c ft_str/ft_strlcat.c \
				ft_str/ft_strlcpy.c ft_str/ft_strlen.c ft_str/ft_strmapi.c \
				ft_str/ft_strncmp.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c \
				ft_str/ft_strtrim.c ft_str/ft_substr.c \
				ft_to/ft_abs.c ft_to/ft_atoi.c ft_to/ft_itoa.c \
				ft_to/ft_toupper.c ft_to/ft_tolower.c ft_to/ft_digitcount.c\

SRC	=	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ	=	$(SRC:.c=.o)

#Colors:

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# **************************************************************************** #

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)libft compiled!$(DEF_COLOR)"
.c.o:
			@echo "$(BLUE)Compiling: $< $(DEF_COLOR)"
			@$(CC) $(CCFLAGS) -I$(INCLUDES) -c $< -o $(<:.c=.o)

clean:
			@$(RM) $(OBJ)
			@echo "$(YELLOW)libft object files removed.$(DEF_COLOR)"

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(RED)$(NAME) removed!$(DEF_COLOR)"

re:			fclean all

.PHONY:		all clean fclean re