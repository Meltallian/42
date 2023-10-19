NAME = printf_ex
# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror

LFLAGS = -L../libft # Libraries path (to the libft directory where libft.a is located)

LIBS = -lft # The libraries to link against

INCLUDES_DIR = -I./includes  # Assumes you have a local 'includes' directory in 'printf'

LIBFT_INCLUDES = -I../libft/includes  # path to the libft header files

SRC = main.c

LIBFT_SRC = \
	../libft/ft_atoi.c ../libft/ft_bzero.c ../libft/ft_calloc.c ../libft/ft_isalnum.c ../libft/ft_isalpha.c \
	../libft/ft_isascii.c ../libft/ft_isdigit.c ../libft/ft_isprint.c ../libft/ft_memchr.c ../libft/ft_memcmp.c \
	../libft/ft_memcpy.c ../libft/ft_memmove.c ../libft/ft_memset.c ../libft/ft_strchr.c ../libft/ft_strdup.c \
	../libft/ft_strjoin.c ../libft/ft_strlcat.c ../libft/ft_strlcpy.c ../libft/ft_strlen.c ../libft/ft_strncmp.c \
	../libft/ft_strnstr.c ../libft/ft_strrchr.c ../libft/ft_substr.c ../libft/ft_tolower.c ../libft/ft_toupper.c \
	../libft/ft_strtrim.c ../libft/ft_split.c ../libft/ft_itoa.c ../libft/ft_strmapi.c ../libft/ft_striteri.c \
	../libft/ft_putchar_fd.c ../libft/ft_putstr_fd.c ../libft/ft_putendl_fd.c ../libft/ft_putnbr_fd.c \
	../libft/ft_lstnew.c ../libft/ft_lstadd_front.c ../libft/ft_lstsize.c ../libft/ft_lstlast.c \
	../libft/ft_lstadd_back.c ../libft/ft_lstdelone.c ../libft/ft_lstclear.c ../libft/ft_lstiter.c \
	../libft/ft_lstmap.c


OBJ = $(SRC:.c=.o)

TARGET = libft.a

#Default target (target is the name of the final executable)
all: $(NAME)

$(NAME): $(OBJ) ../libft/libft.a
	$(CC) $(CFLAGS) $(INCLUDES_DIR) $(OBJ) $(LFLAGS) $(LIBS) -o $(NAME)


../libft/libft.a: $(LIBFT_OBJ)
	ar rcs $@ $^

../libft/%.o: ../libft/%.c
	$(CC) $(CFLAGS) $(LIBFT_INCLUDES) -c $< -o $@

# Compiling
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES_DIR) -c $< -o $@

# Cleaning up
clean:
	rm -f $(OBJ)
	rm -f ../libft/*.o

fclean: clean
	rm -f $(NAME)
	rm -f ../libft/libft.a

re: fclean all

# Run target (if you want to compile and then immediately run)
run: $(TARGET)
	./$(TARGET)

# Protecting
.PHONY: all clean fclean re run