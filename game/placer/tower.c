/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower.c
*/
#include "../../my_defender.h"

void tower_button(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 220 &&
            event.mouseButton.x <= 220 + 110 &&
            event.mouseButton.y >= 930 &&
            event.mouseButton.y <= 930 + 110) {
            vector->placer_tower = 1;
        }
    }
}

void end_placer_tower(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.y - 130 > 400)
            return;
        if (event.mouseButton.x - 130 > 700 && event.mouseButton.x - 130 < 1000)
            return;
        vector->tower.y = event.mouseButton.y - 130;
        vector->tower.x = event.mouseButton.x - 130;
        vector->placer_tower = 0;
    }
}

void tower_placer(sfEvent event, v_v *vector)
{
    if (vector->placer_post == 1 || vector->placer_archer == 1)
        return;
    if (vector->placer_tower == 1) {
        vector->tower.y = event.mouseMove.y - 130;
        vector->tower.x = event.mouseMove.x - 130;
        end_placer_tower(event, vector);
    }
    if (vector->placer_tower == 0)
        tower_button(event, vector);
}