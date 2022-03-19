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

    #include "settings_struct.h"

struct window {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sprite1;
    sfSprite *sprite2;
    sfSprite *sprite3;
    sfSprite *sprite4;
    sfSprite *sprite5;
    sfSprite *sprite8;
};
typedef struct window window;

// structure global
struct all {
    setting_menu settings;
    struct window game;
};
typedef struct all all;

#endif /* !JAM_STRUCT_H_ */
