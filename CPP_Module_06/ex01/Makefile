NAME = ex01
RM = rm -f
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Serializer.cpp Data.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re