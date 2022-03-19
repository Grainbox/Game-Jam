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
    
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <unistd.h>

    #define SCALE 800, 1010, 60

    #define TITLE "Donovan The Building Keeper"

int open_main_menu(void);

void settings_menu(void);

void check_event(main_menu win, int *event);

void analyze_event(int event);

main_menu start_button(main_menu window);

int check_start_button(main_menu window);

main_menu settings_button(main_menu window);

int check_settings_button(main_menu window);

main_menu exit_button(main_menu window);

int check_exit_button(main_menu window);

#endif /* !JAM_H_ */
