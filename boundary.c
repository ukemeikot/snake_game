#include "main.h"

/**
  *bundary - draws the game boundary
  */

void boundary(void)
{
	int a;

	clear();

	/*draw snake head*/
	mvprintw(y, x, "O");

	/*draw the snake body*/

	for (a = 1; a < snake_length; a++)
	{
		mvprintw(y, x + a, "o");
	}

	/*draw food*/
	mvprintw(fruit_y, fruit_x, "*");

	/*display the score*/
	mvprintw(max_y - 1, 0, "Score: %d", score);
	refresh();
}
