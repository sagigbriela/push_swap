/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:16:55 by mpirela-          #+#    #+#             */
/*   Updated: 2024/03/11 19:43:58 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	check_duplicate(t_list *array_a)
// {
// 	t_list	*current;
// 	t_list	*runner;

// 	if (!array_a)
// 		return (0);
// 	current = array_a;
// 	while (current != NULL)
// 	{
// 		runner = current->next;
// 		printf("HOLA");
// 		while (runner != NULL)
// 		{
// 			if (current->content == NULL || runner->content == NULL)
// 				return (0);
// 			if (*(int *)runner->content == *(int *)current->content)
// 				return (0);
// 			runner = runner->next;
// 		}
// 		current = current->next;
// 	}
// 	return (1);
// }

int	check_duplicate(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_strncmp(argv[i], argv[j], sizeof(*argv)) == 0)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

t_list	*check_and_convert(char *argv[])
{
	t_list	*array_a;
	t_list	*node;
	int		nb;
	int		i;

	i = 1;
	nb = 0;
	array_a = NULL;
	if (argv[i] == NULL)
		return (NULL);
	if (!check_duplicate(argv))
		return (NULL);
	while (argv[i])
	{
		nb = atoi_modify(argv[i]);
		if (nb == 0)
			return (NULL);
		node = ft_lstnew((void *)(intptr_t)nb);
		if (!node)
			return (NULL);
		ft_lstadd_back(&array_a, node);
		i++;
	}
	return (array_a);
}
