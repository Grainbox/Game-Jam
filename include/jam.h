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
    #include <SFML/Audio.h>

    #include <stdio.h>
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

void init_window(int w, int h, int other, all *opti);

void init_song(all *opti);

void init_img(all *opti);

void define_back_img(all *opti);

void define_play_song(all *opti);

void define_front_img(all *opti);

void change_level_son(all *opti);

void button_song(all *opti);

void check_pos(all *opti);


#endif /* !JAM_H_ */
