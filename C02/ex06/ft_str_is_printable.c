/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:35:10 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/09 18:52:13 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
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
    char str1[] = "Hello, World!";
    char str2[] = "Hello\tWorld";
    char str3[] = "NormalText123";
    char str4[] = "Text\x7f";
    char str5[] = "";

    printf("'%s' est imprimable : %d\n", str1, ft_str_is_printable(str1));
    printf("'%s' est imprimable : %d\n", str2, ft_str_is_printable(str2));
    printf("'%s' est imprimable : %d\n", str3, ft_str_is_printable(str3));
    printf("'%s' est imprimable : %d\n", str4, ft_str_is_printable(str4));
    printf("'%s' est imprimable : %d\n", str5, ft_str_is_printable(str5));

    return 0;
}
*/
