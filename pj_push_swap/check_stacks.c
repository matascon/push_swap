#include "push_swap.h"

void	check_stacks(t_data *data)
{
	int	i;
	int	j;
	int	aux;

	i = -1;
	while (++i < data->num_a)
	{
		if (data->a[i] > data->a[i + 1])
		{
			i++;
			break ;
		}
	}
	j = -1;
	while (++j < data->num_b)
	{
		if (data->b[j] < data->b[j + 1])
		{
			j++;
			break ;
		}
	}
	if (i == data->num_a && j == data->num_b)
	{
		i = -1;
		aux = data->num_b;
		while (++i < aux)
		{
			push_a(data);
			ft_putstr_fd("pa\n", 1);
		}
	}
}

int		check_stack(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->num_a)
	{
		if (data->a[i] > data->a[i + 1])
		{
			i++;
			break ;
		}
	}
	if (i == data->num_a && !data->b)
		return (0);
	else
		return (1);
}
