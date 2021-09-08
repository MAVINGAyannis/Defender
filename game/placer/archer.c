/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** archer.c
*/
#include "../../my_defender.h"

void archer_button(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 70 &&
            event.mouseButton.x <= 70 + 110 &&
            event.mouseButton.y >= 930 &&
            event.mouseButton.y <= 930 + 110) {
            vector->placer_archer = 1;
        }
    }
}

void end_placer_archer(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.y - 130 > 400)
            return;
        if (event.mouseButton.x - 130 > 700 && event.mouseButton.x - 130 < 1000)
            return;
        vector->archer.y = event.mouseButton.y - 130;
        vector->archer.x = event.mouseButton.x - 130;
        vector->placer_archer = 0;
    }
}

void archer_placer(sfEvent event, v_v *vector)
{
    if (vector->placer_tower == 1 || vector->placer_post == 1)
        return;
    if (vector->placer_archer == 1) {
        vector->archer.y = event.mouseMove.y - 130;
        vector->archer.x = event.mouseMove.x - 130;
        end_placer_archer(event, vector);
    }
    if (vector->placer_archer == 0)
        archer_button(event, vector);
}