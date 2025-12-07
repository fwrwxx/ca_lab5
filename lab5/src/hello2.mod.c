#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0x97acb853, "ktime_get" },
	{ 0x52604ba6, "start_time" },
	{ 0x7e8d7c48, "print_hello" },
	{ 0x52604ba6, "end_time" },
	{ 0xc2614bbe, "param_ops_uint" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xba157484, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0x97acb853,
	0x52604ba6,
	0x7e8d7c48,
	0x52604ba6,
	0xc2614bbe,
	0xe8213e80,
	0xd272d446,
	0xba157484,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"ktime_get\0"
	"start_time\0"
	"print_hello\0"
	"end_time\0"
	"param_ops_uint\0"
	"_printk\0"
	"__x86_return_thunk\0"
	"module_layout\0"
;

MODULE_INFO(depends, "hello1");


MODULE_INFO(srcversion, "8E43EBA12AAF5BDF6538E42");
