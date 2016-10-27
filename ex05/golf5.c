/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:01:06 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 12:58:51 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	out_char(int i, int j, int k, int l)
{
	ft_putchar((47 + i));
	ft_putchar((47 + j));
	ft_putchar(' ');
	ft_putchar((47 + k));
	ft_putchar((47 + l));
	if ((i + j + k + l) < 40)
	{
		ft_putchar((','));
		ft_putchar((' '));
	}
}

void	ft_print_comb2(void)
{
	static int array[4];

	while (++(array[0]) <= 10)
	{
		while (++(array[1]) <= 10)
		{
			while (++(array[2]) <= 10)
			{
				while (++(array[3]) <= 10)
				{
					out_char(array[0], array[1], array[2], array[3]);
				}
				array[3] = (array[2] + array[1] + array[0] - 3);
			}
			array[2] = (array[1] + array[0] - 2);
			array[3] = (array[2] + array[1] +array[0] -3);
		}
		array[1] = 0;
		array[2] = (array[1] + array[0] - 2);
		array[3] = (array[2] + array[1] +array[0] -3);
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
