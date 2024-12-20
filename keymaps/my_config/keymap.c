/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_AUDIO_VOL_UP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_AUDIO_VOL_DOWN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MEDIA_NEXT_TRACK,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif


// Animation parameters
#define FRAME_DURATION 1000 // How long each frame lasts in milliseconds

// Animation variables
uint32_t timer = 0;
uint8_t current_frame = 0;


static void render_animation(void) {
    // Frame 1
    static const char epd_bitmap_frame_1_delay_0 [] PROGMEM = {
          0x00, 0x00, 0xfe, 0x03, 0x79, 0xf9, 0xf3, 0xf3, 0xe6, 0xcc, 0x98, 0x38, 0x20, 0x20, 0x30, 0x10, 
          0x10, 0x10, 0x10, 0x18, 0x0c, 0x07, 0x01, 0x20, 0x78, 0xf9, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 
          0x00, 0x00, 0x01, 0x1f, 0xf0, 0x83, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf3, 0xf2, 
          0xf2, 0xf6, 0xfc, 0xfc, 0xf8, 0x30, 0x60, 0x60, 0x60, 0xe0, 0xf0, 0xe3, 0xc6, 0x1c, 0xf0, 0x00, 
          0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
          0xff, 0xfe, 0xfe, 0xde, 0xce, 0xce, 0xcf, 0xef, 0xf7, 0xfb, 0x0f, 0xf7, 0x0b, 0x04, 0x07, 0x00, 
          0x00, 0x00, 0xf8, 0xfc, 0x06, 0x53, 0x74, 0x07, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x07, 0x77, 0x57, 
          0x17, 0xff, 0x0f, 0xd7, 0x0f, 0xff, 0xf7, 0x07, 0xf7, 0xff, 0x06, 0x71, 0x06, 0xf8, 0x00, 0x00,
    };

    // Frame 2
    static const char epd_bitmap_frame_0_delay_0 [] PROGMEM = {
        0x00, 0x00, 0xfe, 0x03, 0x79, 0xf9, 0xf3, 0xf3, 0xe6, 0xcc, 0x98, 0xb8, 0xa0, 0xa0, 0xb0, 0x90, 
        0x90, 0x10, 0x10, 0x18, 0x0c, 0x07, 0x01, 0x20, 0x78, 0x79, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x01, 0x1f, 0xf0, 0x83, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0xfc, 0xfc, 
        0x3d, 0x1f, 0x0f, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0c, 0x18, 0x23, 0xc6, 0x1c, 0xf0, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
        0x7c, 0x78, 0x70, 0x60, 0x60, 0x60, 0x60, 0x60, 0xe0, 0xf0, 0x08, 0xf4, 0x0b, 0x04, 0x07, 0x00, 
        0x00, 0x00, 0xf8, 0xfc, 0x06, 0x53, 0x74, 0x07, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0x07, 0x77, 0x57, 
        0x17, 0xff, 0x0e, 0xd6, 0x0e, 0xfe, 0xf7, 0x07, 0xf7, 0xff, 0x06, 0x71, 0x06, 0xf8, 0x00, 0x00
    };

    // Animation frames array
    const char* epd_bitmap_allArray [] = {
        epd_bitmap_frame_0_delay_0,
        epd_bitmap_frame_1_delay_0
    };  

    // Frame sizes array
    uint16_t frame_sizes[2] = {
        sizeof(epd_bitmap_frame_0_delay_0),
        sizeof(epd_bitmap_frame_1_delay_0)
    };

    // Run animation
    if (timer_elapsed(timer) > FRAME_DURATION) {
        // Set timer to updated time
        timer = timer_read();
        
        // Increment frame
        current_frame = (current_frame + 1) % (sizeof(epd_bitmap_allArray) / sizeof(epd_bitmap_allArray[0]));
        oled_set_cursor(0, 1);
        // Draw frame to OLED
        oled_write_raw_P(epd_bitmap_allArray[current_frame], frame_sizes[current_frame]); 
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
     return OLED_ROTATION_270  ;
}


bool oled_task_user(void) {
    
    render_animation(); 
    return false;
}