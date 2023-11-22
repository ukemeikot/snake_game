#include "main.h"

void algorithm(void)
{
	int prev_x = x;
	int prev_y = y;
	int a;
	point body;

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

	/*check collision with self*/
	/*for (a = 1; a < snake_length; a++)
	{
		head = snake_body[0];
		body = snake_body[a];
		if (head.x == (body.x) && head.y == (body.y))
			game_over = 1;
	}*/

	/*Check collision with food*/
	if (x == fruit_x && y == fruit_y)
	{
		//get the last snake body coordinate
		body = snake_body[snake_length - 1];
		//add it to the snake body to increase the length
		snake_body[snake_length] = body;
		printw("food");
		refresh();
		getch();
		score++;
		fruit_x = rand() % max_x;
		fruit_y = rand() % max_y;
		snake_length++;
	}

	/*Check collision with the boundaries*/
	if (x >= max_x || x < 0 || y >= max_y || y < 0)
	{
		printw("boundary");
		refresh();
		getch();
		game_over = 1;
	}

}
