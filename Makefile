# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahlyel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 13:21:42 by aahlyel           #+#    #+#              #
#    Updated: 2022/10/30 01:34:03 by aahlyel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OBJS = 	ft_atoi.o\
		ft_bzero.o\
		ft_calloc.o\
		ft_isalnum.o\
		ft_isalpha.o\
		ft_isascii.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_memcpy.o\
		ft_memmove.o\
		ft_memset.o\
		ft_strchr.o\
		ft_strdup.o\
		ft_strlcat.o\
		ft_strlcpy.o\
		ft_strlen.o\
		ft_strncmp.o\
		ft_strnstr.o\
		ft_strrchr.o\
		ft_tolower.o\
		ft_toupper.o\
		ft_substr.o\
		ft_strjoin.o\
		ft_strtrim.o\
		ft_split.o\
		ft_itoa.o\
		ft_strmapi.o\
		ft_striteri.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_putnbr_fd.o

BONUS =	ft_lstnew.o\
		ft_lstadd_front.o\
		ft_lstsize.o\
		ft_lstlast.o\
		ft_lstadd_back.o\
		ft_lstdelone.o\
		ft_lstclear.o\
		ft_lstiter.o\
		ft_lstmap.o

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rcs

NAME = libft.a

all : ${NAME}

${NAME} : ${OBJS}
	${AR} ${NAME} $^

%.o : %.c libft.h
	${CC} ${CFLAGS} -c -o $@ $<

bonus : ${NAME} ${BONUS}
	${AR} ${NAME} $^

clean :
	${RM} ${OBJS} ${BONUS}

fclean : clean
	${RM} ${NAME}

re : fclean all bonus

.PHONY : bonus fclean clean re
