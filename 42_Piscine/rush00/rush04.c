/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:24:32 by jajung            #+#    #+#             */
/*   Updated: 2020/10/18 17:24:34 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rushelper(int x, char a, char b, char c)
{
	ft_putchar(a);
	while (x > 2)
	{
		ft_putchar(b);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	rushelper(x, 'A', 'B', 'C');
	while (y > 2)
	{
		rushelper(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
		rushelper(x, 'C', 'B', 'A');
}
