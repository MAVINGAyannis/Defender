/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** pause_mode.c
*/
#include "../../my_defender.h"

int play_pause(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 820 &&
            event.mouseButton.x <= 820 + 110 &&
            event.mouseButton.y >= 465 &&
            event.mouseButton.y <= 465 + 110) {
            vector->pause.x = 1920;
            vector->pause.y = 1920;
            return (1);
        }
    }
    return (0);
}

int quit_pause(sfEvent event, v_v *vector, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 990 &&
            event.mouseButton.x <= 990 + 110 &&
            event.mouseButton.y >= 465 &&
            event.mouseButton.y <= 465 + 110) {
            vector->pause.x = 1920;
            vector->pause.y = 1920;
            sfRenderWindow_close(window);
            exit (1);
        }
    }
    return (0);
}

int pause_mode_2(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window)
{
    while (1) {
        vector->pause.x = 0;
        vector->pause.y = 0;
        setPosition(sprite, vector);
        setDraw(window, sprite);
        quit_pause(event, vector, window);
        sfRenderWindow_display(window);
        if (play_pause(event, vector) == 1)
            return (0);
        while (sfRenderWindow_pollEvent(window, &event))
            close_end(window, event);
    }
}

int pause_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window)
{
    vector->pause_mode = 0;

    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 1820 &&
            event.mouseButton.x <= 1820 + 110 &&
            event.mouseButton.y >= 20 &&
            event.mouseButton.y <= 20 + 110) {
            pause_mode_2(event, vector, sprite, window);
        }
    }
    return (0);
}