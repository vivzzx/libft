/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:45:10 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/08 16:28:48 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*result;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	result = (char *)malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[size] = '\0';
	while (size > 0)
	{
		result[size - 1] = f(size - 1, s[size - 1]);
		size--;
	}
	return (result);
}
/*
char	my_func(unsigned int i, char c)
{
	printf("My function: index = %d and %c\n", i, c);
	return (c);
}

int	main(void)
{
	char	*s;
	char	*result1;

	s = "hello";
	printf("\n*-* My function Test *-*");
	printf("\n\tTest 1:\n");
	result1 = ft_strmapi(s, my_func);
	printf("\tResult 1: %s\n\n", result1);
	return (0);
}
*/
