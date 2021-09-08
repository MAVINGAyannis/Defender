/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical Programming Module
*/
#include "../my_defender.h"

void initialise_texture(t_t *texture, s_s *sprite, v_v *vector)
{
    init_texture(texture);
    init_texture_2(texture);
    init_sprite(sprite);
    init_vector(vector);
}
