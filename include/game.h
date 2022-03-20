/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** jam_struct
*/

#ifndef JAM__STRUCT_H_
    #define JAM__STRUCT_H_

    #include "jam.h"

struct joueur {
    sfSprite *sprite;
    sfTexture *texture;
    int x;
    int y;
    int size_x;
    int size_y;
    int rotate;
    sfIntRect rect;
};
typedef struct joueur joueur;

struct musics {
    sfMusic *music;
    int level;
};
typedef struct musics musics;

struct menu_jeu {
    joueur player;
    musics *music;
};
typedef struct menu_jeu menu_jeu;

#endif /* !JAM_STRUCT_H_ */
