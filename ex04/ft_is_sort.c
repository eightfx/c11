/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:57:28 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/23 17:43:30 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;
	int	ascending;
	int	descending;

	ascending = 1;
	descending = 1;
	index = 0;
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
		{
			ascending = 0;
		}
		if (f(tab[index], tab[index + 1]) < 0)
		{
			descending = 0;
		}
		index++;
	}
	return (ascending || descending);
}

/* int	compare_numbers(int a, int b) */
/* { */
/* 	return (a - b); */
/* } */

/* int	main(void) */
/* { */
/* 	int	length; */

/* 	int tab[] = {5, 4, 3, 2, 1, 2}; */
/* 	/\* int tab[] = {1, 2, 3, 4, 5}; *\/ */
/* 	length = sizeof(tab) / sizeof(tab[0]); */
/* 	if (ft_is_sort(tab, length, &compare_numbers)) */
/* 	{ */
/* 		printf("The array is sorted.\n"); */
/* 	} */
/* 	else */
/* 	{ */
/* 		printf("The array is not sorted.\n"); */
/* 	} */
/* 	return (0); */
/* } */
