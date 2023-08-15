/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argusmao <argusmao@@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:12:47 by argusmao          #+#    #+#             */
/*   Updated: 2023/08/15 20:12:49 by argusmao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#ifndef LIBFT_H
# define LIBFT_H
 int ft_isalnum(int c);
 int ft_isdigit(char c);
 int ft_isascii(int c);
 int ft_isalpha(char c);
 int ft_isprint(int c);
 void *ft_memset(void *b, int c, size_t len);
 size_t ft_strlen(const char *s);

#endif