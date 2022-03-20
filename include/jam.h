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
    #include <SFML/System/Clock.h>

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>

    #include <time.h>

    #define SCALE 800, 1010, 60

    #define TITLE "Donovan The Building Keeper"

    #define WINDOW opti->settings.window.window

    #define MSC_LV opti->settings.msc.level

    #define CREA_FILE sfTexture_createFromFile

    #define GET_P sfMouse_getPosition

    #define SET_P sfSprite_setPosition

    #define SET_T sfSprite_setTexture

    #define GLOBAL all *opti

    #define PLAYER opti->game_struct.player

void open_main_menu(GLOBAL);

void settings_menu(GLOBAL);

void check_main_event(window win, int *event);

void analyze_event(int event, GLOBAL);

window start_button(window window);

int check_start_button(window window);

window settings_button(window window);

int check_settings_button(window window);

window exit_button(window window);

int check_exit_button(window window);

window game_background(window window);

void check_game_event(GLOBAL, int *event);

void open_game_window(GLOBAL);

void display_sprites(void);

void break_background(GLOBAL);

int display_break(all opti);

void init_window(int w, int h, int other, GLOBAL);

void init_song(GLOBAL);

void init_img(GLOBAL);

void define_back_img(GLOBAL);

void define_play_song(GLOBAL);

void define_front_img(GLOBAL);

void change_level_son(GLOBAL);

void button_song(GLOBAL);

void check_pos(GLOBAL);

void button_back(GLOBAL);

void init(GLOBAL);

void create_setting_button(GLOBAL);

void create_exit_button(GLOBAL);

void create_resume_button(GLOBAL);

void define_background(all *opti);

void buttons_pause(GLOBAL, int *playing);

window background_main(window window);

void create_player(GLOBAL);

#endif /* !JAM_H_ */
