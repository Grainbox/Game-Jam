/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** credit_window
*/

#include "jam.h"

static window create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = TITLE;
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfClose, NULL);
    sfEvent event;
    window screen = {m, w, event, NULL, NULL, NULL, NULL, NULL, 0};

    screen = credit_back_button(screen);
    screen = credit_background(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

void write_window(window window)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_drawSprite(window.window, window.sprite2, NULL);
    sfRenderWindow_display(window.window);
}

void open_credits(GLOBAL)
{
    window window = create_window();
    int event = 0;

    while (sfRenderWindow_isOpen(window.window)) {
        write_window(window);
        check_credit_event(window, &event);
        if (event != 0)
            break;
    }
    sfRenderWindow_destroy(window.window);
    if (event == 1)
        settings_menu(opti);
}
