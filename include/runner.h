/*
** EPITECH PROJECT, 2019
** runner.h
** File description:
** I do program
*/

#ifndef runner_H
#define runner_H

#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdlib.h>

typedef struct sprite_m
{
    sfSprite *spriteback;
    sfSprite *spriteperso;
    sfSprite *spritebackground;
    sfSprite *spriteobstacle1;
    sfSprite *spritenuage;
    sfSprite *spritearbre;
    sfSprite *spritelune;
    sfSprite *spritesaut;
}sprite_t;

typedef struct texture_m
{
    sfTexture *back;
    sfTexture *perso;
    sfTexture *background;
    sfTexture *obstacle1;
    sfTexture *nuage;
    sfTexture *arbre;
    sfTexture *lune;
    sfTexture *saut;
}texture_t;

typedef struct clock_m
{
    sfClock *Clock1;
    sfClock *Clock2;
    sfClock *Clock3;
    sfClock *Clock4;
    sfClock *Clock5;
    sfClock *Clock6;
}clock1_t;

typedef struct time_m
{
    sfTime Time1;
    sfTime Time2;
    sfTime Time3;
    sfTime Time4;
    sfTime Time5;
    sfTime Time6;
}time1_t;

typedef struct score_m
{
    sfText *texte;
    sfText *scor;
}score_t;

typedef struct inrect_m
{
    sfIntRect rectangle1;
    sfIntRect rectangle2;
    sfIntRect rectangle3;
    sfIntRect rectangle4;
    sfIntRect rectangle5;
    sfIntRect rectangle6;
}inrect_t;

typedef struct stra_m
{
    int a;
    int x;
    int y;
}stra_t;

typedef struct music_m
{
    sfSoundBuffer *soundbuffer;
    sfSoundBuffer *soundbuffer2;
    sfSoundBuffer *soundbuffer3;
    sfSound *sound;
    sfSound *sound2;
    sfSound *sound3;
    int music_eteint;
    int music_eteint2;
}music_t;

typedef struct allstruct_m
{
    inrect_t *inrect;
    score_t *score;
    time1_t *time;
    clock1_t *clock;
    texture_t *texture;
    sprite_t *sprite;
    stra_t *stra;
    music_t *mus;
}allstruct_t;

int menu(allstruct_t *stru);
int display(sfEvent event, sfRenderWindow *window);
int restart(sfRenderWindow *window, sfEvent event, allstruct_t *stru);

void music_menu(allstruct_t *stru);
void destroy_music_menu(allstruct_t *stru);
void music_play(allstruct_t *stru);
void destroy_music_play(allstruct_t *stru);
void music_effect(allstruct_t *stru);
void destroy_music_effect(allstruct_t *stru);
void destroy_music_play(allstruct_t *stru);
void gestion_music_play(allstruct_t *stru);
void gestion_effect(allstruct_t *stru);
void set_place_music(sfRenderWindow *window, allstruct_t *stru, int count);

int start_set(sfRenderWindow *window, sfEvent event, allstruct_t *stru);

sfVector2f vecteur(float x, float y);
sfIntRect cube1(void);
sfIntRect movecube(sfIntRect cube1);
sfIntRect arbre1(void);
sfIntRect movearbre(sfIntRect arbre1);
sfIntRect lune1(void);
sfIntRect movelune(sfIntRect lune1);
sfIntRect nuage1(void);
sfIntRect movenuage(sfIntRect nuage1);
sfIntRect obstacle1(void);
sfIntRect ground1(void);
sfIntRect saut1(void);
sfIntRect movesaut(sfIntRect saut1, allstruct_t *stru);
sfIntRect moveobstacle(sfRenderWindow *window, sfEvent event,
    sfSprite *spriteobstacle1, allstruct_t *stru);
sfIntRect moveground(sfIntRect ground1, allstruct_t *stru);

void inclock_one(sfRenderWindow *window, sfEvent event, allstruct_t *stru);
void inclock_two(allstruct_t *stru);
void inclock_three(allstruct_t *stru);
void inclock_four(allstruct_t *stru);

void all_score(allstruct_t *stru);
void all_inrect(allstruct_t *stru);
void all_sprite(allstruct_t *stru);
void all_texture(allstruct_t *stru);
void all_draw(sfRenderWindow *window, allstruct_t *stru);

void set_texture(allstruct_t *stru);
void set_clock(allstruct_t *stru);
void set_all_clock(sfRenderWindow *window, sfEvent event, allstruct_t *stru);
void set_pos(allstruct_t *stru, float x, float y);
void set_all(int x, int y, char *s, allstruct_t *stru);

void draw_saut(sfRenderWindow *window, allstruct_t *stru);
void fnscore(float x, float y, char *s, allstruct_t *stru);

void place_two(sfRenderWindow *window, allstruct_t *stru, int count);
void place_three(sfRenderWindow *window, allstruct_t *stru, int count);

void soluce_first(sfRenderWindow *window, sfEvent event, allstruct_t *stru);
void soluce_first_bis(sfRenderWindow *window, sfEvent event, allstruct_t *stru);
void soluce_second(sfEvent event, allstruct_t *stru);
void all_soluce(sfRenderWindow *window, sfEvent event, allstruct_t *stru);
void set_place_destroy(sfRenderWindow *window, allstruct_t *stru);

void my_putchar (char c);
int my_putstr (char const *str);
char *my_itoa(int number);

#endif