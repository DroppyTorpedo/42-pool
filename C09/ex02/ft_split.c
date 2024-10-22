/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:34:10 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/24 21:39:42 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
	{
		return (1);
	}
	return (0);
}

int	ft_compt(char *src, char *charset)
{
	int	i;
	int	compt;

	compt = 0;
	i = 0;
	while (src[i])
	{
		if (ft_sep(src[i + 1], charset) == 1
			&& ft_sep(src[i], charset) == 0)
		{
			compt ++;
		}
		i++;
	}
	return (compt);
}

void	ft_copy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (ft_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_write(char **split, char *src, char *charset)
{
	int	i;
	int	mot;
	int	lenght;

	mot = 0;
	i = 0;
	while (src[i])
	{
		if (ft_sep(src[i], charset) == 1)
		{
			i++;
		}
		else
		{
			lenght = 0;
			while (ft_sep(src[i + lenght], charset) == 0)
			{
				lenght++;
			}
			split[mot] = (char *)malloc(sizeof(char) * (lenght + 1));
			ft_copy(split[mot], src + i, charset);
			i += lenght;
			mot++;
		}
	}
}

char	**ft_split(char *src, char *charset)
{
	char	**res;
	int		mot;

	mot = ft_compt(src, charset);
	res = (char **)malloc(sizeof(char *) * (mot + 1));
	res[mot] = 0;
	ft_write(res, src, charset);
	return (res);
}
