# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 08:41:10 by hrasolof          #+#    #+#              #
#    Updated: 2024/03/21 08:42:25 by hrasolof         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRCS =	ft_printf.c  

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c
		cc $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY : all clean fclean all
