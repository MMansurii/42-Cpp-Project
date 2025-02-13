

NAME 				= a
SRCS 				= main.cpp Base.cpp
CFLAGS	 			= -Wall -Werror -Wextra -std=c++98
OBJS        		= $(SRCS:%.cpp=%.o)
CC = c++

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)


clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)


re: fclean all

.PHONY: all clean fclean re
