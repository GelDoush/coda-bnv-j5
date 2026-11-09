NAME = exercice_makefile

CFLAGS = -Wall -Wextra -O2

SRCS = main.c \
       functions.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all
