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
	{ 0x92997ed8, "_printk" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x3f66a26e, "register_kprobe" },
	{ 0xbb10e61d, "unregister_kprobe" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd805be5c, "pv_ops" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa1a94982, "module_layout" },
};

MODULE_INFO(depends, "");

