#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module()
{
    printk(KERN_INFO "Kernel Module life is short\n");
}