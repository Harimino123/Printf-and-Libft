# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 08:41:10 by hrasolof          #+#    #+#              #
#    Updated: 2024/03/22 09:29:13 by hrasolof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRCS =	ft_printf.c  

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: libft $(NAME)

libft:
	@make -C Libft

$(NAME): libft $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c
		cc $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		@make -C Libft fclean
		rm -f $(NAME)
re: fclean all

.PHONY : all clean fclean re libft
