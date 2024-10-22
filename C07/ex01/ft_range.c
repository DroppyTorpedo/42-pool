/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:03:02 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/22 13:39:22 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*
int	main()
{
	int	min = 3;
	int	max = 7;
	int	size = max - min;
	int	*range = ft_range(min, max);
	int	i;

	i = 0;
	while (i < size)
	{
		if (range != NULL)
		{
			printf("%d", range[i]);
			i++;
		}
	}
	return 0;
}
*/
