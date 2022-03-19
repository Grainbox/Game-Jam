/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** jam_struct
*/

#ifndef JAM_STRUCT_H_
    #define JAM_STRUCT_H_

    #include "jam.h"
    #include <unistd.h>
    #include <SFML/Graphics.h>

struct main_menu {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
};
typedef struct main_menu main_menu;

// settings ::::::::::::::::::::::

struct window_init {
    sfRenderWindow* window;
    sfEvent event;
};
typedef struct window_init window_init;

struct image {
    sfSprite *sprite;
    sfTexture *texture;
    int x;
    int y;
    int size_x;
    int size_y;
    int rotate;
};
typedef struct image image;

struct setting_menu {
    window_init window;
    image *img;
};
typedef struct setting_menu setting_menu;


// :::::::::::::::::::::::::::::::::

struct all {
    setting_menu settings;
};
typedef struct all all;

#endif /* !JAM_STRUCT_H_ */
