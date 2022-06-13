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
    game->music_game = false;
    game->music_magasin = false;
    game->music_menu = false;
}