/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 19:58:59 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/11 18:40:50 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int	main(void)
{
	char	dest[] = "       ";
	char	*src = "CRAMPTE";
	printf("Message copié : %s",ft_strcpy(dest, src));
	return(0);
}

