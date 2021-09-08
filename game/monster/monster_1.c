/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** monster_1.c
*/
#include "../../my_defender.h"

void rechero_1(s_s *sprite)
{
    sprite->cissor_hero++;
    if (sprite->cissor_hero == 3) {
        sprite->cissor_hero = 0;
    }
}

int display_monster_1(sfRenderWindow *window, s_s *sprite, v_v *vector)
{
    sfIntRect rect1 = {93 * sprite->cissor_hero, 0, 93, 62};
    rechero_1(sprite);
    sfSprite_setTextureRect(sprite->spriteskin1, rect1);
    vector->skin1.x++;
    vector->lizard_2.x++;
    if (vector->lizard_damaged == 0)
        sfRenderWindow_drawSprite(window, sprite->spriteskin1, NULL);
    else if (vector->lizard_damaged == 1)
        sfRenderWindow_drawSprite(window, sprite->spritelizard_2, NULL);
    return (0);
}

int detection_damage_1(v_v *vector)
{
    if (vector->skin1.x == vector->archer.x)
        vector->lizard_damaged = 1;
    if (vector->skin1.x == vector->tower.x)
        vector->lizard_damaged = 1;
    if (vector->skin1.x == vector->post.x)
        vector->lizard_damaged = 1;
    return (0);
}

int monster_1(sfRenderWindow *window, s_s *sprite, v_v *vector)
{
    display_monster_1(window, sprite, vector);
    detection_damage_1(vector);
    return (0);
}