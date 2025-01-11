all:

test: bowling_game_test.c
	gcc -Wall $< bowling_game.c -o test

run_test: test
	./test
