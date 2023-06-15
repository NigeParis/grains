/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 20:39:05 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/15 21:01:15 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "grains.h"




int main(void)
{

	printf("\n\nSquare zero that does not exist : %llu",square(0));
	printf("\nNumber of grains on square 1 : %llu",square(1));
	printf("\nNumber of grains on square 2 : %llu",square(2));
	printf("\nNumber of grains on square 3 : %llu",square(3));
	printf("\nNumber of grains on square 4 : %llu",square(4));
	printf("\nNumber of grains on square 5 : %llu",square(5));
	printf("\nNumber of grains on square 6 : %llu",square(6));
	printf("\nNumber of grains on square 7 : %llu",square(7));
	printf("\nNumber of grains on square 8 : %llu",square(8));
	printf("\nNumber of grains on square 16 : %lld",square(16));
	printf("\nNumber of grains on square 32 : %llu",square(32));
	printf("\nNumber of grains on square 64 : %llu",square(64));
	printf("\nsquare 65 that does not exist : %llu",square(65));
	printf("\nTOTAL number of grains on the chess board : %llu\n\n",total());


	return (0);
}
