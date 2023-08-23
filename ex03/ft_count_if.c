/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:54:53 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 16:55:39 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <string.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (tab[index] != NULL && index < length)
	{
		if (f(tab[index]) != 0)
		{
			count++;
		}
		index++;
	}
	return (count);
}

/* int	has_more_than_three_letters(char *str) */
/* { */
/* 	return (strlen(str) > 3); */
/* } */

/* int	main(void) */
/* { */
/* 	int	count; */

/* 	char *words[] = {"apple", "dog", "cat", "banana", NULL}; */
/* 	int length = sizeof(words) / sizeof(words[0]) - 1; // NULLポインタを除外 */
/* 	count = ft_count_if(words, length, &has_more_than_three_letters); */
/* 	printf("Number of words with more than three letters: %d\n", count); */
/* 	return (0); */
/* } */
