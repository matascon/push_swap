#ifndef CHECKER_H
#define CHECKER_H

# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef	struct	s_data
{
	int			*a;
	int			*b;
	int			*aux;
	int			num_a;
	int			num_b;
	int			argc;
	char		**argv;
}				t_data;

int		check_args(int argc, char **argv);
t_data	*init_values(t_data *data, int argc, char **argv);
int		check_operations(char *line);
void	exec_operations(t_data *data, char *line);
void	swap(t_data *data, char c);
void	push_a(t_data *data);
void	push_b(t_data *data);
void	rotate(t_data *data, char c);
void	reverse_rotate(t_data *data, char c);
void	check_stacks(t_data *data);
void	ft_error(t_data *data);
void	ft_exit(t_data *data);

#endif