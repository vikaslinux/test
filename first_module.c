#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

static int __init hello_init(void){

printk(KERN_INFO "hello out there");
return 0;
}

static void __exit bye_exit(void){
printk(KERN_INFO "bbYE");
}

module_init(hello_init);
module_exit(bye_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vikas <vikasm.dtu@gmail.com");
MODULE_DESCRIPTION("this is my first module for learning purpose");

