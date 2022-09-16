/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:29:40 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/16 13:27:15 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;
	int	i;

	result = 0;
	i = 0;
	signal = 1;
	while (str[i] <= 32)
	{
		i++;
	}
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= 9)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * signal);
}
