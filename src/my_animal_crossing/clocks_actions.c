/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** clocks_actions
*/

#include "my_animal_crossing.h"

void mouve_all_clock(game_t *game)
{
    if (game->nb_scenes == GAME)
        mouve_clocks(game->scenes[GAME]);
    if (game->nb_scenes == MAGASIN)
        mouve_clocks(game->scenes[MAGASIN]);
    if (game->nb_scenes == PAUSE)
        mouve_clocks(game->scenes[PAUSE]);
    if (game->nb_scenes == MENU)
        mouve_clocks(game->scenes[MENU]);
}

void init_clocks_2(scene_t *scene)
{
    if (scene->nb_mob_clocks != 0) {
        scene->mob_clocks = malloc(sizeof(clocks_t*) * scene->nb_mob_clocks);
        for (int i = 0; i < scene->nb_mob_clocks; i++) {
            scene->mob_clocks[i] = malloc(sizeof(clocks_t));
            scene->mob_clocks[i]->clock = sfClock_create();
            scene->mob_clocks[i]->time = sfClock_getElapsedTime
            (scene->mob_clocks[i]->clock);
            scene->mob_clocks[i]->seconds = scene->mob_clocks[i]
            ->time.microseconds / 1000000.0;
        }
    }

}

void init_clocks(scene_t *scene)
{
    if (scene->nb_clocks != 0) {
        scene->clocks = malloc(sizeof(clocks_t*) * scene->nb_clocks);
        for (int i = 0; i < scene->nb_clocks; i++) {
            scene->clocks[i] = malloc(sizeof(clocks_t));
            scene->clocks[i]->clock = sfClock_create();
            scene->clocks[i]->time = sfClock_getElapsedTime
            (scene->clocks[i]->clock);
            scene->clocks[i]->seconds = scene->clocks[i]->time.microseconds
            / 1000000.0;
        }
    }
    init_clocks_2(scene);
}

void mouve_clocks(scene_t *scene)
{
    if (scene->nb_clocks != 0) {
        for (int i = 0; i != scene->nb_clocks; i++) {
            scene->clocks[i]->time = sfClock_getElapsedTime
            (scene->clocks[i]->clock);
            scene->clocks[i]->seconds = scene->clocks[i]->time.microseconds
            / 1000000.0;
        }
    } if (scene->nb_mob_clocks != 0) {
        for (int i = 0; i != scene->nb_mob_clocks; i++) {
            scene->mob_clocks[i]->time = sfClock_getElapsedTime
            (scene->mob_clocks[i]->clock);
            scene->mob_clocks[i]->seconds = scene->mob_clocks[i]->time.microseconds
            / 1000000.0;
        }
    }
}
