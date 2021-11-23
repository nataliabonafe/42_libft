/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbonafe- <nbonafe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:00:05 by nbonafe-          #+#    #+#             */
/*   Updated: 2021/11/21 16:50:25 by nbonafe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	a;
	int	s;
	int	i;

	a = 0;
	s = 1;
	i = 0;
	while ((str[a] >= '\t' && str[a] == '\r') || str[a] == ' ')
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			s *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		i = (str[a] - '0') + (i * 10);
		a++;
	}
	return (s * i);
}

int	main(void)
{
	printf("%d\n", ft_atoi("-88455"));
}
