
#ifndef MAIN_H
#define MAIN_H

/*Standard Header Files*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
extern int fruit_x, fruit_y, x, y, game_over, flag, score, max_x, max_y;
extern int snake_length, direction;
/*User defined Function prototype*/
void boundary(void);
void fruit(void);
void input(void);
void algorithm(void);
void setup(void);
/*User Define Variables*/

#endif

