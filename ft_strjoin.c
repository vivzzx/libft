/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:29 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/08 12:44:02 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	ft_strlcat(str, s2, size + 1);
	return (str);
}
/*
int main(void)
{
    char *s1 = "the book is";
    char *s2 = " on the table";

    char *s3 = "42";
    char *s4 = "";

    char *result1;
    char *result2;

    // My library test 
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 1:");
    printf("\n\ts1: %s | s2: %s\n\n", s1, s2);
    result1 = ft_strjoin(s1, s2);
    printf("\tResult 1: %s\n\n", result1);

    //Test 2
    printf("\n\tTest 2:");
    printf("\n\ts3: %s | s4: %s\n\n", s3, s4);
    result2 = ft_strjoin(s3, s4);
    printf("\tResult 2: %s", result2);
    printf("fim");
    return (0);
} */