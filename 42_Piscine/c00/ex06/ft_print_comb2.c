/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:27:08 by jajung            #+#    #+#             */
/*   Updated: 2020/10/26 14:39:46 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	bbbbb(int a, int b)
{
	char	c;

	c = '0' + (a / 10);
	ft_putchar(c);
	c = '0' + (a % 10);
	ft_putchar(c);
	c = ' ';
	ft_putchar(c);
	c = '0' + (b / 10);
	ft_putchar(c);
	c = '0' + (b % 10);
	ft_putchar(c);
	if (a == 98)
		return ;
	c = ',';
	ft_putchar(c);
	c = ' ';
	ft_putchar(c);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			bbbbb(a, b);
			b++;
		}
		a++;
	}
}
