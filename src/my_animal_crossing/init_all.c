/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** init_all
*/

#include "my_animal_crossing.h"

void init_all(game_t *game)
{
    init_menu(game);
    init_game(game);
    init_magasin(game);
    init_pause(game);
    for (int i = 0; i < SIZE; i++)
        game->music[i] = false;
}