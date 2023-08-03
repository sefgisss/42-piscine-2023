/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:07:34 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/08/03 00:38:39 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
