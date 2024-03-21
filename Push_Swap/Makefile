CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRCS = push_swap.c 

LIBFT = ./libft/libft.a

#BONUS_SRCS = 

OBJS = $(SRCS:.c=.o)
#BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME) $(LIBFT)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft 

#bonus: $(BONUS_OBJS) $(OBJS)
#	ar rc $(NAME) $(BONUS_OBJS) $(OBJS)  mete no clean -> $(BONUS_OBJS)

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.phony: all bonus clean fclean re 

$(LIBFT):
	${MAKE} --no-print-directory -C ./libft