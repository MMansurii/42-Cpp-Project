NAME = replace

SRCS = main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re