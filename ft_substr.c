/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:15 by video-fl          #+#    #+#             */
/*   Updated: 2022/10/26 12:34:29 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subs;
    size_t i;
    
    i = 0;
    if (!s)
        return (NULL);
    if ((len > ft_strlen(s) && start < ft_strlen(s)) || (len > ft_strlen(s) && start < ft_strlen(s)))
        subs = (char *)malloc((ft_strlen(s) - (size_t)start + 1) * sizeof(char));
    //if ((size_t)start > ft_strlen(s))
    //    subs = (char *)malloc(1 * sizeof(char));
    else
        subs = (char *)malloc((len + 1) * sizeof(char));
    if (!subs)
        return (NULL);
    /*while (start > i)
        i++;
    printf("\ni: %d\n", i);*/
    //while (len || (s[start] == '\0'))
    while ((size_t)start < ft_strlen(s) && len > i)
    {
        subs[i] = (char)s[start];
        i++;
        start++;
        //len--;
    }
    subs[i] = '\0';
    return (subs);
}
/*
int main (void)
{
    char *s1 = "The book is on the table";
    int start1 = 4;
    size_t len1 = 4;
    char *res1;

    char *s2 = "01234";
    int start2 = 10;
    size_t len2 = 10;

    char *res2;

    //--> my lib test
    printf("\n*-* My function Test *-*");
    printf("\n\tTest 1:\n\t\tstring: %s | start: %d | len: %zu", s1, start1, len1);
    res1 = ft_substr(s1, start1, len1);
    printf("\n\t\tResult 1: %s\n", res1);

    printf("\n\tTest 2:\n\t\tstring: %s | start: %d | len: %zu", s2, start2, len2);
    res2 = ft_substr(s2, start2, len2);
    printf("\n\t\tResult 2: %s", res2);
    printf("fim");
    return (0);
}*/