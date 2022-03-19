/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** jam_struct
*/

#ifndef JAM_STRUCT_SETTINGS_H_
    #define JAM_STRUCT_SETTINGS_H_

    #include "jam.h"

// structure pour le menu settings qui gere la fenetre
struct window_init {
    sfRenderWindow* window;
    sfEvent event;
};
typedef struct window_init window_init;

// structure pour le menu settings qui gere les images
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

// structure pour le menu settings qui gere la musique
struct musique {
    sfMusic *music;
    int level;
};
typedef struct musique musique;

// structure pour le menu settings
struct setting_menu {
    window_init window;
    image *img;
    musique msc;
};
typedef struct setting_menu setting_menu;

#endif /* !JAM_STRUCT_H_ */
