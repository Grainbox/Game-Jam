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
    window screen = {m, w, event, NULL, NULL, NULL, NULL, NULL, 0};

    screen = game_background(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

static void write_window(window window, GLOBAL)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_drawSprite(window.window, opti->game_struct.player.sprite, NULL);
    sfRenderWindow_display(window.window);
}

void open_game_window(GLOBAL)
{
    window window = create_window();
    creat_song(opti);
    // opti->settings.msc.music = sfMusic_createFromFile("./content/music.ogg");
    sfMusic_setVolume(opti->settings.msc.music, opti->settings.msc.level);
    create_sprite_player(opti);
    sfMusic_play(opti->settings.msc.music);
    int event = 0;
    
    opti->game = window;
    while (sfRenderWindow_isOpen(window.window)) {
        check_game_event(opti, &event);
        write_window(window, opti);
        event_player(opti);
        if (event == 1)
            break;
    }
    sfRenderWindow_destroy(window.window);
}
