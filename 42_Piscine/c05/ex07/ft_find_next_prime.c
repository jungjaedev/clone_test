/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:35:10 by jajung            #+#    #+#             */
/*   Updated: 2020/11/03 00:00:04 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long long	k;
	long long	i;

	k = nb;
	i = 2;
	if (nb <= 2)
		return (2);
	while (1)
	{
		i = 2;
		while (i <= k / 2)
		{
			if (k % i == 0)
				break ;
			i++;
		}
		if (i >= k / 2)
			return (k);
		k++;
	}
}
