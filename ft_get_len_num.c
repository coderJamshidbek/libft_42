/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_len_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:35:16 by jergashe          #+#    #+#             */
/*   Updated: 2023/01/22 09:14:54 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function returns the length of "number"
int	get_len_num(long number)
{
	int	len_count;

	if (number < 0)
	{
		len_count = 1;
		number *= -1;
	}
	else
		len_count = 0;
	while (number != 0)
	{
		len_count++;
		number /= 10;
	}
	return (len_count);
}
