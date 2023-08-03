/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sezmeci <Sezmeci@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:22:00 by Sezmeci           #+#    #+#             */
/*   Updated: 2023/07/30 23:23:09 by Sezmeci          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i2;

	ft_str_lowcase(str);
	i = 0;
	i2 = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i2 == 1)
			{
				str[i] -= 32;
			}
			i2 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i2 = 0;
		else
			i2 = 1;
		i++;
	}
	return (str);
}
