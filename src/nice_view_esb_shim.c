#include <zephyr/kernel.h>
#include <stdbool.h>

#if !IS_ENABLED(CONFIG_ZMK_SPLIT_BLE)

bool zmk_split_bt_peripheral_is_connected(void) {
	return true;
}

#endif /* !CONFIG_ZMK_SPLIT_BLE */
