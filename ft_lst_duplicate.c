/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:43:25 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/03 12:50:05 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_duplicate(t_list *src)
{
	t_list	*dst;
	t_list	*node;

	dst = NULL;
	while (src)
	{
		node = ft_lstnew(src->content);
		if (!node)
		{
			ft_lstclear(&dst, free);
			return (0);
		}
		node->next = 0;
		ft_lstadd_back(&dst, node);
		src = src->next;
	}
	return (dst);
}
