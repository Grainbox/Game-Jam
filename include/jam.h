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

    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>

    #define SCALE 800, 1010, 60

    #define TITLE "Donovan The Building Keeper"

void open_main_menu(void);

void settings_menu(void);

void check_main_event(window win, int *event);

void analyze_event(int event);

window start_button(window window);

int check_start_button(window window);

window settings_button(window window);

int check_settings_button(window window);

window exit_button(window window);

int check_exit_button(window window);

window game_background(window window);

void check_game_event(window win, int *event);

void open_game_window(void);

void display_sprites(void);

window break_background(window window);

int display_break(window *window);

#endif /* !JAM_H_ */
