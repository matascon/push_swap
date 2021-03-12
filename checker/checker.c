#include "checker.h"

int		main(int argc, char **argv)
{
	t_data	*data;
	int		ret;
	char	*line;

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
		//Do the operation
	}
	ft_exit(data);
	return (0);
}
