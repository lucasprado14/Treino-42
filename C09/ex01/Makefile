NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS = $(SRC_DIR)/ft_putchar.c \
       $(SRC_DIR)/ft_swap.c \
       $(SRC_DIR)/ft_putstr.c \
       $(SRC_DIR)/ft_strlen.c \
       $(SRC_DIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re