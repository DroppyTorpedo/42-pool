/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:36:48 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/10 18:35:01 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
    char str1[] = "01948987493";
    char str2[] = "123a56";

    printf("'%s' est numérique : %d\n", str1, ft_str_is_numeric(str1));
    printf("'%s' est numérique : %d\n", str2, ft_str_is_numeric(str2));

    return 0;
}
*/
