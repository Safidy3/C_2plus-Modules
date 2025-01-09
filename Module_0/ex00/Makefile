SRCS = megaphone.cpp
NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)

debug: all
	@valgrind --track-fds=yes --suppressions=readline.supp --leak-check=full --track-origins=yes --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re