/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** menu.c
*/
#include "../../my_defender.h"

int play_menu(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 380 &&
            event.mouseButton.x <= 380 + 110 &&
            event.mouseButton.y >= 930 &&
            event.mouseButton.y <= 930 + 110) {
            vector->menu.x = 1920;
            vector->menu.y = 1920;
            return (1);
        }
    }
    return (0);
}

int quit_menu(sfEvent event, v_v *vector, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 1145 &&
            event.mouseButton.x <= 1345 + 110 &&
            event.mouseButton.y >= 930 &&
            event.mouseButton.y <= 930 + 110) {
            vector->pause.x = 1920;
            vector->pause.y = 1920;
            sfRenderWindow_close(window);
            exit(1);
        }
    }
    return (0);
}

void menu_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window)
{
    while (1) {
        vector->menu.x = 0;
        vector->menu.y = 0;
        setPosition(sprite, vector);
        setDraw(window, sprite);
        sfRenderWindow_display(window);
        if (play_menu(event, vector) == 1)
            return;
        quit_menu(event, vector, window);
        while (sfRenderWindow_pollEvent(window, &event))
            close_end(window, event);
    }
}