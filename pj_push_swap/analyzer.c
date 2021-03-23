#include "push_swap.h"

void	analyzer(t_data *data)
{
	int	i;

	i = -1;
	data->min_a = data->a[0];
	data->pos_min_a = 1;
	while (++i < data->num_a)
	{
		if (data->min_a > data->a[i])
		{
			data->min_a = data->a[i];
			data->pos_min_a = i + 1;
		}
	}
	i = -1;
	if (data->a)
	{
		data->max_a = data->a[0];
		data->pos_max_a = 1;
		while (++i < data->num_a)
		{
			if (data->max_a < data->a[i])
			{
				data->max_a = data->a[i];
				data->pos_max_a = i + 1;
			}
		}
	}
	i = -1;
	if (data->b)
	{
		data->max_b = data->b[0];
		data->pos_max_b = 1;
		while (++i < data->num_b)
		{
			if (data->max_b < data->b[i])
			{
				data->max_b = data->b[i];
				data->pos_max_b = i + 1;
			}
		}
	}
}
