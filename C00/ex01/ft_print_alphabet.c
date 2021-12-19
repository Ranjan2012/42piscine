/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:22:47 by rmallawa          #+#    #+#             */
/*   Updated: 2021/11/26 11:25:29 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

		alpha = 'a';
	while (alpha <= 'z')
	{	
		write (1, &alpha, 1);
		alpha++;
	}
}
