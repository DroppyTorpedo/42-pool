/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:26:52 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/21 20:48:21 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_print_params(int ac, char **av)
{
	int	i;
	int	lenght;

	i = 1;
	while (i < ac)
	{
		lenght = 0;
		while (av[i][lenght])
		{
			write(1, &av[i][lenght], 1);
			lenght++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	char	*temp;

	i = 1;
	while (i + 1 < ac)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = temp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
	ft_print_params(ac, av);
	return (0);
}
