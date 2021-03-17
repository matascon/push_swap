#include "push_swap.h"

void	algorithm(t_data *data)
{
	if (data->a[0] == data->min)
	{
		push_b(data);
		ft_putstr_fd("pb\n", 1);
	}
	else if (data->a[1] < data->a[0])
	{
		swap(data, 'a');
		ft_putstr_fd("sa\n", 1);
	}
	else if ((float)data->pos_min / data->num_a > 0.5)
	{
		reverse_rotate(data, 'a');
		ft_putstr_fd("rra\n", 1);
	}
	else if ((float)data->pos_min / data->num_a <= 0.5)
	{
		rotate(data, 'a');
		ft_putstr_fd("ra\n", 1);
	}
}
