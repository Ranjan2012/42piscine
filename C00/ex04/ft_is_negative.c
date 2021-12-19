/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:51:11 by rmallawa          #+#    #+#             */
/*   Updated: 2021/11/30 11:54:26 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	post;
	char	negat;

	negat = 'N';
	post = 'P';
	if (n >= 0)
	{
		write(1, &post, 1);
	}
	else
	{	
		write(1, &negat, 1);
	}
}
