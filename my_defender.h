/*
** EPITECH PROJECT, 2019
** my_runner.h
** File description:
** my_runner.h
*/
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

struct Texture
{
    sfTexture *texturemap;
    sfTexture *texturemap_2;
    sfTexture *texturepause;
    sfTexture *texturemenu;
    sfTexture *texturetower;
    sfTexture *texturearcher;
    sfTexture *texturepost;
    sfTexture *textureskin1;
    sfTexture *texturelizard_2;
    sfTexture *texturereceipt;
};

typedef struct Texture t_t;

struct Sprite
{
    sfSprite *spritemap;
    sfSprite *spritemap_2;
    sfSprite *spritepause;
    sfSprite *spritemenu;
    sfSprite *spritetower;
    sfSprite *spritearcher;
    sfSprite *spritepost;
    sfSprite *spriteskin1;
    sfSprite *spriteskin2;
    sfSprite *spritelizard_2;
    sfSprite *spritereceipt;
    int cissor_hero;
    int cissor_obstacle;
    int what_sprite;
};

typedef struct Sprite s_s;

struct Vector
{
    sfVector2f map;
    sfVector2f map_2;
    sfVector2f pause;
    sfVector2f menu;
    sfVector2f tower;
    sfVector2f archer;
    sfVector2f post;
    sfVector2f skin1;
    sfVector2f wood1;
    sfVector2f wood2;
    sfVector2f lizard_2;
    sfVector2f receipt;

    int rest;
    int double_click;
    int placer_tower;
    int placer_archer;
    int placer_post;
    int placer_mode;
    int fight_mode;
    int pause_mode;
    int lizard_damaged;
};

typedef struct Vector v_v;

struct Window
{
    sfRenderWindow *window;
};

typedef struct Window w_w;

sfMusic *sound;

void my_defender(void);

void speed_object(v_v *vector);

void repeat_object(v_v *vector);

void repeat_object_2(v_v *vector);

void setPosition(s_s *sprite, v_v *vector);

void setTexture(s_s *sprite, t_t *texture);

void rechero_1(s_s *sprite);

void init_texture(t_t *texture);

void init_texture_2(t_t *texture);

void init_sprite(s_s *sprite);

void init_vector(v_v *vector);

void initialise_texture(t_t *texture, s_s *sprite, v_v *vector);

void setDraw(sfRenderWindow *window, s_s *sprite);

void set_and_print(sfRenderWindow *window,
s_s *sprite, v_v* vector, t_t *texture);

void natural_move(v_v *vector);

int lizard_2ing(s_s *sprite, v_v *vector, sfEvent event);

int lose(v_v *vector);

sfMusic *create_music(sfMusic *sound);

void destroy_sound(sfMusic *sound);

void close_end(sfRenderWindow *window, sfEvent event);

void loose_end(v_v *vector, sfRenderWindow *window);

void movement(s_s *sprite, v_v *vector, sfEvent event);

void tower_button(sfEvent event, v_v *vector);

void placer_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window);
void fight_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window);
int pause_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window);
int pause_mode_2(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window);
void menu_mode(sfEvent event, v_v *vector, s_s *sprite,
sfRenderWindow *window);

void end_placer_tower(sfEvent event, v_v *vector);
void tower_button(sfEvent event, v_v *vector);
void tower_placer(sfEvent event, v_v *vector);

void archer_button(sfEvent event, v_v *vector);
void end_placer_archer(sfEvent event, v_v *vector);
void archer_placer(sfEvent event, v_v *vector);

void post_button(sfEvent event, v_v *vector);
void end_placer_post(sfEvent event, v_v *vector);
void post_placer(sfEvent event, v_v *vector);

int play_pause(sfEvent event, v_v *vector);
int quit_pause(sfEvent event, v_v *vector, sfRenderWindow *window);

void monster(sfRenderWindow *window, s_s *sprite, v_v *vector);
int monster_1(sfRenderWindow *window, s_s *sprite, v_v *vector);
int detection_damage_1(v_v *vector);
int display_monster_1(sfRenderWindow *window, s_s *sprite, v_v *vector);