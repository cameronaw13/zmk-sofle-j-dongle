#include <zephyr/kernel.h>

#if !IS_ENABLED(CONFIG_ZMK_SPLIT_BLE)

#include <zmk/split/bluetooth/peripheral.h>

bool zmk_split_bt_peripheral_is_connected(void) {
	/* Report always connected to render BLE-dependent widget */
	return true;
}

#endif /* !CONFIG_ZMK_SPLIT_BLE */
