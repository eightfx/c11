/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:52:23 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 16:55:46 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
#include <string.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	index;

	index = 0;
	while (tab[index] != NULL)
	{
		if (f(tab[index]) != 0)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

/* int	is_four_letters(char *str) */
/* { */
/* 	return (strlen(str) == 4); */
/* } */

/* int	main(void) */
/* { */
/* 	char *words[] = {"appl", "dog", "cat", "banana", NULL}; */
/* 	if (ft_any(words, &is_four_letters)) */
/* 	{ */
/* 		printf("There is at least one word with four letters.\n"); */
/* 	} */
/* 	else */
/* 	{ */
/* 		printf("There are no words with four letters.\n"); */
/* 	} */
/* 	return (0); */
/* } */
