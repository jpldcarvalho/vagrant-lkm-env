obj-m += dummy_lkm.o
uname := $(shell uname -r)
pwd := $(shell pwd)

all:
	sudo make -C /lib/modules/$(uname)/build M=$(pwd) modules
clean:
	sudo make -C /lib/modules/$(uname)/build M=$(pwd) clean
automate:
	modinfo dummy_lkm.ko
	sudo dmesg -C
	sudo insmod dummy_lkm.ko
	sudo rmmod dummy_lkm.ko
	dmesg
