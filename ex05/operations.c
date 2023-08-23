/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eokoshi <eokoshi@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:00:39 by eokoshi           #+#    #+#             */
/*   Updated: 2023/08/22 17:43:49 by eokoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

int	ft_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
