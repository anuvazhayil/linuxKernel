#include<linux/module.h>
#include<linux/kernel.h> /* Needed for KERN_INFO */

int init_module(void){
    printk(KERN_INFO "Hello World \n");
    return 0; /* init_module success */
}

void cleanup_module(void){
    printk(KERN_INFO "Goodbye! \n");
}
