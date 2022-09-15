/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inlee <inlee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:07:19 by inlee             #+#    #+#             */
/*   Updated: 2022/08/31 19:41:41 by inlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	a;

	while (1)
	{
		a = *str;
		if (a == '\0')
			break ;
		write(1, &a, 1);
		str++;
	}
}