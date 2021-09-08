/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** C Graphical programming module
*/
#include "../my_defender.h"

void setPosition(s_s *sprite, v_v *vector)
{
    sfSprite_setPosition(sprite->spritemap, vector->map);
    sfSprite_setPosition(sprite->spritemap_2, vector->map_2);
    sfSprite_setPosition(sprite->spritepause, vector->pause);
    sfSprite_setPosition(sprite->spritemenu, vector->menu);
    sfSprite_setPosition(sprite->spritetower, vector->tower);
    sfSprite_setPosition(sprite->spritearcher, vector->archer);
    sfSprite_setPosition(sprite->spritepost, vector->post);
    sfSprite_setPosition(sprite->spriteskin1, vector->skin1);
    sfSprite_setPosition(sprite->spritelizard_2, vector->lizard_2);
    sfSprite_setPosition(sprite->spritereceipt, vector->receipt);
}

void setTexture(s_s *sprite, t_t *texture)
{
    sfSprite_setTexture(sprite->spritemap, texture->texturemap, sfTrue);
    sfSprite_setTexture(sprite->spritemap_2, texture->texturemap_2, sfTrue);
    sfSprite_setTexture(sprite->spritepause, texture->texturepause, sfTrue);
    sfSprite_setTexture(sprite->spritemenu, texture->texturemenu, sfTrue);
    sfSprite_setTexture(sprite->spritetower, texture->texturetower, sfTrue);
    sfSprite_setTexture(sprite->spritearcher, texture->texturearcher, sfTrue);
    sfSprite_setTexture(sprite->spritepost, texture->texturepost, sfTrue);
}

void setDraw(sfRenderWindow *window, s_s *sprite)
{
    sfRenderWindow_drawSprite(window, sprite->spritemap, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritemap_2, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritemenu, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritetower, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritearcher, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritepost, NULL);
    sfRenderWindow_drawSprite(window, sprite->spritepause, NULL);
}

void set_and_print(sfRenderWindow *window, s_s *sprite,
v_v* vector, t_t *texture)
{
    setPosition(sprite, vector);
    setTexture(sprite, texture);
    setDraw(window, sprite);
}
