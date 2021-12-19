/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:01:41 by rmallawa          #+#    #+#             */
/*   Updated: 2021/12/09 16:47:24 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (n > n * nb)
		return (0);
	else if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (n);
}
/*
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int		main(void)
{
	printf("-3 ^-1 = %d (0)\n", ft_recursive_power(-3, -1));
	printf("-3 ^ 0 = %d (1)\n", ft_recursive_power(-3, 0));
	printf("-3 ^ 1 = %d (-3)\n", ft_recursive_power(-3, 1));
	printf("-3 ^ 2 = %d (9)\n", ft_recursive_power(-3, 2));
	printf("-3 ^ 3 = %d (-27)\n", ft_recursive_power(-3, 3));
	printf(" 0 ^-1 = %d (0)\n", ft_recursive_power(0, -1));
	printf(" 0 ^ 0 = %d (1)\n", ft_recursive_power(0, 0));
	printf(" 0 ^ 2 = %d (0)\n", ft_recursive_power(0, 2));
	printf(" 4 ^-1 = %d (0)\n", ft_recursive_power(4, -1));
	printf(" 4 ^ 0 = %d (1)\n", ft_recursive_power(4, 0));
	printf(" 4 ^ 1 = %d (4)\n", ft_recursive_power(4, 1));
	printf(" 4 ^ 2 = %d (16)\n", ft_recursive_power(4, 2));
	printf(" 4 ^ 3 = %d (64)\n", ft_recursive_power(4, 3));

}
*/
