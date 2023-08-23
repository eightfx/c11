/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:43:56 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 16:50:34 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
/* #include <unistd.h> */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index++;
	}
}

/* void	ft_putnbr(int n) */
/* { */
/* 	char	minus; */
/* 	char	num; */

/* 	if (n < 0) */
/* 		{ */
/* 			minus = '-'; */
/* 			write(1, &minus, 1); */
/* 			n = -n; */
/* 		} */
/* 	if (n >= 10) */
/* 		{ */
/* 			ft_putnbr(n / 10); */
/* 		} */
/* 	num = n % 10 + '0'; */
/* 	write(1, &num, 1); */
/* } */

/* int	main(void) */
/* { */
/* 	int	length; */

/* 	int tab[] = {5, 9, 13, 2, 1337}; */
/* 	length = sizeof(tab) / sizeof(tab[0]); */
/* 	ft_foreach(tab, length, &ft_putnbr); */
/* 	return (0); */
/* } */
