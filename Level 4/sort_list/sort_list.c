/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_list.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/20 09:03:59 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/05/20 09:17:24 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*curr;
	t_list	*trail;
	int		tmp;

	tmp = 0;
	curr = lst->next;
	trail = lst;
	while (curr)
	{
		if (cmp(trail->data, curr->data) == 0)
		{
			tmp = trail->data;
			trail->data = curr->data;
			curr->data = tmp;
			curr = lst->next;
			trail = lst;
		}
		else
		{
			curr = curr->next;
			trail = trail->next;
		}
	}
	return (lst);
}
