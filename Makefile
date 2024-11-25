# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haelee <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 19:50:03 by haelee            #+#    #+#              #
#    Updated: 2024/11/20 11:49:11 by haelee           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc
CFLAG = -Wall -Wextra -Werror

RM	= rm -f

AR	= ar
ARFLAGS	= crs

INCLUDES	= ./libft.h

SRCS	= ft_atoi.c	ft_bzero.c	ft_calloc.c	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_itoa.c	ft_memchr.c	ft_memcmp.c	ft_memcpy.c	ft_memmove.c	ft_memset.c	ft_putchar_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_putstr_fd.c	ft_split.c	ft_strdup.c	ft_striteri.c	ft_strjoin.c	ft_strlcat.c	ft_strlcpy.c	ft_strlen.c	ft_strmapi.c	ft_strncmp.c	ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	ft_substr.c	ft_tolower.c	ft_toupper.c	ft_strchr.c

OBJS	= $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

.PHONY : all clean fclean re
