/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:36 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/14 17:29:09 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(count * size);
	if (temp == NULL)
		return (NULL);
	ft_bzero(temp, count * size);
	return ((void *)temp);
}
/*
int main(void)
{
    size_t size = 0;
    size_t count = 0;
    int *result1;
    int *result2;
    
    // Original library test 
    printf("\n*-* Oficial Test *-*");
    result1 = (int *)calloc(count, size);
    printf("\n");
    for (int j = 0; j <= count; j++)
        printf("counter: %d | value: %d | size: %lu\n", j, result1[j], sizeof(result1[j]));
    
    // My library test 
    printf("\n*-* My function Test *-*");
    result2 = (int *)ft_calloc(count, size);
    printf("\n");
    for (int k = 0; k <= count; k++)
        printf("counter: %d | value: %i | size: %lu\n", k, result2[k], sizeof(result2[k]));

    return (0);
}
*/