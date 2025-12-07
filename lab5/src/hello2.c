#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/ktime.h>
#include "hello1.h"

MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("Hello2 module for Lab5");
MODULE_LICENSE("Dual BSD/GPL");

static unsigned int count = 1;
module_param(count, uint, S_IRUGO);
MODULE_PARM_DESC(count, "Number of hello prints");

static int __init hello2_init(void)
{
    if (count == 0) {
        pr_warn("Count is 0\n");
        return -EINVAL;
    }
    if (count > 5) {
        pr_err("Count is too large (max 5)\n");
        return -EINVAL;
    }
    
    start_time = ktime_get();
    print_hello(count);
    end_time = ktime_get();
    
    pr_info("hello2 module loaded\n");
    return 0;
}

static void __exit hello2_exit(void)
{
    pr_info("hello2 module unloaded\n");
}

module_init(hello2_init);
module_exit(hello2_exit);
