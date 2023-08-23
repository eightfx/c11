/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:47:36 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 16:48:41 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	index;

	result = (int *)malloc(length * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < length)
	{
		result[index] = f(tab[index]);
		index++;
	}
	return (result);
}

/* int	multiply_by_two(int n) */
/* { */
/* 	return (n * 2); */
/* } */

/* int	main(void) */
/* { */
/* 	int	length; */
/* 	int	*result; */

/* 	int tab[] = {1, 2, 3, 4, 5}; */
/* 	length = sizeof(tab) / sizeof(tab[0]); */
/* 	result = ft_map(tab, length, &multiply_by_two); */
/* 	if (result != NULL) */
/* 	{ */
/* 		for (int i = 0; i < length; i++) */
/* 		{ */
/* 			printf("%d ", result[i]); */
/* 		} */
/* 		free(result); // 動的に確保したメモリを解放 */
/* 	} */
/* 	return (0); */
/* } */
