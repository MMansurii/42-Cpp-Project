NAME = convert
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCs = main.cpp ScalarConverter.cpp

all: $(NAME)

$(NAME): $(SRCs)
	$(CC) $(CFLAGS) $(SRCs) -o $(NAME)

clean:
	rm -f $(OBJs)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re