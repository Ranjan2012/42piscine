/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:26:36 by rmallawa          #+#    #+#             */
/*   Updated: 2021/12/15 12:27:34 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = ft_strlen(src);
	str = (char *)malloc((i + 1) * sizeof(char));
	j = 0;
	if (str != NULL)
	{
		while (j < i && src[j] != '\0')
		{
			str[j] = src[j];
			j++;
		}
		str[j] = '\0';
	}
	return (str);
}
/*
#include <stdio.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char	*test;
	char	*dup;

	test = "42adeliade is great place!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
*/
