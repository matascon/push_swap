#include "push_swap.h"

static int	stack_a(t_data *data)
{
	int i;

	i = -1;
	while (++i < data->num_a - 1)
	{
		if (data->a[i] > data->a[i + 1])
			break ;
	}
	return (i);
}

static int	stack_b(t_data *data)
{
	int i;

	i = -1;
	while (++i < data->num_b - 1)
	{
		if (data->b[i] < data->b[i + 1])
			break ;
	}
	return (i);
}

void		check_stacks(t_data *data)
{
	int	i;
	int	j;
	int k;
	int	aux_b;

	aux_b = data->num_b;
	i = stack_a(data);
	j = stack_b(data);
	if (i + 1 == data->num_a && j + 1 == aux_b && \
	(data->num_b == data->num_a || data->num_b + 1 == data->num_a))
	{
		k = -1;
		while (++k < aux_b)
		{
			push_a(data);
			ft_putstr_fd("pa\n", 1);
		}
	}
}

int			check_stack(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->num_a - 1)
	{
		if (data->a[i] > data->a[i + 1])
			break ;
	}
	if (i + 1 == data->num_a && !data->b)
		return (0);
	else
		return (1);
}
