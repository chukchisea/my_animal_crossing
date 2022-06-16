/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** my_animal_crossing
*/

#ifndef MY_ANIMAL_CROSSING_H_
    #define MY_ANIMAL_CROSSING_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    typedef struct animal_crossing_s {
        sfRenderWindow *window;
        sfEvent event;
    } animal_crossing_t;

    typedef struct game_objet_s {
        sfTexture *texture;
        sfSprite *sprite;
        sfVector2f position;
        sfIntRect rect;
        sfVector2f scale;
        sfVector2f size;
        bool hide;
        int clic;
    } game_objet_t;

    enum scene {
        MENU,
        GAME,
        PAUSE,
        MAGASIN,
        SIZE
    };

    enum GAME_OBJ {
        DECORS,
        BUTTONS,
        HP,
        ENEMIES,
        PICTURES,
        SIZE_GAME_OBJ
    };

    typedef struct init_a {
        int *texture;
        int *position;
        float *rect;
        float *scale;
        float *size;
        char *File;
        bool hide;
    } init_t;

    typedef struct clocks_s {
        sfClock *clock;
        sfTime time;
        float seconds;
    } clocks_t;

    typedef struct texte_t {
        sfText *text;
        sfVector2f size;
        bool hide;
        sfColor color;
        sfFont *font;
        int charater_size;
        sfVector2f position;
        char *char_text;
    } texte_t;

    typedef struct sounds_s {
        int num_music;
        sfMusic *sound;
        int music_play;
    } sounds_t;

    typedef struct scene_s {
        game_objet_t **decors;
        game_objet_t **buttons;
        game_objet_t **hp;
        game_objet_t **enemies;
        game_objet_t **pictures;
        clocks_t **clocks;
        clocks_t **mob_clocks;
        texte_t **textes;
        sounds_t **sound;
        int nb_hp;
        int nb_clocks;
        int nb_mob_clocks;
        int nb_enemies;
        int nb_buttons;
        int nb_pictures;
        int nb_decors;
        int nb_textes;
        int nb_sound;
    } scene_t;

    typedef struct game_s {
        scene_t **scenes;
        init_t **init;
        int nb_scenes;
        int nb_volume;
        bool *music;
        bool sounds_on;
    } game_t;

    /*=======INIT_MALLOC=======*/
    game_t *malloc_game(void);
    void init_all(game_t *game);

    /*=======SET_SCENE========*/
    void set_scene(scene_t *scene, animal_crossing_t *animal_crossing);
    scene_t *malloc_scene(scene_t *scene);

    /*=======SET-EVENT========*/
    void analyze_events(game_t *game, animal_crossing_t *animal_crossing);

    /*=====SET_ANNIMATION=====*/
    void animation(game_t *game, animal_crossing_t *animal_crossing);

    /*=======SET_CLOCK=======*/
    void mouve_all_clock(game_t *game);
    void mouve_clocks(scene_t *scene);
    void init_clocks(scene_t *scene);

    /*=========MUSIC=========*/
    void destroy_music(game_t *game);
    void set_music(game_t *game, sounds_t *sound);

    /*------------------------GAME-------------------------------*/

    /*=======init_scene_game=======*/
    void init_game(game_t *game);

    /*=========game_event=========*/
    void event_game(scene_t *scn_game, animal_crossing_t *animal_crossing, game_t *game);
    void key_pressed_game(scene_t *scn_game, animal_crossing_t *animal_crossing, game_t *game);
    void click_game(scene_t *scn_game, animal_crossing_t *animal_crossing, game_t *game);

    /*------------------------MAGASIN-------------------------------*/

    /*=====init_scene_magasin=====*/
    void init_magasin(game_t *game);

    /*=====event_magasin=========*/
    void event_magasin(scene_t *magasin, animal_crossing_t *animal_crossing, game_t *game);
    void click_magasin(scene_t *magasin, animal_crossing_t *animal_crossing, game_t *game);

    /*------------------------MENU-------------------------------*/

    /*=====init_scene_menu=====*/
    void init_menu(game_t *game);

    /*=====event_menu=======*/
    void event_menu(scene_t *menu, animal_crossing_t *animal_crossing, game_t *game);
    void click_menu(scene_t *menu, animal_crossing_t *animal_crossing, game_t *game);

    /*------------------------PAUSE-------------------------------*/

    /*========init_scene_pause=====*/
    void init_pause(game_t *game);

    /*=======event_pause==========*/
    void event_pause(scene_t *pause, animal_crossing_t *animal_crossing, game_t *game);
    void key_pressed_pause(scene_t *pause, animal_crossing_t *animal_crossing, game_t *game);
    void click_pause(scene_t *pause, animal_crossing_t *animal_crossing, game_t *game);
#endif
