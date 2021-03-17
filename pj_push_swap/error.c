/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tascon <tascon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:53:00 by tascon            #+#    #+#             */
/*   Updated: 2021/03/17 10:20:28 by tascon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_data *data)
{
	if (data != NULL)
	{
		if (data->a != NULL)
			free(data->a);
		if (data->b != NULL)
			free(data->b);
		free(data);
	}
	exit(0);
}

void	ft_error(t_data *data)
{
	ft_putstr_fd("Error\n", 2);
	ft_exit(data);
}
