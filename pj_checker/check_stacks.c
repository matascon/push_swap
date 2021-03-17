#include "checker.h"

void	check_stacks(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->num_a - 1)
	{
		if (data->a[i] > data->a[i + 1])
		{
			ft_putstr_fd("KO\n", 1);
			return ;
		}
		i++;
	}
	if (data->b != NULL)
	{
		ft_putstr_fd("KO\n", 1);
		return ;
	}
	ft_putstr_fd("OK\n", 1);
}
