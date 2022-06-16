/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** main
*/

#include "my_animal_crossing.h"

void destroy_music(game_t *game)
{
    for(int i = 0; i < SIZE; i++)
        if (game->scenes[i]->nb_sound >= 1)
            sfMusic_destroy(game->scenes[i]->sound[i]->sound);
}

static sfRenderWindow * create_renderwindow(unsigned int x, unsigned int y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};

    return (sfRenderWindow_create(video_mode, title, sfClose | sfResize
    , NULL));
}

static void lauch_game(animal_crossing_t *animal_crossing, game_t *game, sounds_t *sound)
{
    sound->num_music = 0;
    game->nb_volume = 100;
    while (sfRenderWindow_isOpen(animal_crossing->window)) {
        if (game->nb_scenes != MAGASIN && game->nb_scenes != PAUSE)
            sfRenderWindow_clear(animal_crossing->window, sfBlack);
        set_scene(game->scenes[game->nb_scenes], animal_crossing);
        analyze_events(game, animal_crossing);
        animation(game, animal_crossing);
        mouve_all_clock(game);
        set_music(game, sound);
        sfRenderWindow_display(animal_crossing->window);
    }
}

int main(void)
{
    animal_crossing_t *animal_crossing = malloc(sizeof(animal_crossing_t));
    animal_crossing->window = create_renderwindow(1920, 1080, 32, "my_animal_crossing: test");
    game_t *game = malloc_game();
    game->nb_scenes = 0;
    game->sounds_on = true;
    sounds_t *sound = malloc(sizeof(sounds_t));

    init_all(game);
    lauch_game(animal_crossing, game, sound);
    destroy_music(game);
    sfRenderWindow_destroy(animal_crossing->window);
    free(animal_crossing);
    free(game);
    return 0;
}