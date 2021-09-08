/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** placer_mode.c
*/
#include "../../my_defender.h"

void placer_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window)
{
    while (vector->placer_mode == 0) {
        setPosition(sprite, vector);
        setDraw(window, sprite);
        sfRenderWindow_display(window);
        tower_placer(event, vector);
        archer_placer(event, vector);
        post_placer(event, vector);
        pause_mode(event, vector, sprite, window);
        if (event.type == sfEvtMouseButtonPressed) {
            if (event.mouseButton.x >= 1270 &&
                event.mouseButton.x <= 1270 + 110 &&
                event.mouseButton.y >= 930 &&
                event.mouseButton.y <= 930 + 110) {
                    vector->placer_mode++;
                    break;
            }
        }
        while (sfRenderWindow_pollEvent(window, &event))
            close_end(window, event);
    }
}