/* Copyright 2021 Jay Greco
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Macro layers 
enum layers {
    BASE = 0,
    TERM = 1,
    FEDL = 2,
    _RGB = 3 
    
};
// Cutom macro keycode names
enum custom_keycodes {
    TERMINIX = SAFE_RANGE,
    LEIDOS = SAFE_RANGE+1,
};

    
// auto filling form for TERMINIX shipping
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case TERMINIX:
      if (record->event.pressed) {
        // Simulate keystrokes to fill out the form
        SEND_STRING("TERMINIX CLASS OF 5/31");  // Type the Project Name
        SEND_STRING(SS_TAP(X_TAB));  // Move to the next field 
        SEND_STRING("FDEG");  // Type the shipping code
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); // Move to the next field
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING("5/25/2023");  // Type the Shipping date
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING("GROUND WITH RETURN LBL"); //Type the shipping service
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING("AB286744"); // inventory
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING("HEADSET"); // inventory
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING("NETWORKCBL"); // inventory
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING("REFURBDESKTOP"); // inventory
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING("210-BBCC"); // inventory
        SEND_STRING(SS_TAP(X_DOWN));
        SEND_STRING("OVRPKBOX"); // inventory
        SEND_STRING(SS_TAP(X_RGHT));
        SEND_STRING(SS_TAP(X_RGHT));
        SEND_STRING(SS_TAP(X_RGHT));
        SEND_STRING(SS_TAP(X_RGHT));
        SEND_STRING("1"); // quantity 
        SEND_STRING(SS_TAP(X_UP));
        SEND_STRING("1"); // quantity 
        SEND_STRING(SS_TAP(X_UP));
        SEND_STRING("1"); // quantity 
        SEND_STRING(SS_TAP(X_UP));
        SEND_STRING("1"); // quantity 
        SEND_STRING(SS_TAP(X_UP));
        SEND_STRING("1"); // quantity 
        SEND_STRING(SS_TAP(X_UP));
        SEND_STRING("1"); // quantity 
        


      }
      break;
// auto filling form for LEIDOS shipping
    case LEIDOS:
      if (record->event.pressed) {
        // Simulate keystrokes to fill out the form
        SEND_STRING("(Insert_header/comment)");  // Type the Project Name
        SEND_STRING(SS_TAP(X_TAB));  // Move to the next field 
        SEND_STRING("FDEG"); // Type shipping code
        SEND_STRING(SS_TAP(X_TAB)); 
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("LEIDOS SENS3 (Insert_header/comment)");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("James Thayer 571.351.6702");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("8510 Cinder Bed Road");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("(Insert_PRR");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("Lorton");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("VA");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("22079");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("(Insert_PO)");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("Ground");
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING(SS_TAP(X_TAB));
        SEND_STRING("613126128976");
        


      }
      break;
  }
  return true;
}




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
                            KC_MPLY, KC_PSLS, KC_PAST, 
    KC_VOLD, KC_VOLU, KC_P7, KC_P8,   KC_P9,   KC_PMNS, 
    KC_MPRV, KC_MNXT, KC_P4, KC_P5,   KC_P6,   KC_PPLS, 
    KC_LEFT, KC_RGHT, KC_P1, KC_P2,   KC_P3,   KC_PENT, 
    KC_TRNS, KC_TRNS, KC_P0, TO(1),   KC_PDOT, KC_PENT  
    ),

    [TERM] = LAYOUT(
                            KC_MPLY, TERMINIX, KC_PAST, 
    KC_VOLD, KC_VOLU, KC_P7, KC_P8,   KC_P9,   KC_PMNS, 
    KC_MPRV, KC_MNXT, KC_P4, KC_P5,   KC_P6,   KC_PPLS, 
    KC_LEFT, KC_RGHT, KC_P1, KC_P2,   KC_P3,   KC_PENT, 
    KC_TRNS, KC_TRNS, KC_P0, TO(2),   KC_PDOT, KC_PENT  
    ),

    [FEDL] = LAYOUT(
                            KC_MPLY, LEIDOS, KC_PAST, 
    KC_VOLD, KC_VOLU, KC_P7, KC_P8,   KC_P9,   KC_PMNS, 
    KC_MPRV, KC_MNXT, KC_P4, KC_P5,   KC_P6,   KC_PPLS, 
    KC_LEFT, KC_RGHT, KC_P1, KC_P2,   KC_P3,   KC_PENT, 
    KC_TRNS, KC_TRNS, KC_P0, TO(3),   KC_PDOT, KC_PENT  
    ),

    [_RGB] = LAYOUT(
                            RGB_TOG, RGB_RMOD, RGB_MOD, 
    RGB_VAI, RGB_VAD, KC_P7, KC_P8,   RGB_HUD,   RGB_HUI, 
    KC_MPRV, KC_MNXT, KC_P4, KC_P5,   RGB_SAD,   RGB_SAI, 
    KC_LEFT, KC_RGHT, KC_P1, KC_P2,   RGB_SPI,   RGB_SPD, 
    KC_TRNS, KC_TRNS, KC_P0, TO(0),   KC_PDOT, RGB_SPD  
    ),

    




};
