#include "main.h"

int fruit_x = 0, fruit_y = 0, x = 0, y = 0, game_over = 0, flag = 0, score = 0;
int snake_length = 3, direction = 0, max_x = 0, max_y = 0;
point head = {0, 0};
point snake_body[100] = {{0, 0}};

int main(void)
{
	setup();

	snake_body[0] = head;
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
