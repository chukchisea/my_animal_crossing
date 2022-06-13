/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** event
*/

#include "my_animal_crossing.h"

static void key_pressed(game_t *game, animal_crossing_t *animal_crossing)
{
    if (game->nb_scenes == PAUSE)
        key_pressed_pause(game->scenes[PAUSE], animal_crossing, game);
    if (game->nb_scenes == GAME)
        key_pressed_game(game->scenes[GAME], animal_crossing, game);
}

static void butt_is_clicked(game_t *game, animal_crossing_t *animal_crossing)
{
    if (game->nb_scenes == MENU)
        click_menu(game->scenes[MENU], animal_crossing, game);
    if (game->nb_scenes == MAGASIN)
        click_magasin(game->scenes[MAGASIN], animal_crossing, game);
    if (game->nb_scenes == PAUSE)
        click_pause(game->scenes[PAUSE], animal_crossing, game);
    if (game->nb_scenes == GAME)
        click_game(game->scenes[GAME], animal_crossing, game);

}

static void close_window(animal_crossing_t *animal_crossing)
{
    if (animal_crossing->event.type == sfEvtClosed)
        sfRenderWindow_close(animal_crossing->window);
}


void analyze_events(game_t *game, animal_crossing_t *animal_crossing)
{
    while (sfRenderWindow_pollEvent(animal_crossing->window, &animal_crossing->event)) {
        close_window(animal_crossing);
        if (animal_crossing->event.type == sfEvtMouseButtonPressed)
            butt_is_clicked(game, animal_crossing);
        if (animal_crossing->event.type == sfEvtKeyPressed)
            key_pressed(game, animal_crossing);
     }
}
