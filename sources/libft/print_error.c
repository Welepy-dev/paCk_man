/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:54:55 by marcsilv          #+#    #+#             */
/*   Updated: 2024/10/22 17:45:44 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_error(char *error)
{
	if (error)
	{
		ft_putstr_fd("Error: ", 2);
		ft_putstr_fd(error, 2);
		ft_putstr_fd(".\n", 2);
	}
	exit(1);
}
