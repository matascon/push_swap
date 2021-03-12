#include "checker.h"

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
