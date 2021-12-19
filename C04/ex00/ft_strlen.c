/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:14:14 by rmallawa          #+#    #+#             */
/*   Updated: 2021/12/08 18:36:25 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Ranjan";
	char *p_str;

	p_str = str;

	int count = ft_strlen(p_str);

	printf("%d\n", count);
}
*/
