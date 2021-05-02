/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 11:52:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 16:58:56 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support_functions.h"

int	ft_isnumber(char *num)
{
	int	i;

	i = 0;
	if (ft_issign(num[i]))
		i++;
	if (ft_isdigit(num[i]))
		i += 2;
	if (i < 2)
		return (0);
	return (1);
}
