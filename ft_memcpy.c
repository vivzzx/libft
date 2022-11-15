/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:41:25 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/15 14:07:52 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	int	a[5];

    a[5] = {1, 2, 3, 4, 5}, b[5];
    int c[5] = {1, 2, 3, 4, 5}, d[5];  
    // Teste da libreria original 
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1:\n\t\tDst Before: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    memcpy(b, a, 5 * sizeof(int));
    printf("\n\t\tDst After: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    } 
    // Teste da  minha libreria 
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 2: ");
    ft_memcpy(d, c, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", d[i]);
    } 
}
*/