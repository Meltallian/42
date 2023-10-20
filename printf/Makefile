NAME = libftprintf.out
# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES_DIR = -I./includes -I../libft
LFLAGS = -L../libft # Libraries path (to the libft directory where libft.a is located)
LIBS = -lft # The libraries to link against

SRC = conv1.c conv2.c main.c

OBJ = $(SRC:.c=.o)

#Default target (target is the name of the final executable)
all: $(NAME)

$(NAME): $(OBJ) ../libft/libft.a
	$(CC) $(CFLAGS) $(INCLUDES_DIR) $(OBJ) $(LFLAGS) $(LIBS) -o $(NAME)

# Compiling
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES_DIR) -c $< -o $@

# Cleaning up
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Run target (if you want to compile and then immediately run)
run: $(TARGET)
	./$(TARGET)

# Protecting
.PHONY: all clean fclean re run