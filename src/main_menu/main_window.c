/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main_window
*/

#include "jam.h"

// create window structure and fill it
main_menu create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = "Donovan The Building Keeper";
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfResize | sfClose, NULL);
    sfEvent event;
    main_menu screen = {m, w, event, NULL, NULL, NULL, NULL};

    screen = start_button(screen);
    screen = settings_button(screen);
    screen = exit_button(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

// update content
void write_window(main_menu window)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_drawSprite(window.window, window.sprite2, NULL);
    sfRenderWindow_drawSprite(window.window, window.sprite3, NULL);
    sfRenderWindow_display(window.window);
}

// window loop
int open_main_menu(void)
{
    main_menu window = create_window();
    int event = 0;

    while (sfRenderWindow_isOpen(window.window)) {
        write_window(window);
        check_event(window, &event);
        if (event != 0)
            break;
    }
    sfRenderWindow_destroy(window.window);
    analyze_event(event);
    return OK;
}
