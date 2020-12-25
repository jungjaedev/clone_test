/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:22:35 by jajung            #+#    #+#             */
/*   Updated: 2020/10/21 14:58:22 by jajung           ###   ########.fr       */
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
	rushelper(x, 'o', '-', 'o');
	while (y > 2)
	{
		rushelper(x, '|', ' ', '|');
		y--;
	}
	if (y > 1)
		rushelper(x, 'o', '-', 'o');
}
int main (){
	rush(4, 9);
	rush('0',2);
//	rush(2147483648,-2147483649);
	return 0;
}
