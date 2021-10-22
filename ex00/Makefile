
NAME = ex00

STD = -std=c++98

SOURCE_FILES =	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

SRC = $(SOURCE_FILES)

OBJS = $(SRC:.cpp=.o)

CXX = clang++
CXXFLAGS = $(STD) -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
	rm -rf $(OBJS)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all