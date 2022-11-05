NAME = phonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror

INCS = \
	phonebook.hpp

SRCS = \
	main.cpp \
	phonebook.cpp
	

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