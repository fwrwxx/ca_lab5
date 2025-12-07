#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/ktime.h>
#include "hello1.h"

MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("Hello1 module for Lab5");
MODULE_LICENSE("Dual BSD/GPL");

static unsigned int print_count = 1;
module_param(print_count, uint, S_IRUGO);
MODULE_PARM_DESC(print_count, "Number of hello prints");

ktime_t start_time, end_time;
EXPORT_SYMBOL(start_time);
EXPORT_SYMBOL(end_time);

void print_hello(unsigned int count)
{
    unsigned int i;
    for (i = 0; i < count; ++i) {
        pr_info("Hello, world!\n");
    }
}
EXPORT_SYMBOL(print_hello);

static int __init hello1_init(void)
{
    pr_info("hello1 module loaded\n");
    return 0;
}

static void __exit hello1_exit(void)
{
    pr_info("hello1 module unloaded\n");
    pr_info("Time per print: %lld ns\n", 
            (end_time - start_time) / print_count);
}

module_init(hello1_init);
module_exit(hello1_exit);
