/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnorvene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:49:43 by rnorvene          #+#    #+#             */
/*   Updated: 2024/09/05 12:32:30 by rnorvene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 'z' ;
	while (lettre >= 'a')
	{
		write(1, &lettre, 1);
		lettre --;
	}
}

/*
int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
