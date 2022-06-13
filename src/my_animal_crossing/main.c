/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** main
*/

#include "my_animal_crossing.h"

void destroy_music(game_t *game)
{
    // printf("game->scenes[0]=\t%p\n", game->scenes[0]);
    // printf("game->scenes[0]->sound[0]=\t%p\n", game->scenes[0]->sound[0]);
    // printf("sound first %p\n", game->scenes[0]->sound[0]->sound);
    printf("drestroy_music_magasin %p\n", game->scenes[MAGASIN]);
    printf("drestroy_music_game %p\n", game->scenes[GAME]);
    printf("drestroy_music_pause %p\n", game->scenes[PAUSE]);
    printf("drestroy_music_menu %p\n", game->scenes[MENU]);
    for(int i = 0; i < SIZE; i++) {
    printf("i=%d\n", i);
    printf("print nb_sound %i\n", game->scenes[1]->nb_sound);
        if (game->scenes[i]->nb_sound >= 1) {
            printf("sound test \n");
            printf("sound %p\n", game->scenes[i]->sound[i]->sound);
            sfMusic_destroy(game->scenes[i]->sound[i]->sound);
        }
    }
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
    sound->nb_volume = 100;
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