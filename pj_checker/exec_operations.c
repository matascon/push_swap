#include "checker.h"

void	exec_operations(t_data *data, char *line)
{
	if (!ft_strncmp(line, "sa", 3))
		swap(data, 'a');
	else if (!ft_strncmp(line, "sb", 3))
		swap(data, 'b');
	else if (!ft_strncmp(line, "ss", 3))
		swap(data, 'c');
	else if (!ft_strncmp(line, "pa", 3))
		push_a(data);
	else if (!ft_strncmp(line, "pb", 3))
		push_b(data);
	else if (!ft_strncmp(line, "ra", 3))
		rotate(data, 'a');
	else if (!ft_strncmp(line, "rb", 3))
		rotate(data, 'b');
	else if (!ft_strncmp(line, "rr", 3))
		rotate(data, 'c');		
	else if (!ft_strncmp(line, "rra", 4))
		reverse_rotate(data, 'a');
	else if (!ft_strncmp(line, "rrb", 4))
		reverse_rotate(data, 'b');
	else if (!ft_strncmp(line, "rrr", 4))
		reverse_rotate(data, 'c');
}
