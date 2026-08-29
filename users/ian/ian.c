#include "ian.h"
#include "quantum.h"

const uint16_t PROGMEM underscore_combo[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM capsword_combo[] = {KC_U, KC_R, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(underscore_combo, KC_UNDS),
    COMBO(capsword_combo, CW_TOGG),
};
