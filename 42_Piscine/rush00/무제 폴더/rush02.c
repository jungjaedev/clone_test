/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:07:53 by jajung            #+#    #+#             */
/*   Updated: 2020/10/18 15:13:55 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcher(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	if (x < 1 || y < 1)
		return ;
	w = 1;
	h = 1;
	while (h <= y)
	{
		while (w <= x)
		{
			if ((w == 1 || w == x) && h == 1)
				ft_putchar('A');
			else if ((w == 1 || w == x) && h == y)
				ft_putchar('C');
			else if (w == 1 || w == x || h == 1 || h == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
		w = 1;
	}
}
