/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:34:11 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/09 18:58:30 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello World!";
    char str3[] = "ALREADY lowercase";
    char str4[] = "MIXED 123 CASES";
    char str5[] = "";  // Chaîne vide

    printf("Avant : '%s' -> Après : '%s'\n", str1, ft_strlowcase(str1));
    printf("Avant : '%s' -> Après : '%s'\n", str2, ft_strlowcase(str2));
    printf("Avant : '%s' -> Après : '%s'\n", str3, ft_strlowcase(str3));
    printf("Avant : '%s' -> Après : '%s'\n", str4, ft_strlowcase(str4));
    printf("Avant : '%s' -> Après : '%s'\n", str5, ft_strlowcase(str5));

    return 0;
}
*/
