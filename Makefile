# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleal <pleal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 08:46:18 by pealexan          #+#    #+#              #
#    Updated: 2023/02/01 08:28:42 by pleal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#----------DIRS----------#
HEADERDIR = ../headers/

SRC =	ft_abs.c \
	ft_atoi.c \
	ft_atol.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_format_putaddress2.c \
	ft_format_putaddress.c \
	ft_format_putchar.c \
	ft_format_puthexa2.c \
	ft_format_puthexa.c \
	ft_format_putnbr.c \
	ft_format_putposnbr2.c \
	ft_format_putposnbr.c \
	ft_format_putstr.c \
	ft_format_putunsignnbr.c \
	ft_get_format.c \
	ft_get_hexastr.c \
	ft_getlength.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_isquote.c \
	ft_isspace.c \
	ft_itoa.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_max.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_min.c \
	ft_printf.c \
	ft_putaddress.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_puthexa.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_putunsignednbr.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_utoa.c \
	ft_wordcount.c \
	get_next_line.c \
	get_next_line_multifd.c \

#--------COMMANDS--------#
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

OBJ = ${SRC:.c=.o}

#---------RULES---------#
.c.o:
		$(CC) $(CFLAGS) -c -I$(HEADERDIR) $< -o ${<:.c=.o}

all: 		$(NAME)

$(NAME): 	$(OBJ)
		@$(AR) $(NAME) $(OBJ)
	
clean:
		@$(RM) $(OBJ)

fclean: 	clean
		@$(RM) $(NAME)
	
re: 		fclean all
