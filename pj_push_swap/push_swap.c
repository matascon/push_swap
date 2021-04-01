#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_data	*data;
	int		i;

	data = NULL;
	if (!(argc - 1))
		ft_error(data);
	if (check_args(argc, argv))
		ft_error(data);
	data = init_values(data, argc, argv);
	algorithm(data);
		printf("STACK A ---> ");
		i = -1;
		while (++i < data->num_a)
			printf("%i ", data->a[i]);
		printf("\nSTACK B ---> ");
		i = -1;
		while (++i < data->num_b)
			printf("%i ", data->b[i]);
		printf("\npivot = %i\n", data->pivot);
	ft_exit(data);
	return (0);
}
