/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** start_button
*/

#include "jam.h"

// check if exit_button is cliqued
int check_exit_button(main_menu window)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);

    if (event == sfTrue && mouse_pos.y >= 750)
        if (mouse_pos.y <= 820 && mouse_pos.x >= 280 && mouse_pos.x <= 530)
            return true;
    return false;
}

// check if start_button is cliqued
int check_start_button(main_menu window)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);

    if (event == sfTrue && mouse_pos.y >= 420)
        if (mouse_pos.y <= 490 && mouse_pos.x >= 280 && mouse_pos.x <= 530)
            return true;
    return false;
}

// check if settings_button is cliqued
int check_settings_button(main_menu window)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);

    if (event == sfTrue && mouse_pos.y >= 575)
        if (mouse_pos.y <= 650 && mouse_pos.x >= 185 && mouse_pos.x <= 640)
            return true;
    return false;
}
