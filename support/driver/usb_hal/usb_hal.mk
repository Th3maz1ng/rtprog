ifndef USBHAL_DRIVER
USBHAL_DRIVER=

vpath %.c $(DRIVERPATH)
vpath %.h $(DRIVERPATH)

INCLUDEPATH:= $(INCLUDEPATH) -I$(DRIVERPATH)

# 16bits and 32MM proc
ifeq ($(ARCHI), $(filter $(ARCHI),pic24ep pic24fj dspic33ep pic32mm))
 vpath %.c $(RTPROG)/contrib/microchip/mla_usb/src
 vpath %.h $(RTPROG)/contrib/microchip/mla_usb/inc
 INCLUDEPATH:= $(INCLUDEPATH) -I$(RTPROG)/contrib/microchip/mla_usb/inc
 ARCHI_SRC += usb_device.c usb_device_generic.c system.c
endif

ifeq ($(ARCHI), pic24ep)
 ARCHI_SRC += usb_hal_pic24e.c
endif
ifeq ($(ARCHI), pic24fj)
 ARCHI_SRC += usb_hal_pic24f.c
endif
ifeq ($(ARCHI), dspic33ep)
 ARCHI_SRC += usb_hal_dspic33e.c
endif
ifeq ($(ARCHI), pic32mm)
 ARCHI_SRC += usb_hal_32bit.c
endif

# 32bits proc
ifeq ($(ARCHI), $(filter $(ARCHI),pic32mzef pic32mzec))
 vpath %.c $(RTPROG)/contrib/microchip/harmony_usb/src
 vpath %.h $(RTPROG)/contrib/microchip/harmony_usb/include
 INCLUDEPATH:= $(INCLUDEPATH) -I$(RTPROG)/contrib/microchip/harmony_usb/include -I$(RTPROG)/contrib/microchip/harmony_usb/
 ARCHI_SRC += usb_device.c
endif

endif
