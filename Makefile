all:

test: bowling_game_test.c bowling_game.c
	gcc -Wall -g $< bowling_game.c -o test

run_test: test
	./test
