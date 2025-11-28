
NAME = libftprintf.a

CC 	= cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

SRC = ft_printf.c utils.c

OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

all:$(NAME)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
		rm -f $(OBJ) $(DEP)

fclean:clean
		rm -f $(NAME)

re: fclean all

gitauto:
		git add .
		git commit -m "auto commit"
		git push

git:
		git add .
		git commit -m "$(msg)"
		git push

test:
		$(CC) $(CFLAGS) $(SRC)

-include $(DEP)

.PHONY: all clean fclean re