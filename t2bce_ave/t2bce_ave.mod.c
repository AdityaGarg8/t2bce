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


MODULE_INFO(depends, "v4l2-mem2mem,videodev,t2bce_core,videobuf2-common,videobuf2-vmalloc,videobuf2-v4l2");


MODULE_INFO(srcversion, "CF20F1EEDFD2EC3CB0622B8");
