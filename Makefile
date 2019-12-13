# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: keblazer <keblazer@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 16:52:53 by keblazer       #+#    #+#                 #
#    Updated: 2019/11/25 14:30:16 by keblazer      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
AR = ar rc
NAME 	= 	libft.a
SRCS = *.c
OBJS = *.o

$(NAME):
		$(CC) $(CFLAGS) $(SRCS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
