#include "push_swap.h"

void	algorithm_a(t_data *data)
{
	if (data->a[0] < data->median)
	{
		push_b(data);
		ft_putstr_fd("pb\n", 1);
	}
	else if (data->a[0] > data->a[1] && data->a[0] >= data->median && data->a[0] != data->max_a)
	{
		swap(data, 'a');
		ft_putstr_fd("sa\n", 1);
	}
	else if ((data->a[0] < data->a[1] && data->a[0] >= data->median) || data->a[0] == data->max_a)
	{
		rotate(data, 'a');
		ft_putstr_fd("ra\n", 1);
	}
}

void	algorithm_b(t_data *data)
{
	if (data->b[0] == data->max_b)
	{
		push_a(data);
		ft_putstr_fd("pa\n", 1);
	}
	else if ((float)data->pos_max_b / data->num_b <= 0.5 && data->num_b > 1)
	{
		rotate(data, 'b');
		ft_putstr_fd("rb\n", 1);
	}
	else if ((float)data->pos_max_b / data->num_b > 0.5 && data->num_b > 1)
	{
		reverse_rotate(data, 'b');
		ft_putstr_fd("rrb\n", 1);
	}
}
