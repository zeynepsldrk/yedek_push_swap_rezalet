SRCS	= error_check.c ft_split.c libft.c \
			main_utils.c main.c mini_sorting_utils.c \
			mini_sorting.c push_functions.c reverse_rotate_func.c \
			rotate_functions.c sorting_utils.c sorting.c \
			swap_functions.c utils.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap
CC	= cc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re