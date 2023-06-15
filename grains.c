/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grains.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:52:38 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/15 19:01:42 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grains.h"

#define ERROR 0

/**
*  NOTE : return ((uint64_t) 1 << (index - 1)); suffix uint64_t in the return
*	makes the 1 not an int but an unsigned long long
*/

uint64_t	square(uint8_t index)
{
	if ((index == 0) || (index > 64))
		return (ERROR);
	return ((uint64_t) 1 << (index - 1));
}

/**
*	NOTE : Lines 45 and 46 can be written as below, getting rid of the variables
*
*  uint64_t total(void) 
*	{ 
*		return ((square(64) * 2) - 1); 
*	}
*/

uint64_t	total(void)
{
	uint64_t	total;
	int			i;	

	i = 64;
	total = square(i);
	return ((total * 2) - 1);
}
