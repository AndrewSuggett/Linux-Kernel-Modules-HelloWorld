#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define DRIVER_AUTHOR "Andrew Suggett"
#define DRIVER_DESC "A sample driver"

static int __init hello4_init(void)
{
	printk(KERN_INFO "Hello world, 4\n");
	return 0;
}

static void __exit hello4_exit(void)
{
	printk(KERN_INFO "Goodbye, world 4\n");
}

module_init(hello4_init);
module_exit(hello4_exit);

MODULE_LICENSE("GPL");

MODULE_AUTHOR (DRIVER_AUTHOR);
//MOUDLE_DESCRIPTION(DRIVER_DESC);

MODULE_SUPPORTED_DEVICE("testdevice");