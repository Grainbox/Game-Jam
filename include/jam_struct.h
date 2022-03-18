/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** jam_struct
*/

#ifndef JAM_STRUCT_H_
    #define JAM_STRUCT_H_

    #include "jam.h"

    #include <SFML/Graphics.h>

struct window {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
};
typedef struct window window;





struct window_init {
    sfRenderWindow* window;
    sfEvent event;
};
typedef struct window_init window_init;

struct setting_menu {
    window_init window;
};
typedef struct setting_menu setting_menu;

struct all {
    setting_menu settings;
};
typedef struct all all;

#endif /* !JAM_STRUCT_H_ */
