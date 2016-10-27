/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:01:44 by mgould            #+#    #+#             */
/*   Updated: 2016/10/26 21:45:51 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (i++ < 8)
	{
		j = i;
		while (j++ < 9)
		{
			k = j;
			while (++k < 10)
			{
				ft_putchar(('0' + i));
				ft_putchar(('0' + j));
				ft_putchar(('0' + k));
				if ((i + j) < 15)
				{
					ft_putchar((','));
					ft_putchar((' '));
				}
			}
		}
	}
	ft_putchar(('\n'));
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
