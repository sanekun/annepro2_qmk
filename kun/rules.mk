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