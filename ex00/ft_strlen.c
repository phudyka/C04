/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:48:30 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 23:05:01 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char	*str;
	int len;

	str = "Je suis une phrase\n";
	len = ft_strlen(str);
	printf("Cette phrase est de %d caracteres\n", len);
	return 0;
}*/
