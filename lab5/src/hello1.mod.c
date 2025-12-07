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

KSYMTAB_DATA(start_time, "", "");
KSYMTAB_DATA(end_time, "", "");
KSYMTAB_FUNC(print_hello, "", "");

SYMBOL_CRC(start_time, 0x52604ba6, "");
SYMBOL_CRC(end_time, 0x52604ba6, "");
SYMBOL_CRC(print_hello, 0x7e8d7c48, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd272d446, "__fentry__" },
	{ 0xe8213e80, "_printk" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xc2614bbe, "param_ops_uint" },
	{ 0xba157484, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0xd272d446,
	0xe8213e80,
	0xd272d446,
	0xc2614bbe,
	0xba157484,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"__fentry__\0"
	"_printk\0"
	"__x86_return_thunk\0"
	"param_ops_uint\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BF89C0610A2E0789B40E17A");
