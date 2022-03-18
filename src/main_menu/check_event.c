/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** check_event
*/

#include "jam.h"

void analyze_event(int event)
{
    if (event == 1);
        //start_game
}

void check_event(main_menu win, int *event)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
        if (check_start_button(win) == true)
            *event = 1;
    }
}
