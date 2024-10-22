/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:48:36 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/09 18:40:36 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
    char str1[] = "lowercase";
    char str2[] = "Lowercase";
    char str3[] = "123456";
    char str4[] = "";

    printf("'%s' est en minuscules : %d\n", str1, ft_str_is_lowercase(str1));
    printf("'%s' est en minuscules : %d\n", str2, ft_str_is_lowercase(str2));
    printf("'%s' est en minuscules : %d\n", str3, ft_str_is_lowercase(str3));
    printf("'%s' est en minuscules : %d\n", str4, ft_str_is_lowercase(str4));

    return 0;
}
*/
