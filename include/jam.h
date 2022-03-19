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
    #include <SFML/System.h>

    #define SCALE 800, 1010, 60

int open_main_menu(void);

void settings_menu(void);

void check_close(main_menu win);

main_menu start_button(main_menu window);

#endif /* !JAM_H_ */
