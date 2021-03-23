#include "push_swap.h"

void	algorithm(t_data *data)
{
	int	x;

	if (data->a[0] < data->median)
	{
		push_b(data);
		ft_putstr_fd("pb\n", 1);
	}
	else if ((data->a[1] < data->a[0]) || \
	(data->b[1] > data->b[0] && data->b[0] > data->b[data->num_b - 1] && data->num_b > 1))
	{
		/*if ((data->a[1] < data->a[0] && data->num_a > 1) && \
		(data->b[1] > data->b[0] && data->num_b > 1))
		{
			swap(data, 'c');
			ft_putstr_fd("ss\n", 1);
		}*/
		if (data->a[1] < data->a[0])
		{
			swap(data, 'a');
			ft_putstr_fd("sa\n", 1);
		}
		else
		{
			swap(data, 'b');
			ft_putstr_fd("sb\n", 1);
		}
	}
	else if (((data->a[data->num_a - 1] < data->median || (float)data->pos_min_a / data->num_a > 0.5) && (float)data->pos_max_a / data->num_a > 0.5)|| \
	(data->b[data->num_b - 1] > data->b[0] && data->num_b > 1))
	{
		if (data->a[data->num_a - 1] < data->median || (float)data->pos_min_a / data->num_a > 0.5)
		{
			reverse_rotate(data, 'a');
			ft_putstr_fd("rra\n", 1);
		}
		else
		{
			reverse_rotate(data, 'b');
			ft_putstr_fd("rrb\n", 1);
		}
	}
	else if ((data->a[1] < data->median || (float)data->pos_min_a / data->num_a <= 0.5) || \
	(data->b[0] < data->b[1] && data->b[0] < data->b[data->num_b - 1]))
	{
		if (data->a[1] < data->median || (float)data->pos_min_a / data->num_a <= 0.5)
		{
			rotate(data, 'a');
			ft_putstr_fd("ra\n", 1);
		}
		else
		{
			rotate(data, 'b');
			ft_putstr_fd("rb\n", 1);
		}
	}
	else if ((float)data->pos_max_a / data->num_a <= 0.5)
	{
		rotate(data, 'a');
		ft_putstr_fd("ra\n", 1);
	}
}
