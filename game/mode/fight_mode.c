/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** fight_mode.c
*/
#include "../../my_defender.h"

void monster(sfRenderWindow *window, s_s *sprite, v_v *vector)
{
    monster_1(window, sprite, vector);
}

void fight_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window)
{
    vector->map.x = 1920;
    vector->map.y = 1920;
    vector->map_2.x = 0;
    vector->map_2.y = 0;
    while (vector->fight_mode == 0) {
        setPosition(sprite, vector);
        setDraw(window, sprite);
        monster(window, sprite, vector);
        pause_mode(event, vector, sprite, window);
        sfRenderWindow_display(window);
        loose_end(vector, window);
        while (sfRenderWindow_pollEvent(window, &event))
            close_end(window, event);
    }
}