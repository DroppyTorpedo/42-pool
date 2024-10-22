/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:12:41 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/09 18:54:30 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello World!";
    char str3[] = "already UPPERCASE";
    char str4[] = "mixed 123 cases";
    char str5[] = "";  // Chaîne vide

    printf("Avant : '%s' -> Après : '%s'\n", str1, ft_strupcase(str1));
    printf("Avant : '%s' -> Après : '%s'\n", str2, ft_strupcase(str2));
    printf("Avant : '%s' -> Après : '%s'\n", str3, ft_strupcase(str3));
    printf("Avant : '%s' -> Après : '%s'\n", str4, ft_strupcase(str4));
    printf("Avant : '%s' -> Après : '%s'\n", str5, ft_strupcase(str5));

    return 0;
}
*/
