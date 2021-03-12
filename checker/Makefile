SRCS			=	checker.c			\
					check_args.c		\
					init_values.c		\
					check_operations.c	\
					error.c
OBJS			= $(SRCS:.c=.o)
NAME			= checker
FLAGS			= -Wall -Werror -Wextra
RM				= rm -f

.c.o:
			@gcc -c $(FLAGS) $< -o $(<:.c=.o)

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
