/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** menu_pause
*/

#include "jam.h"

void screenpause(all *opti, window *window)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *menu_pause;
    sfEvent event;
    sfVector2i pos_pause = {0, 0};

    menu_pause = sfRenderWindow_create(mode, "Pause", sfResize | sfClose, NULL);
    
    sfTexture *option_texture = sfCf("./content/pausescreen.png", NULL);
    sfSprite *background_option = sfSprite_create();
    sfVector2f option_scale = {5.4, 5};
    sfSprite_setScale(background_option, option_scale);
    sfSprite_setTexture(background_option, option_texture, sfTrue);
    
    int return_x = 775;
    int return_y = 505;
    sfTexture *return_texture = sfCf("./content/return-button.png", NULL);
    sfSprite *button_return = sfSprite_create();
    sfVector2f pos_return = {return_x, return_y};
    sfVector2f return_scale = {8.7, 8.7};
    sfSprite_setScale(button_return, return_scale);
    sfSprite_setPosition(button_return, pos_return);
    sfSprite_setTexture(button_return, return_texture, sfTrue);

    int exit_x = 685;
    int exit_y = 670;
    sfTexture *exit_texture = sfCf("./content/quit-game.png", NULL);
    sfSprite *button_exit = sfSprite_create();
    sfVector2f pos_exit = {exit_x, exit_y};
    sfVector2f exit_scale = {12.7, 13};
    sfSprite_setScale(button_exit, exit_scale);
    sfSprite_setPosition(button_exit, pos_exit);
    sfSprite_setTexture(button_exit, exit_texture, sfTrue);

    while (sfRenderWindow_isOpen(menu_pause)) {
        while (sfRenderWindow_pollEvent(menu_pause, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(menu_pause);
            if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
                buttons_pause(menu_pause, window);
        sfRenderWindow_display(menu_pause);
        sfRenderWindow_clear(menu_pause, sfGreen);
        sfRenderWindow_drawSprite(menu_pause, background_option, NULL);
        sfRenderWindow_drawSprite(menu_pause, button_return, NULL);
        sfRenderWindow_drawSprite(menu_pause, button_exit, NULL);
        }
    }
}
