#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <allegro.h>
#include <cstdio>

bool end_game = false;

void initGame();
void processInput();
void processRender();

#endif // GAME_H_INCLUDED
