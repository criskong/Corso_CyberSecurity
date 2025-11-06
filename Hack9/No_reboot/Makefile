# Makefile per compilare un modulo kernel chiamato ehrootkit.c

ifneq ($(KERNELRELEASE),)
obj-m := ehrootkit.o
else
	KDIR := /lib/modules/$(shell uname -r)/build
	PWD  := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
endif
