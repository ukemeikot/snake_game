#include "main.h"

/**
  *fruit - prints fruits to the screen
  */

void setup(void)
{
	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	timeout(0);

	getmaxyx(stdscr, max_y, max_x);

	game_over = 0;
	score = 0;

	snake_length = 1;

	/*Snake starting position*/
	x = max_x / 2;
	y = max_y / 2;

	direction = KEY_RIGHT;

	fruit_x = rand() % max_x;
	fruit_y = rand() % max_y;
}
