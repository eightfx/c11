/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:26:03 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 18:28:01 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i + 1] != NULL)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/* int	ft_strcmp(char *s1, char *s2) */
/* { */
/* 	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) */
/* 	{ */
/* 		s1++; */
/* 		s2++; */
/* 	} */
/* 	return ((char)*s1 - (char)*s2); */
/* } */

/* int	main(void) */
/* { */
/* 	char *tab[] = {"aab", "aaa", "zebra", "apple", "banana", "grape", NULL}; */
/* 	ft_advanced_sort_string_tab(tab, ft_strcmp); */
/* 	for (int i = 0; tab[i] != NULL; i++) */
/* 	{ */
/* 		printf("%s\n", tab[i]); */
/* 	} */
/* 	return (0); */
/* } */
