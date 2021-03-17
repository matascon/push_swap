#include "push_swap.h"

int	check_args(int argc, char **argv)
{
	int i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			if (!ft_isdigit(argv[i][j]))
				return (-1);
			j++;
		}
	}
	return (0);
}
