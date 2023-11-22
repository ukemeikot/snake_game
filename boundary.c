#include "main.h"

/**
  *bundary - draws the game boundary
  */

void boundary(void)
{
	int a, i;
	point body;

	clear();

	/*draw snake head*/
	head.x = x;
	head.y = y;
	mvprintw(head.y, head.x, "O");
	snake_body[0] = head;

	/* update snake body coordinate location */
	for (i = snake_length - 1; i > 0; i--)
	{
		snake_body[i] = snake_body[i - 1];
	}

	/* update the head */
	head.x = x;
	head.y = y;
	snake_body[0] = head;

	/*draw the snake body*/

	for (a = 1; a < snake_length; a++)
	{
		body = snake_body[a];
		mvprintw(body.y, body.x, "o");
	}

	/* redraw the snake head  */
	head = snake_body[0];
	mvprintw(head.y, head.x, "O");

	/*draw food*/
	mvprintw(fruit_y, fruit_x, "*");

	/*display the score*/
	mvprintw(max_y - 1, 0, "Score: %d", score);
	refresh();
}
