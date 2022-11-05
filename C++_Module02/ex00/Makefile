NAME = Unnecessary_violence

CC = clang++

CFLAGS = -Wall -Wextra -Werror

INCS = \
	Fixed.hpp \

SRCS = \
	main.cpp \
	Fixed.cpp

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