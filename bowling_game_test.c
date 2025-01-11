/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bowling_game_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matenda <matenda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 12:50:40 by matenda           #+#    #+#             */
/*   Updated: 2025/01/11 19:07:05 by matenda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bowling_game_test.h"

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

static void	test_perfect_game(void)
{
	bowling_game_init();
	roll_many(12, 10);
	assert(bowling_game_score() == 300 \
			&& "test_perfect_game()");
}

int	main(void)
{
	test_gutter_game();
	test_all_ones();
	test_one_spare();
	test_one_strike();
	test_perfect_game();
	return (0);
}
