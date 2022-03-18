/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** jam
*/

#ifndef JAM_H_
    #define JAM_H_

    #include "my.h"

    #include "jam_struct.h"

    #include <SFML/Graphics.h>

    #define SCALE 800, 1010, 60

int main_menu(void);

void settings_menu(void);

void check_close(window win);

window start_button(window window);

#endif /* !JAM_H_ */
