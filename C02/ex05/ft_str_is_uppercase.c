/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_upercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:14:40 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/09 18:48:24 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
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
    char str1[] = "UPPERCASE";
    char str2[] = "Uppercase";
    char str3[] = "123456";
    char str4[] = "";

    printf("'%s' est en minuscules : %d\n", str1, ft_str_is_uppercase(str1));
    printf("'%s' est en minuscules : %d\n", str2, ft_str_is_uppercase(str2));
    printf("'%s' est en minuscules : %d\n", str3, ft_str_is_uppercase(str3));
    printf("'%s' est en minuscules : %d\n", str4, ft_str_is_uppercase(str4));

    return 0;
}
*/
