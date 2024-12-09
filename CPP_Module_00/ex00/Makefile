NAME = megaphone

FLAGs = -Wall -Wextra -Werror -std=c++98

CC = c++
RM = rm -f
SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGs) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re