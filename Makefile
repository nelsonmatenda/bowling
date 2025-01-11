all:

test: bowling_game_test.c
	gcc -Wall -Wextra -Werror $< -o test

run_test: test
	./test
