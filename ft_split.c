/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: video-fl <video-fl@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:44:49 by video-fl          #+#    #+#             */
/*   Updated: 2022/11/11 13:21:33 by video-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **set_free(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return(NULL);
}

static size_t	total_words(const char *s, char c)
{
	unsigned int	i;
	unsigned int	words;

	i = 0;
	words = 0;
	if (*s == '\0')
		return (words);
	while (s[i] != '\0')
	{
		if ((s[i - 1] == c) && (s[i] != c))
			words += 1;
        if ((i == 0) && (s[i] != c))
            words += 1;
		i++;
	}
	//if (s[i - 1] != c)
	//	words += 1;
	//printf("\t\t\nTotal words: %d\n", words);
	return (words);
}

static char	*just_word(const char *s, char c, size_t pos)
{
	size_t	i;
	size_t	r;
	size_t	counter;
	char	*result;

	i = pos; // posicao no s principal
	r = 0;
	//printf("\n\t\tjust word: i: %zu\n", i);
	counter = 0;
	//if (*s == '\0')
	//	return (NULL);
	//printf("\n\t\tjust word function here\n");
	while (s[pos] != c)
	{
		counter++;
		pos++;
	}
	//printf("\t\tjust word counter here: %zu\n", counter);
	result = malloc((counter + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (counter > 0)
	{
		//printf("\n\t\tjust word loop here\n");
		result[r] = (char)s[i];
		//printf("\n\t\tindex: %zu | s[i]: %c\n", i, s[i]);
		counter--;
		r++;
		i++;
	}
	result[r] = '\0';
	//printf("\t\tjust word result: %s\n", result);
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**result;
	char	*temp;
	char	*str;

	i = 0;
	word_count = 0;
	str = (char *)s;
	result = malloc((total_words(s, c) + 1) * sizeof(char *));
    if (!result)
		return (NULL);
	while (word_count < total_words(str, c))
	{
		//printf("\nloop de fora\n");
        if ((str[i] != c && str[i - 1] == c) || (str[i] != c && i == 0))
		{
			//printf("\nentrou no if --> s[i]: %zu == %c \n", i, str[i - 1]);
			temp = just_word(str, c, i);
			//printf("\ntemp: %s\n", temp);
			// TEST AQUIIIIIII AAAAAA HELP
			result[word_count] = (char *)ft_strdup(temp);
			//ft_strlcpy(result[word_count], temp, ft_strlen(temp));
			word_count++;
			i = i + ft_strlen(temp);
			//printf("\ni: %zu | word_count: %zu\n", i, word_count);
		}
		//printf("\ni fora do loop: %zu | word_count: %zu", i, word_count);
		i++;
	}
	//printf("\nfora do loop - i: %zu | word_count: %zu\n", i, word_count);
	result[word_count] = ft_strdup("\0");
	return (result);
}

int	main(void)
{
	char *s;
	char c;
	char **result1;

	s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	c = ' ';
	// My library test
	printf("\n*-* My function Test *-*");
	printf("\n\tTest 1:\n");
	printf("\n\tString: %s | Delimiter: [%c]\n", s, c);
	printf("\tTotal words: %zu\n", total_words(s, c));
	result1 = ft_split(s, c);
	for (size_t i = 0; i < total_words(s, c); i++)
	{
		printf("index = %zu: %s\n", i, result1[i]);
	}
	return (0);
}
