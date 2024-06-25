#include <linux/kernel.h>
#include <linux/module.h>

void cleanup_module(void)
{
	pr_info("short is the life of a kernel module\n");
}

MODULE_LICENSE("GPL");
