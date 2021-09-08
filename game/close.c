/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** lose.c
*/
#include "../my_defender.h"

void loose_end(v_v *vector, sfRenderWindow *window)
{
    if (lose(vector) == 42) {
        sfRenderWindow_close(window);
        exit (1);
    }
}

void close_end(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        exit (0);
    }
}

int lose(v_v *vector)
{
    if (vector->skin1.x == 850)
        return (42);
    return (0);
}