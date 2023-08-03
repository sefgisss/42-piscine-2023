/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:48:25 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/07/22 02:14:58 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 123;
	while (z > 97)
	{
		z-- ;
		write(1, &z, 1);
	}
}

int main()
{
	ft_print_reverse_alphabet();
}
