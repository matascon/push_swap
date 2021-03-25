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
	while (check_stack_a(data))
	{
		analyzer(data);
		//printf("Valor minimo = %i y posicion = %i\n\n", data->min, data->pos_min);
		algorithm_a(data);
		/*printf("STACK A ---> ");
		i = -1;
		while (++i < data->num_a)
			printf("%i ", data->a[i]);
		printf("\nSTACK B ---> ");
		i = -1;
		while (++i < data->num_b)
			printf("%i ", data->b[i]);
		printf("\n");*/
		//check_stacks(data);
	}
	while (data->b)
	{
		analyzer(data);
		//printf("Valor minimo = %i y posicion = %i\n\n", data->min, data->pos_min);
		algorithm_b(data);
		/*printf("STACK A ---> ");
		i = -1;
		while (++i < data->num_a)
			printf("%i ", data->a[i]);
		printf("\nSTACK B ---> ");
		i = -1;
		while (++i < data->num_b)
			printf("%i ", data->b[i]);
		printf("\n");*/
		//check_stacks(data);
	}
	/*analyzer(data);
	printf("\nValor minimo = %i y posicion = %i\n", data->min, data->pos_min);
	*/
	/*i = -1;
	while (++i < data->num_a)
		printf("%i ", data->a[i]);
	printf("\n");*/
	ft_exit(data);
	return (0);
}
