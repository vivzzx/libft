/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:41:25 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/01 13:24:11 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
/*
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    i = 0;
    dst = (char *)malloc((n + 1) * sizeof(char));
    while (src[i] != '\0')
    {
        src[i] = dst[i];
        i++;
    }
    //dst[i] = '\0';
}
*/
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5}, b[5];
    int c[5] = {1, 2, 3, 4, 5}, d[5];  
    // Teste da libreria original 
    printf("\n*-* Oficial Test *-*");
    printf("\n\tTest 1:\n\t\tDst Before: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    memcpy(b, a, 2 * sizeof(int));
    printf("\n\tTest 1:\n\t\tDst After: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    } /*
    // Teste da  minha libreria 
    printf("*-* My function Test *-*");
    printf("\n\tTest 2: ");
    ft_memcpy(d, c, 5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", d[i]);
    } */
}

