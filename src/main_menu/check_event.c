/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** check_event
*/

#include "jam.h"

// analyze received event
void analyze_event(int event, GLOBAL)
{
    if (event == 1)
        open_game_window();
    if (event == 2)
        settings_menu(opti);
}

// check for any event
void check_main_event(window win, int *event)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
        if (check_start_button(win) == true)
            *event = 1;
        if (check_settings_button(win) == true)
            *event = 2;
        if (check_exit_button(win) == true)
            *event = 3;
    }
}
