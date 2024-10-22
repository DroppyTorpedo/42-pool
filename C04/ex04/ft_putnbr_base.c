/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:42:57 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/17 17:40:06 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	if (c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	get_base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_iswhitespace(base[i]))
		{
			return (0);
		}
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (i);
}

void	rec_print(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
	{
		rec_print(nbr / base_len, base, base_len);
		rec_print(nbr % base_len, base, base_len);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

void	putnbr_base_ll(long long int nbr, char *base)
{
	int	base_len;

	base_len = get_base_len(base);
	if (base_len < 2)
	{
		return ;
	}
	if (nbr < 0)
	{
    		write(1, "-", 1);
    		if (nbr == -2147483648LL)
    		{
        		rec_print(-(nbr / base_len), base, base_len);
        		rec_print(-(nbr % base_len), base, base_len);
    		}
    		else
    		{
        		rec_print(-nbr, base, base_len);
    		}
	}
	else
	{
    		rec_print(nbr, base, base_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	putnbr_base_ll(nbr, base);
}
