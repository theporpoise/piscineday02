/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 15:01:44 by mgould            #+#    #+#             */
/*   Updated: 2016/10/26 17:28:59 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 0;
	while (('a' + i) <= 'z')
	{
		ft_putchar(('a' + i));
		i = i + 1;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
