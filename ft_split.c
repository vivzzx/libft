/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:49 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/23 18:48:21 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*protection_str(char *str, char **result, int pos)
{
	if (!str)
	{
		while (pos > 0)
		{
			pos--;
			free(result[pos]);
		}
		free(result);
		return (NULL);
	}
	return (str);
}

static size_t	total_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words += 1;
		i++;
	}
	return (words);
}

static char	**write_word(const char *s, char c, char **result)
{
	char	*str;
	size_t	word;
	size_t	i;
	size_t	start;

	word = 0;
	i = 0;
	start = 0;
	while (word < total_words(s, c))
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			str = ft_substr(s, start, i - start + 1);
			if (protection_str(str, result, word) == NULL)
				return (NULL);
			result[word] = protection_str(str, result, word);
			word++;
		}
		if (s[i] == c && s[i + 1] != c)
			start = i + 1;
		i++;
	}
	result[word] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	result = (char **)malloc((total_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = write_word(s, c, result);
	return (result);
}
