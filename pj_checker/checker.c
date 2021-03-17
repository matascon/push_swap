#include "checker.h"

int		main(int argc, char **argv)
{
	t_data	*data;
	int		ret;
	char	*line;
	int		i;

	data = NULL;
	if (!(argc - 1))
		ft_error(data);
	if (check_args(argc, argv))
		ft_error(data);
	data = init_values(data, argc, argv);
	ret = 1;
	line = NULL;
	while (ret > 0)
	{
		ret = ft_gnl(0, &line);
		if (line[0] == '\0')
			ret = 0;
		else if (check_operations(line))
			ft_error(data);
		exec_operations(data, line);
		printf("STACK A ---> ");
		i = 0;
		while (i < data->num_a)
			printf("%i ", data->a[i++]);
		printf("\nSTACK B ---> ");
		i = 0;
		while (i < data->num_b)
			printf("%i ", data->b[i++]);
		printf("\n");
		free(line);
	}
	check_stacks(data);
	ft_exit(data);
	return (0);
}

//REVISAR MEMORY-LEAKS
