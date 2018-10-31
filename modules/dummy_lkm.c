#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Joao Carvalho");
MODULE_DESCRIPTION("Linux kernel module.");

int init_module(void) {
 printk(KERN_INFO "Init dummy lkm!\n");
 return 0;
}

void cleanup_module(void) {
 printk(KERN_INFO "Exit dummy lkm!\n");
}
