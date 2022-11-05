NAME = Unnecessary_violence

CC = clang++

CFLAGS = -Wall -Wextra -Werror

INCS = \
	HumanA.hpp \
	HumanB.hpp \
	Weapon.hpp

SRCS = \
	main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(cc) $(CFLAGS) $(OBJS) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean