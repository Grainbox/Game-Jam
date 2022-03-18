/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main
*/

#include "jam.h"

<<<<<<< HEAD
void check_close(window win)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
    }
}

=======
>>>>>>> 3e06298b8dc76827cd08c215c224ffe0e2d81ead
int main(void)
{
    main_menu();
    return OK;
}
