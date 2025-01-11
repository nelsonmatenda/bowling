all:

test: bowling_game_test.c bowling_game.c util_test.c util.c

run_test: test
	./test
