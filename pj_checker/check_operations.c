#include "checker.h"

int	check_operations(char *line)
{
	if (!ft_strncmp(line, "sa", 3))
		return (0);
	else if (!ft_strncmp(line, "sb", 3))
		return (0);
	else if (!ft_strncmp(line, "ss", 4))
		return (0);
	else if (!ft_strncmp(line, "pa", 3))
		return (0);
	else if (!ft_strncmp(line, "pb", 3))
		return (0);
	else if (!ft_strncmp(line, "ra", 3))
		return (0);
	else if (!ft_strncmp(line, "rb", 3))
		return (0);
	else if (!ft_strncmp(line, "rr", 3))
		return (0);		
	else if (!ft_strncmp(line, "rra", 4))
		return (0);
	else if (!ft_strncmp(line, "rrb", 4))
		return (0);
	else if (!ft_strncmp(line, "rrr", 4))
		return (0);
	return (-1);
}
