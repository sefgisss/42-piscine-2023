/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:13:30 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/08/03 00:35:54 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	cnt;

	cnt = nb;
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power < 0)
		return (0);
	return (cnt);
}
