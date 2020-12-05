#include <linux/init.h>
#include <linux/module.h>
#include <linux/printk.h>
#include "hello1.h"
MODULE_AUTHOR("Original code: Serhii Popovych <serhii.popovych@globallogic.com>\nHomework (modifications): Natalia Duplii (IV-82)");
MODULE_DESCRIPTION("Hello, world in Linux Kernel Training\nThis module is used in hello2");
MODULE_LICENSE("Dual BSD/GPL");
static print_hello(void){
    pr_info(KERN_EMERG "Hello, world!\n");
    return 0;
}
EXPORT_SYMBOL(print_hello);
