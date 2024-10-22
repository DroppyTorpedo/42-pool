/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:40:01 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/22 17:43:05 by rnorvene         ###   ########.fr       */
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
	s1[i] = '\0';
	return (s1);
}

int	ft_lenght(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += size_sep + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

void	copy_strings(char *res, int size, char **strs, char *sep)
{
	int		i;
	char	*temp;

	i = 0;
	temp = res;
	while (i < size)
	{
		temp = ft_strcpy(temp, strs[i]);
		temp += ft_strlen(strs[i]);
		if (i + 1 < size)
		{
			temp = ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		i++;
	}
	*temp = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
		{
			res[0] = '\0';
		}
		return (res);
	}
	len = ft_lenght(size, strs, ft_strlen(sep));
	res = (malloc(sizeof(char) * (len + 1)));
	if (res == NULL)
	{
		return (NULL);
	}
	copy_strings(res, size, strs, sep);
	return (res);
}

/*
int main()
{
    char *strs[] = {"Hello", "World", "Join", "Me"};
    char *sep = " | ";
    int size = 4; // Nombre de chaînes à concaténer

    char *result = ft_strjoin(size, strs, sep);
    if (result != NULL)
    {
        printf("%s\n", result); // Afficher le résultat
        free(result); // Libérer la mémoire allouée
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
*/
