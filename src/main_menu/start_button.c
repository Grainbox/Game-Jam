/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** start_button
*/

#include "jam.h"

int check_start_button(main_menu window)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);

    if (event == sfTrue && mouse_pos.y >= 420)
        if (mouse_pos.y <= 490 && mouse_pos.x >= 280 && mouse_pos.x <= 530)
            return true;
    return false;
}
