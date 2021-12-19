/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:22:47 by rmallawa          #+#    #+#             */
/*   Updated: 2021/11/30 11:50:46 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	beta;

		beta = 'z';
	while (beta >= 'a')
	{	
		write (1, &beta, 1);
		beta--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write (1, "\n", 1);
	return(0);
}*/
