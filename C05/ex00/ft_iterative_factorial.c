/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:30:15 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/21 20:45:26 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	while (f != 1)
	{
		if (f < 1)
		{
			if (f == 0)
			{
				return (1);
			}
			return (0);
		}
		f--;
		nb = nb * f;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return 0;
}
*/
