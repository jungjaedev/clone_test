/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajung <jajung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 21:03:44 by jajung            #+#    #+#             */
/*   Updated: 2020/10/31 11:19:59 by jajung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i++])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (!(str[i] >= '0' && str[i] <= '9'))
				{
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] -= 32;
				}
		i++;
	}
	return (str);
}
