/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_2.c
*/
#include "../my_defender.h"

void init_texture_2(t_t *texture)
{
    texture->texturetower =
        sfTexture_createFromFile("initial/source/sprites/Tower.png", NULL);
    texture->texturearcher =
        sfTexture_createFromFile("initial/source/sprites/Archer.png", NULL);
    texture->texturepost =
        sfTexture_createFromFile("initial/source/sprites/Post.png", NULL);
    texture->textureskin1 =
        sfTexture_createFromFile("initial/source/characters/lizard.png", NULL);
    texture->texturelizard_2 =
        sfTexture_createFromFile("initial/source/characters/lizard_2.png",
    NULL);
    texture->texturereceipt =
        sfTexture_createFromFile("initial/source/characters/lizard.png", NULL);
}

void init_texture(t_t *texture)
{
    texture->texturemap =
        sfTexture_createFromFile("initial/source/sprites/map/pre_map.png",
        NULL);
    texture->texturemap_2 =
        sfTexture_createFromFile("initial/source/sprites/map/game_map.png",
        NULL);
    texture->texturepause =
        sfTexture_createFromFile("initial/source/sprites/map/pause.png",
        NULL);
    texture->texturemenu =
        sfTexture_createFromFile("initial/source/sprites/map/menu.png",
    NULL);
}

void init_sprite(s_s *sprite)
{
    sprite->spritemap = sfSprite_create();
    sprite->spritemap_2 = sfSprite_create();
    sprite->spritepause = sfSprite_create();
    sprite->spritemenu = sfSprite_create();
    sprite->spritetower = sfSprite_create();
    sprite->spritearcher = sfSprite_create();
    sprite->spritepost = sfSprite_create();
    sprite->spriteskin1 = sfSprite_create();
    sprite->spritelizard_2 = sfSprite_create();
    sprite->spritereceipt = sfSprite_create();
}

void init_vector(v_v *vector)
{
    vector->map.x = 0;
    vector->map.y = 0;
    vector->map_2.x = 1920;
    vector->map_2.y = 1920;
    vector->pause.x = 1920;
    vector->pause.y = 1920;
    vector->menu.x = 1920;
    vector->menu.y = 1920;
    vector->tower.x = 1920;
    vector->tower.y = 0;
    vector->archer.x = 1920;
    vector->archer.y = 0;
    vector->post.x = 1920;
    vector->post.y = 0;
    vector->skin1.x = 1;
    vector->skin1.y = 575;
    vector->lizard_2.x = 1;
    vector->lizard_2.y = 575;
    vector->receipt.x = 200;
    vector->receipt.y = 600;
}