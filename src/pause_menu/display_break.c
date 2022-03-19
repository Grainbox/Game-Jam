/*
** EPITECH PROJECT, 2022
** jam
** File description:
** display_break
*/

#include "jam.h"

void display_buttons(all opti)
{
    sfRenderWindow_drawSprite(opti.game.window, opti.game.sprite1, NULL);
    sfRenderWindow_drawSprite(opti.game.window, opti.game.sprite2, NULL);
    sfRenderWindow_drawSprite(opti.game.window, opti.game.sprite3, NULL);
    sfRenderWindow_drawSprite(opti.game.window, opti.game.sprite4, NULL);
    sfRenderWindow_display(opti.game.window);
}

int display_break(all opti)
{
    int playing = 0;

    break_background(&opti);
    create_setting_button(&opti);
    create_exit_button(&opti);
    create_resume_button(&opti);
    while (playing == 0) {
        if (sfRenderWindow_pollEvent(opti.game.window, &opti.game.event) == sfTrue &&
            opti.game.event.type == sfEvtClosed)
            return 1;
        display_buttons(opti);
        if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
            buttons_pause(&opti, &playing);
    }
    if (playing == 2)
        return 1;
    return 0;
}
