LTO_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no
EXTRAFLAGS += -flto
KEY_OVERRIDE_ENABLE = yes
COMBO_ENABLE = no
TAP_DANCE_ENABLE = yes

CAPS_WORD_ENABLE = yes

SRC += features/achordion.c
