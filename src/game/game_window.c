/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** game_window
*/

#include "jam.h"

static window create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = TITLE;
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfClose, NULL);
    sfEvent event;
    window screen = {m, w, event, NULL, NULL, NULL, NULL, 1};

    screen = game_background(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

static void write_window(window window)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_display(window.window);
}

void open_game_window(void)
{
    window window = create_window();
    int event = 0;

    while (sfRenderWindow_isOpen(window.window)) {
        check_game_event(window, &event);
        write_window(window);
        if (event == 1)
            break;
    }
    sfRenderWindow_destroy(window.window);
}
