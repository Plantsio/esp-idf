set(srcs "rtc_clk_init.c"
         "rtc_clk.c"
         "rtc_init.c"
         "rtc_pm.c"
         "rtc_sleep.c"
         "rtc_time.c"
         "chip_info.c"
         )

if(NOT BOOTLOADER_BUILD)
    list(APPEND srcs "../async_memcpy_impl_gdma.c"
                     "esp_hmac.c"
                     "esp_crypto_lock.c"
                     "esp_ds.c"
                     "esp_memprot.c"
                     "../esp_memprot_conv.c")
endif()

add_prefix(srcs "${CMAKE_CURRENT_LIST_DIR}/" "${srcs}")

target_sources(${COMPONENT_LIB} PRIVATE "${srcs}")
target_include_directories(${COMPONENT_LIB} PUBLIC . private_include)
target_include_directories(${COMPONENT_LIB} PRIVATE ../hal)
