/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** check_events
*/

#include "jam.h"

// check if exit_button is cliqued
static int check_credit_back_button(window window)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);

    if (event == sfTrue && mouse_pos.y >= 915)
        if (mouse_pos.y <= 965 && mouse_pos.x >= 305 && mouse_pos.x <= 511)
            return true;
    return false;
}

void check_credit_event(window window, int *event)
{
    while (sfRenderWindow_pollEvent(window.window, &window.event)) {
        if (window.event.type == sfEvtClosed)
            sfRenderWindow_close(window.window);
        if (check_credit_back_button(window) == true)
            *event = 1;
    }
}
