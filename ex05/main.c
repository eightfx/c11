/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:46:07 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 18:16:08 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	get_operator_index(char *operator)
{
	char	*op_symbols;
	int		index;

	op_symbols = "+-/*%";
	index = 0;
	while (op_symbols[index])
	{
		if (operator[0] == op_symbols[index] && !operator[1])
		{
			return (index);
		}
		index++;
	}
	return (-1);
}

void	execute_operation(char **argv, int (*ops[5])(int, int))
{
	int	value1;
	int	value2;
	int	index;

	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	index = get_operator_index(argv[2]);
	if (index == -1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return ;
	}
	if ((index == 2 && value2 == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return ;
	}
	if (index == 4 && value2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 23);
		return ;
	}
	ft_putnbr(ops[index](value1, value2));
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	(*ops[5])(int, int);

	ops[0] = ft_add;
	ops[1] = ft_sub;
	ops[2] = ft_div;
	ops[3] = ft_mul;
	ops[4] = ft_mod;
	if (argc != 4)
	{
		return (0);
	}
	execute_operation(argv, ops);
	return (0);
}
