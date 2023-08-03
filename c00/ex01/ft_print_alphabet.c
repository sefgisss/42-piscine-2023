/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:18:06 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/07/22 02:15:58 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void)
{
	char	a;

	a = 96;
	while (a < 122)
	{
		a++; 
		write(1, &a, 1);
	}
}

int main()
{
	ft_print_alphabet();
}
