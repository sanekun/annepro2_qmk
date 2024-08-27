# Anne Pro 2
SRC = \
	matrix.c \
	annepro2_ble.c \
	ap2_led.c \
	protocol.c \
	rgb_driver.c \
	config_led.c


KEY_OVERRIDE_ENABLE = yes
LTO_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
UCIS_ENABLE = no
DEBUG_EEPROM = no
MOUSEKEY_ENABLE = yes

ifeq ($(strip $(BOARD)), ANNEPRO2_C18)
ANNEPRO2_EEPROM = yes
endif

ifeq ($(strip $(ANNEPRO2_EEPROM)), yes)
    OPT_DEFS += -DANNEPRO2_EEPROM
    SRC += spi_master.c eeprom_w25x20cl.c
endif