/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 23:15:38 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/07/22 02:21:32 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' ;
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1 ;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
					write(1, ",", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
