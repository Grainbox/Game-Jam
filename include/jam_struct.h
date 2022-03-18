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

#endif /* !JAM_STRUCT_H_ */
