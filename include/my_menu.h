/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myanimal_crossing-marin.maurer
** File description:
** my_menu
*/

#ifndef MY_MENU_H_
#define MY_MENU_H_

    #include "my_animal_crossing.h"

    /*=========set_button_menu=======*/
    void button_new_game_set(init_t *game_obj);
    void button_load_save_set(init_t *game_obj);
    void button_quit_set(init_t *game_obj);
    void button_setting_set(init_t *game_obj);
    void set_button_menu(game_objet_t **buttons, init_t *init_button_menu, int i);

    /*=====set_decors_menu=====*/
    void decors_setting_set(init_t *game_obj);

#endif /* !MY_MENU_H_ */
