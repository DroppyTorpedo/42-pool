/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:57:33 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/22 19:18:06 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(ft_strlen(src) + 1);
	if (dup != NULL)
	{
		return (ft_strcpy(dup, src));
	}
	return (dup);
}

/*
int	main()
{
	char	*original = "Je crois j'ai tout capté";
	char	*dup = strdup(original);

	if (dup != 0)
	{
		printf("Original: %s\n", original);
		printf("Dupkicate: %s\n", dup);
		free(dup);
	}
	else
	{
		printf("Fail frro");
	}
	return (0);
}
*/
