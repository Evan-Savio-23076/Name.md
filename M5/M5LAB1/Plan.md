# Plan: The Spooky House

## Story
you want to break into a supposedly haunted house and you encounter a ghost!! or so you think

## Story map
## Story map
main_menu
  1 -> choice_front_door
         1 -> inspect_area_front
                1 -> inspect_area_front2
                       1 -> disarm_trap_front
                              1 -> get_key
                                     1 -> choice_front_door
                       2 -> get_key_hurt
                              1 -> choice_front_door
                       3 -> choice_front_door
                2 -> get_key_hurt
                3 -> choice_front_door
         2 -> open_door_front
                1 -> choice_front_door
                2 -> unlock_door_front
                       1 -> enter_house
                              1 -> ending1
                              2 -> ending2
                              3 -> ending3
                              4 -> ending4
                              5 -> ending5
         3 -> choice_attack_door
                1 -> attack_door2
                       1 -> attack_door3
                              1 -> unlock_door_frontalt
                                     1 -> enter_house
                              2 -> main_menu
                       2 -> choice_front_door
                2 -> choice_front_door
                3 -> smash_knob_secret
                       1 -> enter_house
         4 -> main_menu
  2 -> choice_back_door
         1 -> open_door_back
                1 -> choice_back_door
         2 -> inspect_area_back
                1 -> inspect_area_back2
                       1 -> choice_back_door
                2 -> choice_back_door
         3 -> main_menu
  3 -> choice_go_home
  4 -> quit


## Functions

main_menu
choice_front_door
choice_back_door
choice_go_home
inspect_area_front
get_key_hurt
inspect_area_front2
disarm_trap_front
get_key
open_door_front
unlock_door_front
choice_attack_door
attack_door2
attack_door3
unlock_door_frontalt
smash_knob_secret
open_door_back
inspect_area_back
inspect_area_back2
enter_house