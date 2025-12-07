#ifndef HELLO1_H
#define HELLO1_H

#include <linux/ktime.h>

void print_hello(unsigned int count);
extern ktime_t start_time, end_time;

#endif
