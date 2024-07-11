/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ur <mruiz-ur@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:24:12 by mruiz-ur          #+#    #+#             */
/*   Updated: 2024/07/07 21:05:32 by mruiz-ur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	i;
	char			number;

	i = nb;
	if (nb < 0)
	{
		i = -nb;
		write(1, "-", 1);
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		number = (i + 48);
		write(1, &number, 1);
	}
}
