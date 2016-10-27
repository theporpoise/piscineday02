/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:01:06 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 15:17:18 by mgould           ###   ########.fr       */
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
	ft_putchar(('0' + i));
	ft_putchar(('0' + j));
	ft_putchar((' '));
	ft_putchar(('0' + k));
	ft_putchar(('0' + l));
	if ((i == 9) && (j == 8))
	{
		return ;
	}
	ft_putchar((','));
	ft_putchar((' '));
}

void	loop_count(int i, int j, int k, int l)
{
	while (++i <= 9)
	{
		while (++j <= 9)
		{
			while (++k <= 9)
			{
				while (++l <= 9)
				{
					out_char(i, j, k, l);
				}
				l = -1;
			}
			k = i - 1;
			l = j + 1;
		}
		j = -1;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	j = -1;
	k = -1;
	l = 0;
	loop_count(i, j, k, l);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
