/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:43:47 by jajung            #+#    #+#             */
/*   Updated: 2020/10/18 16:06:42 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
			if ((w == 1 || w == x) && (h == 1 || h == y))
				ft_putchar('o');
			else if (h == 1 || h == y)
				ft_putchar('-');
			else if (w == 1 || w == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			w++;
		}
		ft_putchar('\n');
		h++;
		w = 1;
	}
}
