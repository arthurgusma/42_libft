/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:12:14 by argusmao          #+#    #+#             */
/*   Updated: 2023/08/15 20:12:14 by argusmao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (0); 
}