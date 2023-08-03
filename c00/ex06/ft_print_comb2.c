/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:49:32 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/07/22 02:23:54 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	countr1;
	int	countr2;

	countr1 = 0;
	while (countr1++ < 98)
	{
		countr2 = countr1;
		while (countr2++ < 99)
		{
			ft_put_char(countr1 / 10 + 48);
			ft_put_char(countr1 % 10 + 48);
			ft_put_char(' ');
			ft_put_char(countr2 / 10 + 48);
			ft_put_char(countr2 % 10 + 48);
			if (countr1 != 98)
			{
				write(1, " ", 1);
				write(1, ",", 1);
			}
		}
	}
}

int main()
{
	ft_print_comb2();
}

