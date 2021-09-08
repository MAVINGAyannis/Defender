/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** post.c
*/
#include "../../my_defender.h"

void post_button(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 370 &&
            event.mouseButton.x <= 370 + 110 &&
            event.mouseButton.y >= 930 &&
            event.mouseButton.y <= 930 + 110) {
            vector->placer_post = 1;
        }
    }
}

void end_placer_post(sfEvent event, v_v *vector)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.y - 130 > 400)
            return;
        if (event.mouseButton.x - 130 > 700 && event.mouseButton.x - 130 < 1000)
            return;
        vector->post.y = event.mouseButton.y - 130;
        vector->post.x = event.mouseButton.x - 130;
        vector->placer_post = 0;
    }
}

void post_placer(sfEvent event, v_v *vector)
{
    if (vector->placer_tower == 1 || vector->placer_archer == 1)
        return;
    if (vector->placer_post == 1) {
        vector->post.y = event.mouseMove.y - 130;
        vector->post.x = event.mouseMove.x - 130;
        end_placer_post(event, vector);
    }
    if (vector->placer_post == 0)
        post_button(event, vector);
}