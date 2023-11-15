# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchihab <mchihab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 16:50:55 by mchihab           #+#    #+#              #
#    Updated: 2023/11/15 18:14:17 by mchihab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_memmove.c\
		ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

SRCSB = ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c


NAME = libft.a

OBJECT = $(SRCS:.c=.o)

OBJECTB = $(SRCSB:.c=.o)

FLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJECT)  $(OBJECTB)
			ar r $(NAME) $(OBJECT) $(OBJECTB)

bonus : $(OBJECTB) all
		ar rcs $(NAME) $(OBJECTB)

%.o : %.c
			cc $(FLAGS) -c $<

clean :
			rm -rf $(OBJECT)
			rm -rf $(OBJECTB)

fclean : clean
			rm -rf $(NAME)

re : fclean all

