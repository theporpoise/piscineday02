/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 23:01:06 by mgould            #+#    #+#             */
/*   Updated: 2016/10/27 08:26:22 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//write a function to output the putchar - 6 lines
//write a function to init the variables - 9 lines

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = -1;
	j = -1;
	k = -1;
	l = -1;

	while (++i <= 9)
	{
		while (++j <= 9)
		{
			while (++k <= 9)
			{
				while (++l <= 9)
				{
					ft_putchar(('0' + i));
					ft_putchar(('0' + j));
					ft_putchar(' ');
					ft_putchar(('0' + k));
					ft_putchar(('0' + l));
					ft_putchar((','));
					ft_putchar((' '));
				}
				l = -1;
			}
			k = -1; 
			l = -1;
		}
		j = 0; 
		k = 0;
		l = -1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
