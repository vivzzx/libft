/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:39 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/28 12:11:55 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	len = ft_strlen(&s1[i]);
	if (len)
	{
		while (s1[i + len - 1] && ft_strchr(set, s1[i + len - 1]) != NULL)
			len--;
	}
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	temp = ft_memcpy(temp, &s1[i], len);
	temp[len] = '\0';
	return (temp);
}
/*
int main (void)
{
    char *s1 = "HelloHello";
    char *set = "lo";
    char *res1;

    // My library test 
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 1:");
    printf("\n\ts1: %s | set target: %s\n\n", s1, set);
    res1 = ft_strtrim(s1, set);
    printf("\tResult 1: %s\n\n", res1);
    return (0);
}
*/