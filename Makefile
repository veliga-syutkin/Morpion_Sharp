NAME = MorpionSharp.exe

# Utilisation de wildcard pour inclure tous les fichiers source .c
SRCS = $(wildcard srcs/*.c)

OBJS = $(SRCS:.c=.o)

CC = cc -Wall -Wextra -Werror

INCLUDES = -I./

%.o: %.c
	$(CC) $(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

make: all clean

.PHONY: all clean fclean re make