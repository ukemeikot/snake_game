#include "main.h"

int fruit_x, fruit_y, x, y, game_over, flag, score;
int snake_length, direction, max_x, max_y;

int main(void)
{
	setup();

	while (!game_over)
	{
		boundary();
		input();
		algorithm();
		usleep(100000);
	}
	endwin();
	return (0);
}
