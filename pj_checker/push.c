#include "checker.h"

void	push_a(t_data *data)
{
	int	i;

	if (data->num_b)
	{
		data->aux = data->a;
		data->num_a++;
		data->a = (int *)ft_calloc(data->num_a, sizeof(int));
		data->a[0] = data->b[0];
		i = 0;
		while (++i < data->num_a)
			data->a[i] = data->aux[i - 1];
		free(data->aux);
		data->aux = data->b;
		data->num_b--;
		data->b = (int *)ft_calloc(data->num_b, sizeof(int));
		i = -1;
		while (++i < data->num_b)
			data->b[i] = data->aux[i + 1];
		free(data->aux);
		if (!data->num_b)
			data->b = NULL;
	}
}

void	push_b(t_data *data)
{
	int	i;

	if (data->num_a)
	{
		data->aux = data->b;
		data->num_b++;
		data->b = (int *)ft_calloc(data->num_b, sizeof(int));
		data->b[0] = data->a[0];
		i = 0;
		while (++i < data->num_b)
			data->b[i] = data->aux[i - 1];
		free(data->aux);
		data->aux = data->a;
		data->num_a--;
		data->a = (int *)ft_calloc(data->num_a, sizeof(int));
		i = -1;
		while (++i < data->num_a)
			data->a[i] = data->aux[i + 1];
		free(data->aux);
		if (!data->num_a)
			data->a = NULL;
	}
}
