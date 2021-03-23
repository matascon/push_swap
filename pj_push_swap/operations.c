#include "push_swap.h"

void	push_a(t_data *data)
{
	int	i;

	if (data->num_b > 0)
	{
		data->aux = data->a;
		data->num_a++;
		data->a = (int *)ft_calloc(data->num_a, sizeof(int));
		data->a[0] = data->b[0];
		i = 0;
		while (++i < data->num_a)
			data->a[i] = data->aux[i - 1];
		if (data->aux)
			free(data->aux);
		data->aux = data->b;
		data->num_b--;
		if (data->num_b > 0)
		{
			data->b = (int *)ft_calloc(data->num_b, sizeof(int));
			i = -1;
			while (++i < data->num_b)
				data->b[i] = data->aux[i + 1];
		}
		else
			data->b = NULL;
		free(data->aux);
	}
}

void	push_b(t_data *data)
{
	int	i;

	if (data->num_a > 0)
	{
		data->aux = data->b;
		data->num_b++;
		data->b = (int *)ft_calloc(data->num_b, sizeof(int));
		data->b[0] = data->a[0];
		i = 0;
		while (++i < data->num_b)
			data->b[i] = data->aux[i - 1];
		if (data->aux)
			free(data->aux);
		data->aux = data->a;
		data->num_a--;
		if (data->num_a > 0)
		{
			data->a = (int *)ft_calloc(data->num_a, sizeof(int));
			i = -1;
			while (++i < data->num_a)
				data->a[i] = data->aux[i + 1];
		}
		else
			data->a = NULL;
		free(data->aux);
	}
}

void	swap(t_data *data, char c)
{
	int	swap;

	if ((c == 'a' || c == 'c') && data->a != NULL)
	{
		if (data->num_a > 1)
		{
			swap = data->a[0];
			data->a[0] = data->a[1];
			data->a[1] = swap;
		}
	}
	if ((c == 'b' || c == 'c') && data->b != NULL)
	{
		if (data->num_b > 1)
		{
			swap = data->b[0];
			data->b[0] = data->b[1];
			data->b[1] = swap;
		}
	}
}

void	reverse_rotate(t_data *data, char c)
{
	int	i;
	int	swap;

	if ((c == 'a' || c == 'c') && data->num_a)
	{
		swap = data->a[data->num_a - 1];
		i = data->num_a;
		while (--i > 0)
			data->a[i] = data->a[i - 1];
		data->a[i] = swap;
	}
	if ((c == 'b' || c == 'c') && data->num_b)
	{
		swap = data->b[data->num_b - 1];
		i = data->num_b;
		while (--i > 0)
			data->b[i] = data->b[i - 1];
		data->b[i] = swap;
	}
}

void	rotate(t_data *data, char c)
{
	int	i;
	int	swap;

	if ((c == 'a' || c == 'c') && data->num_a)
	{
		swap = data->a[0];
		i = -1;
		while (++i < data->num_a - 1)
			data->a[i] = data->a[i + 1];
		data->a[i] = swap;
	}
	if ((c == 'b' || c == 'c') && data->num_b)
	{
		swap = data->b[0];
		i = -1;
		while (++i < data->num_b - 1)
			data->b[i] = data->b[i + 1];
		data->b[i] = swap;
	}
}
