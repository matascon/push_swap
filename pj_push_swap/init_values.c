#include "push_swap.h"

static long	ft_long_atoi(const char *nptr)
{
	int				i;
	int				sign;
	unsigned long	number;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' \
	|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	number = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		number = (number * 10) + (nptr[i] - 48);
		i++;
	}
	return ((long)(number * sign));
}

static void	stack_a(t_data *data)
{
	int		i;
	int		j;
	long	x;

	i = 0;
	while (i < data->argc)
	{
		x = ft_long_atoi(data->argv[i + 1]);
		if (x < -2147483648 || x > 2147483647)
			ft_error(data);
		data->a[i] = (int)x;
		j = 0;
		while (j < i)
		{
			if (data->a[j] == data->a[i])
				ft_error(data);
			j++;
		}
		i++;
	}
	data->num_a = i;
	data->num_b = 0;
}

t_data		*init_values(t_data *data, int argc, char **argv)
{
	data = (t_data *)ft_calloc(1, sizeof(t_data));
	data->argc = argc - 1;
	data->argv = argv;
	data->a = (int *)ft_calloc(data->argc, sizeof(int));
	data->b = NULL;
	data->aux = NULL;
	stack_a(data);
	data->min = 0;
	data->pos_min = 0;
	return (data);
}
