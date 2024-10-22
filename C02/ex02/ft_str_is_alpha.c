/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:07:00 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/10 15:39:27 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
    char str1[] = "abcdefghijkl";
    char str2[] = "abcghij[`aBCZ";
    char str3[] = "23adsaffq";

    printf("'%s' est alphabétique : %d\n", str1, ft_str_is_alpha(str1));
    printf("'%s' est alphabétique : %d\n", str2, ft_str_is_alpha(str2));
    printf("'%s' est alphabétique : %d\n", str3, ft_str_is_alpha(str3));
    return 0;
}
*/
