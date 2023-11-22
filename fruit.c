#include "main.h"

/**
  *fruit - prints fruits to the screen
  */

void setup(void)
{
	srand(time(0));
	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	timeout(0);
	int count;
	point body;

	getmaxyx(stdscr, max_y, max_x);

	game_over = 0;
	count = 3;
	score = 0;

	snake_length = 3;

	/*Snake starting position*/
	x = max_x / 2;
	y = max_y / 2;
	while (count)
	{
		point body = {.x = x - (count + 5), .y = y};
		count--;
		snake_body[count] = body;
	}

	direction = KEY_RIGHT;

	fruit_x = rand() % max_x;
	fruit_y = rand() % max_y;
}
