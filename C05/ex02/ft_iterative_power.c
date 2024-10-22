/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:26:28 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/19 00:14:50 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}

/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 2;
	printf("%d", ft_iterative_power(nb, power));
	return 0;
}
*/
