
NAME = libftprintf.a

CC 	= cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c display_utils.c percent_utils.c percent_utils2.c general_utils.c

OBJ = $(SRC:.c=.o)
DEP = $(SRC:.c=.d)

all:$(NAME)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -MMD -MP -I. -c $< -o $@

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
		./a.out

-include $(DEP)

.PHONY: all clean fclean re