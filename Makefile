BINARY = testcode
OPENCM3_DIR = libopencm3
LDSCRIPT = stm32f4-nucleo.ld
include libopencm3.stm32f4.mk

flash: $(BINARY).bin
	st-flash write $(BINARY).bin 0x8000000
