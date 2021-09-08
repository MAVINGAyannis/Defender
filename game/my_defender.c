/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** my_runner
*/
#include "../my_defender.h"

sfMusic *initialise_variable(s_s *sprite, v_v *vector, sfMusic *sound)
{
    sound = sfMusic_createFromFile("music/music_digimon.wav");
    sound = create_music(sound);
    sprite->cissor_hero = 0;
    sprite->cissor_obstacle = 0;
    vector->rest = 12;
    sprite->what_sprite = 0;
    vector->double_click = 0;
    vector->placer_tower = 0;
    vector->placer_archer = 0;
    vector->placer_post = 0;
    vector->placer_mode = 0;
    vector->fight_mode = 0;
    vector->pause_mode = 0;
    vector->lizard_damaged = 0;
    return (sound);
}

void my_defender(void)
{
    sfRenderWindow *window;
    sfEvent event;
    t_t *texture = malloc(sizeof(t_t));
    s_s *sprite = malloc(sizeof(s_s));
    v_v *vector = malloc(sizeof(v_v));
    sfVideoMode mode = {1920, 1080, 32};

    sound = initialise_variable(sprite, vector, sound);
    window = sfRenderWindow_create(mode, "Defender", sfDefaultStyle, NULL);
    initialise_texture(texture, sprite, vector);
    sfSprite_setTexture(sprite->spriteskin1, texture->textureskin1, sfTrue);
    while (sfRenderWindow_isOpen(window)) {
        set_and_print(window, sprite, vector, texture);
        menu_mode(event, vector, sprite, window);
        placer_mode(event, vector, sprite, window);
        fight_mode(event, vector, sprite, window);
    }
}

int main(void)
{
    my_defender();
}
