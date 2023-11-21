#include "main.h"

void input(void)
{
	int ch = getch();

	switch (ch)
	{
		case KEY_UP:
			if (direction != KEY_DOWN)
				direction = KEY_UP;
			break;
		case KEY_DOWN:
			if (direction != KEY_UP)
				direction = KEY_DOWN;
			break;
		case KEY_LEFT:
			if (direction != KEY_RIGHT)
				direction = KEY_LEFT;
			break;
		case KEY_RIGHT:
			if (direction != KEY_LEFT)
				direction = KEY_RIGHT;
			break;
		case 'x':
			game_over = 1;
			break;
	}
}
