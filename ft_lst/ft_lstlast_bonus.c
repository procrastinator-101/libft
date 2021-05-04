/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:34:37 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/04 17:45:33 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

t_list	*ft_lstlast(t_list *tail)
{
	while (tail)
	{
		if (!tail->next)
			return (tail);
		tail = tail->next;
	}
	return (tail);
}
