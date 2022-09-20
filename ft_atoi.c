/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:29:40 by video-fl          #+#    #+#             */
/*   Updated: 2022/09/20 13:20:10 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	signal;

	result = 0;
	signal = 1;
	while (*str == 32 || *str >= 9 && *str <= 13)
	{
		str++;
	}
	if (*str == '-')
	{
		signal *= -1;
	}
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0' && *str >= '0' && *str <= 9)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * signal);
}
