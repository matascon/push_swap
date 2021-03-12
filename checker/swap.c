#include "checker.h"

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
