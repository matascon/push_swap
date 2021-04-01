#include "push_swap.h"

void	algorithm(t_data *data)
{
	int	i;

	i = 0;
	while (i <= data->index)
	{
		if (data->a[0] <= data->pivot)
		{
			push_b(data);
			ft_putstr_fd("pb\n", 1);
			i++;
		}
		else if (data->a[0] > data->pivot)
		{
			rotate(data, 'a');
			ft_putstr_fd("ra\n", 1);
		}
	}
}
