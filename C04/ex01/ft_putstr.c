/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:26:36 by rmallawa          #+#    #+#             */
/*   Updated: 2021/12/08 14:31:46 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
/*
#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "wellcome to adeliade pscine";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
*/
