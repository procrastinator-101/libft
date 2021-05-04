/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:48:14 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/04 17:21:19 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstadd_front(t_list **tail, t_list *new)
{
	if (new)
	{
		new->next = *tail;
		*tail = new;
	}
}
