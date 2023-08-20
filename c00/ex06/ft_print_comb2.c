/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohlatra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:07:48 by mohlatra          #+#    #+#             */
/*   Updated: 2023/08/17 15:13:06 by mohlatra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2_second(char a, char b)
{
	char	c;
	char	d;

	c = a;
	while (c <= '9')
	{
		if (c == a)
			d = b + 1;
		else
			d = '0';
		while (d <= '9')
		{
			ft_print_numbers(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_print_comb2_second(a, b);
			b++;
		}
		a++;
	}
}
