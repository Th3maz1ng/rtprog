RTPROG = ../..

PROJECT = deltaApp
ROBOT = deltatips
OUT_PWD = build

# CCFLAGS += -pedantic

DRIVERS += sysclock uart ax12 adc i2c usb_serial spi oc gpio
MODULES += cmdline # fs

MODULES += network
NETWORK_DRIVERS = esp8266 a6

MODULES += sensor
SENSOR_DRIVERS = sharp

SRC += main.c html_fs_data.c restApi.c

all : hex

include $(RTPROG)/rtprog.mk

html_fs_data.c: $(HTMLGEN_EXE) $(call rwildcard, html_fs/, *)
	$(HTMLGEN_EXE) -i html_fs/ -o html_fs_data.c
