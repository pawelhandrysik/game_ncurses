//
// Created by pablo on 16.01.18.
//

#ifndef GAME_NCURSES_MAP_H
#define GAME_NCURSES_MAP_H

#include <stdio.h>
#include <string.h>
#include "types.h"

void map_load(char ** map);
void map_handle_action(enum Action action, char ** map);

#endif //GAME_NCURSES_MAP_H
