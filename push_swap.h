/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpirela- <mpirela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:53:07 by mpirela-          #+#    #+#             */
/*   Updated: 2024/03/11 19:13:07 by mpirela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>

t_list	*check_and_convert(char *argv[]);
int		check_duplicate(char *argv[]);

#endif