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
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[0].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[1].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[2].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[3].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[4].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[5].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[6].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[7].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, NEIGHBOOR[8].sprite, NULL);
    sfRenderWindow_drawSprite(window.window, PLAYER.sprite, NULL);
    sfRenderWindow_display(window.window);
}

void init_neigh(GLOBAL)
{
    create_neigh_1(opti);
    create_neigh_2(opti);
    create_neigh_3(opti);
    create_neigh_4(opti);
    create_neigh_5(opti);
    create_neigh_6(opti);
    create_neigh_7(opti);
    create_neigh_8(opti);
    create_neigh_9(opti);
}

void open_game_window(GLOBAL)
{
    window window = create_window();
    creat_song(opti);
    opti->settings.msc.music = sfMusic_createFromFile("./content/music.ogg");
    sfMusic_setVolume(opti->settings.msc.music, opti->settings.msc.level);
    create_sprite_player(opti);
    sfMusic_play(opti->settings.msc.music);
    int event = 0;

    opti->game = window;
    opti->game_struct.neigh = malloc(sizeof(neighbor) * 10);
    init_neigh(opti);
    while (sfRenderWindow_isOpen(window.window)) {
        check_game_event(opti, &event);
        write_window(window, opti);
        event_player(opti);
        if (event == 1)
            break;
    }
    free(NEIGHBOOR);
    sfRenderWindow_destroy(window.window);
}
