NAME = FragTrap
FLAGS = -Wall -Wextra -Werror #-std=c++98 #-fsanitize=address -g

HEADER = \
ClapTrap.hpp \
ScavTrap.hpp \
FragTrap.hpp 

SRCS = \
ClapTrap.cpp \
ScavTrap.cpp \
FragTrap.cpp \
main.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS) 
	c++ $(OBJS) $(FLAGS) -o $(NAME)



%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

# test: all
# 	./$(NAME)


.PHONY: all clean fclean re test