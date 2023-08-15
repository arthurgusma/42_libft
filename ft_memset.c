/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:12:36 by argusmao          #+#    #+#             */
/*   Updated: 2023/08/15 20:12:37 by argusmao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = (char *) s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return ((void *) temp);
}