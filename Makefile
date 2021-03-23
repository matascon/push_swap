SRCS_CHECKER	=	pj_checker/checker.c			\
					pj_checker/check_args.c			\
					pj_checker/init_values.c		\
					pj_checker/check_operations.c	\
					pj_checker/exec_operations.c	\
					pj_checker/swap.c				\
					pj_checker/push.c				\
					pj_checker/rotate.c				\
					pj_checker/reverse.c			\
					pj_checker/check_stacks.c		\
					pj_checker/error.c
OBJS_CHECKER	= $(SRCS_CHECKER:.c=.o)
NAME_CHECKER	= checker
SRCS_PUSH_SWAP	=	pj_push_swap/push_swap.c		\
					pj_push_swap/check_args.c		\
					pj_push_swap/init_values.c		\
					pj_push_swap/analyzer.c			\
					pj_push_swap/check_stacks.c		\
					pj_push_swap/algorithm.c		\
					pj_push_swap/operations.c		\
					pj_push_swap/error.c
OBJS_PUSH_SWAP	= $(SRCS_PUSH_SWAP:.c=.o)
NAME_PUSH_SWAP	= push_swap
FLAGS			= -Wall -Werror -Wextra
RM				= rm -f

.c.o:
			@gcc -c $< -o $(<:.c=.o)

$(NAME_CHECKER):	$(OBJS_CHECKER) $(NAME_PUSH_SWAP) _libft
					@gcc -o $(NAME_CHECKER) $(OBJS_CHECKER) $(shell find libft/ -name "*.a")

$(NAME_PUSH_SWAP):	$(OBJS_PUSH_SWAP) _libft
					@gcc -o $(NAME_PUSH_SWAP) $(OBJS_PUSH_SWAP) $(shell find libft/ -name "*.a")

all:		$(NAME_CHECKER)

clean:
			$(RM) $(OBJS_CHECKER) $(OBJS_PUSH_SWAP)

fclean:		clean
			$(RM) $(NAME_CHECKER) $(NAME_PUSH_SWAP)
			@make fclean -C libft

re:			fclean all

_libft:
			@make -C libft

Norme:
			norminette -R CheckForbiddenSourceHeader $(SRCS)

.PHONY:		all clean fclean re bonus Norme checker push_swap
