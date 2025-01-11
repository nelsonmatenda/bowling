all:

test: bowling_game_test.c bowling_game.c util_test.c util.c
	gcc -Wall -g $< bowling_game.c util_test.c util.c -o test
run_test: test
	./test
