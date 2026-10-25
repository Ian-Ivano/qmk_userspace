//Function for triggernig custom behaviors through super leander key
#include "xcase.h"

static void custom_behaviors(void* ){
   enable_xcase_with(KC_UNDS); 
}

//Implementation of per-key tapping term for shift home row mods to reduce the tapping term to 195
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case HOME_H:
    case HOME_S:
      return TAPPING_TERM - 55;
    default:
      return TAPPING_TERM;
  }  
}