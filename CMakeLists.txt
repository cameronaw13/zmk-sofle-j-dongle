# consumes repo as a ZMK/Zephyr module to compile a shim that decouples BLE from nice_view
if(CONFIG_ZMK_SPLIT_ESB)
	zephyr_library()
	zephyr_library_sources(src/nice_view_esb_shim.c)
endif()

# dongle display widget still uses ble_peripheral_count instead of central_peripheral_count for some reason
if(CONFIG_ZMK_SPLIT_ESB AND CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
	zephyr_compile_definitions(ZMK_SPLIT_BLE_PERIPHERAL_COUNT=CONFIG_ZMK_SPLIT_ESB_PERIPHERAL_COUNT)
endif()
