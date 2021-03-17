#include "push_swap.h"

void	analyzer(t_data *data)
{
	int	i;

	i = -1;
	data->min = data->a[0];
	data->pos_min = 1;
	while (++i < data->num_a)
	{
		if (data->min > data->a[i])
		{
			data->min = data->a[i];
			data->pos_min = i + 1;
		}
	}
}
