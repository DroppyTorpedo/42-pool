/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:40:33 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/11 15:27:48 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	unsigned int	n;
	char	*s1 = "apricot";
	char	*s2 = "apple";
	n = 3;

	int	result = ft_strncmp(s1, s2, n);
	printf("Voici ce que renvoie la fonction : %d\n", result);
}
*/
