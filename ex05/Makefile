CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op
SRC = ft_atoi.c main.c operations.c
OBJ = $(SRC:%.c=obj/%.o)

all: obj $(NAME)

obj:
	mkdir -p obj

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

obj/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
