/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** set_scene
*/

#include "my_animal_crossing.h"

static void apply_change(game_objet_t *obj, animal_crossing_t *animal_crossing)
{
    if (obj != NULL) {
        sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
        sfSprite_setScale(obj->sprite, obj->scale);
        sfSprite_setTextureRect(obj->sprite, obj->rect);
        sfSprite_setPosition(obj->sprite, obj->position);
        sfRenderWindow_drawSprite(animal_crossing->window, obj->sprite, NULL);
    }
}

static void apply_change_texte(texte_t *texte)
{
    texte->text = sfText_create();
    sfText_getScale(texte->text);
    sfText_setString(texte->text, texte->char_text);
    sfText_setColor(texte->text, texte->color);
    sfText_setFont(texte->text, texte->font);
    sfText_setCharacterSize(texte->text, texte->charater_size);
    sfText_setPosition(texte->text, texte->position);
}

static void set_scene_2(scene_t *scene, animal_crossing_t *animal_crossing)
{
    for (int i = 0; i < scene->nb_enemies; i++)
        if (scene->enemies[i]->hide == false)
        apply_change(scene->enemies[i], animal_crossing);
    for (int i = 0; i < scene->nb_hp; i++)
        if (scene->hp[i]->hide == false)
        apply_change(scene->hp[i], animal_crossing);
    for (int i = 0; i < scene->nb_textes; i++)
        if (scene->textes[i]->hide == false)
        apply_change_texte(scene->textes[i]);
}

void set_scene(scene_t *scene, animal_crossing_t *animal_crossing)
{
    for (int i = 0; i < scene->nb_pictures; i++)
        if (scene->pictures[i]->hide == false)
            apply_change(scene->pictures[i], animal_crossing);
    for (int i = 0; i < scene->nb_buttons; i++)
        if (scene->buttons[i]->hide == false)
        apply_change(scene->buttons[i], animal_crossing);
    for (int i = 0; i < scene->nb_decors; i++)
        if (scene->decors[i]->hide == false)
            apply_change(scene->decors[i], animal_crossing);
    set_scene_2(scene, animal_crossing);
}
