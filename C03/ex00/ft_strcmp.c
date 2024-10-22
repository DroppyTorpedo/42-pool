/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:49:01 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/25 20:45:21 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] != s1[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	*s1 = "Lol";
	char	*s2 = "Lole";

	int	result = ft_strcmp(s1, s2);
	printf("Voici ce que renvoie la fonction : %d\n", result);
}
*/
