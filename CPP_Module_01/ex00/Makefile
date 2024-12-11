NAME = Zombie

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean