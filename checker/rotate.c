#include "checker.h"

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
