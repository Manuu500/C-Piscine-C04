/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:56:11 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/07 21:03:42 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count_minus;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	count_minus = 0;
	i = 0;
	while (str[i] != '\0' && str[i] < 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	if (count_minus % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
