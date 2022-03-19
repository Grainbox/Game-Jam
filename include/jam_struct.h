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
    #include <SFML/Audio/Music.h>

struct window {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    int playing;
};
typedef struct window window;

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

struct musique {
    sfMusic *music;
    int level;
};
typedef struct musique musique;

struct setting_menu {
    window_init window;
    image *img;
    musique msc;
};
typedef struct setting_menu setting_menu;


// :::::::::::::::::::::::::::::::::

struct all {
    setting_menu settings;
};
typedef struct all all;

#endif /* !JAM_STRUCT_H_ */
