/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** malloc_game
*/

#include "my_animal_crossing.h"

game_t *malloc_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    game->scenes = malloc(sizeof(scene_t *) * SIZE);
    game->init = malloc(sizeof(init_t *) * SIZE_GAME_OBJ);

    for (int i = 0; i < SIZE; i++) {
        game->scenes[i] = malloc(sizeof(scene_t));
    }
    for (int i = 0; i < SIZE_GAME_OBJ; i++) {
        game->init[i] = malloc(sizeof(init_t));
        game->init[i]->texture = malloc(2 * sizeof(int));
        game->init[i]->position = malloc(2 * sizeof(int));
        game->init[i]->rect = malloc(4 * sizeof(float));
        game->init[i]->scale = malloc(2 * sizeof(float));
        game->init[i]->size = malloc(2 * sizeof(float));
    }
    return game;
}