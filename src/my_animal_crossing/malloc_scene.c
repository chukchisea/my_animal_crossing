/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** malloc_scene
*/

#include "my_animal_crossing.h"

static scene_t *malloc_scene_next_2(scene_t *scene)
{
    for (int i = 0; i != scene->nb_textes; i++) {
        scene->textes[i] = malloc(sizeof(texte_t));
        scene->textes[i]->hide = true;
    }
    return scene;
}

static scene_t *malloc_scene_next(scene_t *scene)
{
    for (int i = 0; i != scene->nb_hp; i++) {
        scene->hp[i] = malloc(sizeof(game_objet_t));
        scene->hp[i]->hide = true;
    } for (int i = 0; i != scene->nb_enemies; i++) {
        scene->enemies[i] = malloc(sizeof(game_objet_t));
        scene->enemies[i]->hide = true;
    } for (int i = 0; i != scene->nb_pictures; i++) {
        scene->pictures[i] = malloc(sizeof(game_objet_t));
        scene->pictures[i]->hide = true;
    } for (int i = 0; i != scene->nb_sound; i++) {
        scene->sound[i] = malloc(sizeof(sounds_t));
    }
    return malloc_scene_next_2(scene);
}

scene_t *malloc_scene(scene_t *scene)
{
    scene->decors = malloc(sizeof(game_objet_t*) *scene->nb_decors);
    scene->buttons = malloc(sizeof(game_objet_t*) *scene->nb_buttons);
    scene->hp = malloc(sizeof(game_objet_t*) *scene->nb_hp);
    scene->enemies = malloc(sizeof(game_objet_t*) *scene->nb_enemies);
    scene->pictures = malloc(sizeof(game_objet_t*) *scene->nb_pictures);
    scene->clocks = malloc(sizeof(clocks_t*) *scene->nb_clocks);
    scene->mob_clocks = malloc(sizeof(clocks_t*) *scene->nb_clocks);
    scene->textes = malloc(sizeof(texte_t*) *scene->nb_textes);
    scene->sound = malloc(sizeof(sounds_t*) *scene->nb_sound);
    for (int i = 0; i != scene->nb_buttons; i++) {
        scene->buttons[i] = malloc(sizeof(game_objet_t));
        scene->buttons[i]->hide = true;
    } for (int i = 0; i != scene->nb_decors; i++) {
        scene->decors[i] = malloc(sizeof(game_objet_t));
        scene->decors[i]->hide = true;
    }
    return (malloc_scene_next(scene));
}