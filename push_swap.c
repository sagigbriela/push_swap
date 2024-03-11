/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:43:30 by mpirela-          #+#    #+#             */
/*   Updated: 2024/03/11 19:43:58 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*array_a;

	if (argc < 2)
	{
		printf("Error\n");
		return (0);
	}
	array_a = check_and_convert(argv);
	if (!array_a)
		printf("ERRORR");
	else
		printf("AMIGA Q HAS PASAO!!");
	return (0);
}
