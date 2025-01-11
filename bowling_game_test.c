/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:50:40 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 15:59:27 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdbool.h>
#include "./bowling_game.h"

static void	roll_many(int n, int pins)
{
	int	i;

	i = -1;
	while (++i < n)
		bowling_game_roll(pins);
}

static void	test_gutter_game(void)
{
	bowling_game_init();
	roll_many(20, 0);
	assert(bowling_game_score() == 0 \
			&& "test_gutter_game()");
}

static void	test_all_ones(void)
{
	bowling_game_init();
	roll_many(20, 1);
	assert(bowling_game_score() == 20 \
			&& "test_all_ones()");
}

static void	test_one_spare(void)
{
	bowling_game_init();
	bowling_game_roll(5);
	bowling_game_roll(5);
	bowling_game_roll(3);
	roll_many(17, 0);
	assert(bowling_game_score() == 16 \
			&& "test_one_spare()");
}

static void	test_one_strike(void)
{
	bowling_game_init();
	bowling_game_roll(10);
	bowling_game_roll(3);
	bowling_game_roll(4);
	roll_many(16, 0);
	assert(bowling_game_score() == 24 \
			&& "test_one_strike()");
}

int	main(void)
{
	test_gutter_game();
	test_all_ones();
	test_one_spare();
	test_one_strike();
}
