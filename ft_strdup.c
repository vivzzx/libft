/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:46 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/24 17:35:16 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*temp;

	n = -1;
	temp = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!temp)
		return (NULL);
	temp[ft_strlen(s1)] = '\0';
	while (s1[++n])
		temp[n] = s1[n];
	return (temp);
}
/*
int main(void)
{
    const char s1[] = "fgg";
    char *result1;
    char *result2;

    // Original library test 
    printf("\n*-* Oficial Test *-*");
    result1 = strdup(s1);
    printf("\n\tResult 1: %s\n", result1);

    // My library test 
    printf("\n*-* My function Test *-*");
    result2 = ft_strdup(s1);
    printf("\n\tResult 2: %s\n\n", result2);

    return (0);
}
*/
