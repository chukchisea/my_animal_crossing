/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-marin.maurer
** File description:
** init_magasin
*/

#include "my_magasin.h"

void init_magasin(game_t *game)
{
    game->scenes[MAGASIN]->nb_decors = 0;
    game->scenes[MAGASIN]->nb_hp = 0;
    game->scenes[MAGASIN]->nb_clocks = 0;
    game->scenes[MAGASIN]->nb_mob_clocks = 0;
    game->scenes[MAGASIN]->nb_enemies = 0;
    game->scenes[MAGASIN]->nb_buttons = 0;
    game->scenes[MAGASIN]->nb_pictures = 0;
    game->scenes[MAGASIN]->nb_textes = 0;
    game->scenes[MAGASIN]->nb_sound = 0;
    game->scenes[MAGASIN] = malloc_scene(game->scenes[MAGASIN]);
}
