#include <linux/kernel.h>
#include <linux/module.h>

int int_module(void)
{
	pr_info("Hello, world!\n");
	return 0;
}

MODULE_LICENSE("GPL");
