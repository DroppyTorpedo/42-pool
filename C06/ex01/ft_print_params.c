/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:42:35 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/21 19:50:43 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	lenght;

	i = 1;
	while (i < ac)
	{
		lenght = 0;
		while (av[i][lenght])
		{
			ft_putchar(av[i][lenght]);
			lenght++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
