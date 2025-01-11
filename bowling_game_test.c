/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:50:40 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 13:39:21 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdbool.h>
#include "./bowling_game.h"

static void	test_gutter_game(void)
{
	int	i;

	bowling_game_init();
	i = -1;
	while (++i < 20)
		bowling_game_roll(0);
	assert(bowling_game_score() == 0 \
			&& "test_gutter_game()");
}

int	main(void)
{
	test_gutter_game();
}
