


#include QMK_KEYBOARD_H

void matrix_init_kb(void){
    setPinOutput(CAPS_BACKLIGHT_PIN);
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(CAPS_BACKLIGHT_PIN, !led_state.caps_lock);
    }
    return res;
}
