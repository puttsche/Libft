# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: puttsche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 19:41:02 by puttsche          #+#    #+#              #
#    Updated: 2017/01/10 22:07:26 by puttsche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strlen.c ft_putchar.c ft_putstr.c ft_putendl.c ft_strclr.c\
	  ft_strdup.c ft_strcmp.c ft_strncmp.c ft_strcpy.c ft_isalpha.c\
	  ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
	  ft_tolower.c ft_putnbr.c ft_atoi.c ft_strncpy.c ft_strcat.c ft_bzero.c\
	  ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c	ft_memchr.c ft_strncat.c\
	  ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_memcmp.c ft_strnew.c\
	  ft_memalloc.c ft_memdel.c ft_strdel.c ft_strequ.c ft_strnequ.c ft_strsub.c\
	  ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strtrim.c\
	  ft_strsplit.c ft_itoa.c ft_strlcat.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror
 
all: $(NAME)

$(NAME):
	gcc -c $(FLAG) $(SRC) -I .
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
