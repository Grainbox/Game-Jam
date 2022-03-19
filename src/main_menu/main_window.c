/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** main_window
*/

#include "jam.h"

// create window structure and fill it
static window create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = TITLE;
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfClose, NULL);
    sfEvent event;
    window screen = {m, w, event, NULL, NULL, NULL, NULL, NULL, 0};

    screen = start_button(screen);
    screen = settings_button(screen);
    screen = exit_button(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

// update content
static void write_window(window window)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_drawSprite(window.window, window.sprite2, NULL);
    sfRenderWindow_drawSprite(window.window, window.sprite3, NULL);
    sfRenderWindow_display(window.window);
}

// window loop
void open_main_menu(void)
{
    window window = create_window();
    int event = 0;

    while (sfRenderWindow_isOpen(window.window)) {
        write_window(window);
        check_main_event(window, &event);
        if (event != 0)
            break;
    }
    sfRenderWindow_destroy(window.window);
    analyze_event(event);
}
