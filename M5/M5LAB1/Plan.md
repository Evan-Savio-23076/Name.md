# Plan: The Spooky House

## Story
You stand in front of an old house at night.
You can get inside, find the cellar, and escape -- or not.

I didnt write everything in here but here is a relatively good idea of what just the outside looks like in, code structure? layout? Map I guess?

## Story map
main_menu
  1 -> choice_front_door
     1 -> open_front_door
         output door locked
             1 -> return to choice_front_door
             2 -> choice_attack_door
                 output hands_hurt, continue?
                     1 -> choice_attack_door2
                         output hands_hurt, continue?
                             1 -> choice_attack_door3
                                 output front_door_unlocked & hands_hurt
                                     1 -> enter_front_door
                                     2 -> return to choice_front_door with front_door_unlocked
                             2 -> return to choice_front_door
                     2 -> return to choice_front_door
         2 -> inspect_front_area
             output "found something of note"
             1 -> get key?
                 1 -> yes
                     output trap1, obtained_Frontkey, hands_hurt, return to choice_front_door
                 2 -> no 
                     return to choice_front_door
             2 -> inspect more carefully
                 output "spotted trap"
                     1 -> get key anyways
                         output trap1, obtained_Frontkey, hands_hurt, return to choice_front_door
                     2 -> disarm trap and get key
                         output obtained_Frontkey, return to choice_front_door
             3 -> return to choice_front_door
         3 -> go to main_menu
  2 -> choice_back_door
         1 -> open_the_cellar
             output door locked
                 1 -> return to choice_back_door
         2 -> search the backyard
             output found brick
                 1 -> continue search?
                     1 -> yes
                         output nothing of note, return to choice_back_door
                     2 -> no
                          return to choice_back_door
         3 -> go to main_menu
  3 -> choice_go_home
         output gameover
  4 -> quit

## Functions
- choice_back_door   (starter, I fill it in)
- choice_go_home     (starter, ending)
- open_the_cellar    (new)
- cellar_escape      (new, ending)

- open_front_door
- inspect_front_area
- choice_front_door
- choice_attack_door
- choice_attack_door2
- choice_attack_door3
- hands_hurt
- enter_front_door
- front_door_unlocked
- trap1
- obtained_Frontkey
- brick