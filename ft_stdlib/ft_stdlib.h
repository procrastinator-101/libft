/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:53:27 by youness           #+#    #+#             */
/*   Updated: 2021/05/04 16:56:14 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_iswap(int *a, int *b);
void	*ft_calloc(size_t count, size_t size);

#endif
