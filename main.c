/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 19:35:03 by youness           #+#    #+#             */
/*   Updated: 2021/04/04 21:20:59 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	int	arr[] = {5, 8, 3, 2, 1, 7};
	int size =  sizeof(arr) / sizeof(int);

	ft_quick_sort(arr, size);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
