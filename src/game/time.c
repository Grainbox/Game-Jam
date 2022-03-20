/*
** Mathieu Rio, 2022
** Game-Jam
** File description:
** game_window
*/

#include "jam.h"

int temps (float i)
{
    sfClock *clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    while (1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > i) {
            return 0;
            sfClock_restart(clock);
        }
    }
}
