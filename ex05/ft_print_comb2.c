/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:43:15 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 11:44:03 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	out_char(int i, int j, int k, int l)
{
	ft_putchar(('0' + i));
	ft_putchar(('0' + j));
	ft_putchar(' ');
	ft_putchar(('0' + k));
	ft_putchar(('0' + l));
	if ((i + j + k + l) < 36)
	{
		ft_putchar((','));
		ft_putchar((' '));
	}
}

void	ft_print_comb2(void)
{
	static int array[4];

	while (++(array[0]) <= 9)
	{
		while (++(array[1]) <= 9)
		{
			while (++(array[2]) <= 9)
			{
				while (++(array[3]) <= 9)
				{
					out_char(array[0], array[1], array[2], array[3]);
				}
				array[3] = -1;
			}
			array[2] = -1;
			array[3] = -1;
		}
		array[1] = 0;
		array[2] = 0;
		array[3] = -1;
	}
}
