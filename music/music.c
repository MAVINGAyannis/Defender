/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** music.c
*/
#include "../my_defender.h"

sfMusic *create_music(sfMusic *sound)
{
    sfMusic_play(sound);
    sfMusic_setLoop(sound, sfTrue);
    return (sound);
}

void destroy_sound(sfMusic *sound)
{
    sfMusic_stop(sound);
    sfMusic_destroy(sound);
}