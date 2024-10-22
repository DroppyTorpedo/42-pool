/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:38:30 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/21 13:20:20 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	est;

	if (nb > 2147395600)
	{
		return (0);
	}
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (0);
	}
	est = 1;
	while (est * est < nb)
	{
		est++;
	}
	if (est * est == nb)
		return (est);
	return (0);
}

/*
int	main(void)
{
	printf("La racine carrée 9 est : %d\n", ft_sqrt(9));
	return 0;
}
*/
