/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:01:46 by argusmao          #+#    #+#             */
/*   Updated: 2023/08/15 20:12:02 by argusmao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c) {

    if (c >= 0 && c <= 127)
        return (1);
    return (0);
 }