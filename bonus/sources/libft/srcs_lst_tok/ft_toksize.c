/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_lstsize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:45:30 by averdon           #+#    #+#             */
/*   Updated: 2022/11/28 17:50:14 by averdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tok.h"

int	ft_toksize(t_tok *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
