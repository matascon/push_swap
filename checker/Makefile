SRCS			=	checker.c			\
					check_args.c		\
					init_values.c		\
					check_operations.c	\
					exec_operations.c	\
					swap.c				\
					push.c				\
					rotate.c			\
					reverse.c			\
					check_stacks.c		\
					error.c
OBJS			= $(SRCS:.c=.o)
NAME			= checker
FLAGS			= -Wall -Werror -Wextra -g3 -fsanitize=address
RM				= rm -f

.c.o:
			@gcc -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) _libft
			@gcc -o $(NAME) $(OBJS) $(shell find ../libft/ -name "*.a")

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			@make fclean -C ../libft

re:			fclean all

_libft:
			@make -C ../libft

Norme:
			norminette -R CheckForbiddenSourceHeader $(SRCS)

.PHONY:		all clean fclean re bonus Norme
