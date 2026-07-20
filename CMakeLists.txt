# consumes repo as a ZMK/Zephyr module to compile a shim that decouples BLE from nice_view
if(CONFIG_ZMK_SPLIT_ESB)
	zephyr_library()
	zephyr_library_sources(src/nice_view_esb_shim.c)
endif()
