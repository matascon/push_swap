#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef	struct	s_data
{
	int			*a;
	int			*b;
	int			*aux;
	int			*sort;
	int			pivot;
	int			index;
	int			num_a;
	int			num_b;
	int			argc;
	char		**argv;
}				t_data;

int		check_args(int argc, char **argv);
t_data	*init_values(t_data *data, int argc, char **argv);
void	analyzer(t_data *data);
void	algorithm(t_data *data);
int		check_stack(t_data *data);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	swap(t_data *data, char c);
void	reverse_rotate(t_data *data, char c);
void	rotate(t_data *data, char c);
void	check_stacks(t_data *data);
void	ft_error(t_data *data);
void	ft_exit(t_data *data);

#endif