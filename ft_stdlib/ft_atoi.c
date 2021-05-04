/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:51:15 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/04 21:19:12 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sp;
	int	ret;

	sp = 0;
	while (str[sp] == 32 || (str[sp] > 8 && str[sp] < 14))
		sp++;
	i = sp;
	if (str[sp] == '-' || str[sp] == '+')
		i++;
	ret = 0;
	while (str[i] > 47 && str[i] < 58)
		ret = ret * 10 + (str[i++] - 48);
	return (str[sp] == '-' ? -ret : ret);
}
