#include "main.h"

void algorithm(void)
{
	int prev_x = x;
	int prev_y = y;
	int a;

	/*flags to check for which keypress ocurred*/
	switch (direction)
	{
		case KEY_UP:
			y--;
			break;
		case KEY_DOWN:
			y++;
			break;
		case KEY_LEFT:
			x--;
			break;
		case KEY_RIGHT:
			x++;
			break;
	}

	/*Check collision with food*/
	if (x == fruit_x && y == fruit_y)
	{
		score++;
		fruit_x = rand() % max_x;
		fruit_y = rand() % max_y;
		snake_length++;
	}

	/*Check collision with the boundaries*/
	if (x >= max_x || x < 0 || y >= max_y || y < 0)
	{
		game_over = 1;
	}

	/*check collision with self*/
	for (a = 1; a < snake_length; a++)
	{
		if ((x == prev_x - a) &&  (y == prev_y))
		{
			game_over = 1;
		}
	}
}
