/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:12:32 by argusmao          #+#    #+#             */
/*   Updated: 2023/08/15 20:12:33 by argusmao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c) {
    if (c >= 32 && c <= 126)
        return (1);

        return(0);
}
