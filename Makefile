# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysonmez <ysonmez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 12:03:05 by ysonmez           #+#    #+#              #
#    Updated: 2021/06/22 16:31:16 by ysonmez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRCS	=		ft_atoi \
				ft_bzero \
				ft_calloc \
				ft_isalnum \
				ft_isalpha \
				ft_isascii \
				ft_isdigit \
				ft_isprint \
				ft_itoa \
				ft_memccpy \
				ft_memchr \
				ft_memcmp \
				ft_memmove \
				ft_memset \
				ft_putchar_fd \
				ft_putendl_fd \
				ft_putnbr_fd \
				ft_putstr_fd \
				ft_split \
				ft_strchr \
				ft_strdup \
				ft_strjoin \
				ft_strlcpy \
				ft_strlcat \
				ft_strlen \
				ft_strmapi \
				ft_strncmp \
				ft_strnstr \
				ft_strrchr \
				ft_strtrim \
				ft_substr \
				ft_tolower \
				ft_toupper \

OBJS	=		$(SRCS:.c=.o)

BSRCS	=		ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \


BOBJS	=		$(BSRCS:.c=.o)

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror

AR		=		ar rc

RAN		=		ranlib

RM		=		rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I includes

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RAN) $(NAME)

bonus:		$(NAME)
			$(AR) $(NAME) $(BOBJS)
			$(RAN) $(NAME)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

all:		$(NAME)

re:			fclean all

.PHONY:		clean fclean all re bonus
