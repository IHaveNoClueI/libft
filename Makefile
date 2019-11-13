# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: keblazer <keblazer@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 16:52:53 by keblazer       #+#    #+#                 #
#    Updated: 2019/11/11 10:04:58 by keblazer      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
NAME 	= 	libft.a
SRCS = *.c
OBJS = *.o

$(NAME):
		$(CC) $(CFLAGS) -c $(SRCS)
		$(AR) $(NAME) $(OBJS)
		echo "[INFO] Library [$(NAME)] created!"

all: $(NAME)

clean:
		rm -f $(OBJS)
		echo "[INFO] Objects removed!"

fclean: clean
		rm -f $(NAME)
		echo "[INFO] Library [$(NAME)] removed!"

re:	fclean all
