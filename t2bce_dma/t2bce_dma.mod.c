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

KSYMTAB_FUNC(t2bce_dma_alloc_cq, "");
SYMBOL_FLAGS(t2bce_dma_alloc_cq, 0x01);
KSYMTAB_FUNC(t2bce_dma_get_cq_memcfg, "");
SYMBOL_FLAGS(t2bce_dma_get_cq_memcfg, 0x01);
KSYMTAB_FUNC(t2bce_dma_free_cq, "");
SYMBOL_FLAGS(t2bce_dma_free_cq, 0x01);
KSYMTAB_FUNC(t2bce_dma_handle_cq_completions_locked, "");
SYMBOL_FLAGS(t2bce_dma_handle_cq_completions_locked, 0x01);
KSYMTAB_FUNC(t2bce_dma_dispatch_pending_sq_completions, "");
SYMBOL_FLAGS(t2bce_dma_dispatch_pending_sq_completions, 0x01);
KSYMTAB_FUNC(t2bce_dma_alloc_sq, "");
SYMBOL_FLAGS(t2bce_dma_alloc_sq, 0x01);
KSYMTAB_FUNC(t2bce_dma_get_sq_memcfg, "");
SYMBOL_FLAGS(t2bce_dma_get_sq_memcfg, 0x01);
KSYMTAB_FUNC(t2bce_dma_free_sq, "");
SYMBOL_FLAGS(t2bce_dma_free_sq, 0x01);
KSYMTAB_FUNC(t2bce_dma_reserve_submission, "");
SYMBOL_FLAGS(t2bce_dma_reserve_submission, 0x01);
KSYMTAB_FUNC(t2bce_dma_cancel_submission_reservation, "");
SYMBOL_FLAGS(t2bce_dma_cancel_submission_reservation, 0x01);
KSYMTAB_FUNC(t2bce_dma_submit_to_device, "");
SYMBOL_FLAGS(t2bce_dma_submit_to_device, 0x01);
KSYMTAB_FUNC(t2bce_dma_notify_submission_complete, "");
SYMBOL_FLAGS(t2bce_dma_notify_submission_complete, 0x01);
KSYMTAB_FUNC(t2bce_dma_set_next_submission_single, "");
SYMBOL_FLAGS(t2bce_dma_set_next_submission_single, 0x01);
KSYMTAB_FUNC(t2bce_dma_init_segment_list_pool, "");
SYMBOL_FLAGS(t2bce_dma_init_segment_list_pool, 0x01);
KSYMTAB_FUNC(t2bce_dma_destroy_segment_list_pool, "");
SYMBOL_FLAGS(t2bce_dma_destroy_segment_list_pool, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_segment_list, "");
SYMBOL_FLAGS(t2bce_dma_create_segment_list, 0x01);
KSYMTAB_FUNC(t2bce_dma_destroy_segment_list, "");
SYMBOL_FLAGS(t2bce_dma_destroy_segment_list, 0x01);
KSYMTAB_FUNC(t2bce_dma_set_next_submission_segment_list, "");
SYMBOL_FLAGS(t2bce_dma_set_next_submission_segment_list, 0x01);
KSYMTAB_FUNC(t2bce_dma_alloc_cmdq, "");
SYMBOL_FLAGS(t2bce_dma_alloc_cmdq, 0x01);
KSYMTAB_FUNC(t2bce_dma_free_cmdq, "");
SYMBOL_FLAGS(t2bce_dma_free_cmdq, 0x01);
KSYMTAB_FUNC(t2bce_dma_cmd_register_queue, "");
SYMBOL_FLAGS(t2bce_dma_cmd_register_queue, 0x01);
KSYMTAB_FUNC(t2bce_dma_cmd_unregister_memory_queue, "");
SYMBOL_FLAGS(t2bce_dma_cmd_unregister_memory_queue, 0x01);
KSYMTAB_FUNC(t2bce_dma_cmd_flush_memory_queue, "");
SYMBOL_FLAGS(t2bce_dma_cmd_flush_memory_queue, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_cq_range, "");
SYMBOL_FLAGS(t2bce_dma_create_cq_range, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_cq, "");
SYMBOL_FLAGS(t2bce_dma_create_cq, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_sq_range, "");
SYMBOL_FLAGS(t2bce_dma_create_sq_range, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_sq, "");
SYMBOL_FLAGS(t2bce_dma_create_sq, 0x01);
KSYMTAB_FUNC(t2bce_dma_create_sq_with_flags, "");
SYMBOL_FLAGS(t2bce_dma_create_sq_with_flags, 0x01);
KSYMTAB_FUNC(t2bce_dma_destroy_cq, "");
SYMBOL_FLAGS(t2bce_dma_destroy_cq, 0x01);
KSYMTAB_FUNC(t2bce_dma_destroy_sq, "");
SYMBOL_FLAGS(t2bce_dma_destroy_sq, 0x01);
KSYMTAB_FUNC(t2bce_dma_flush_sq, "");
SYMBOL_FLAGS(t2bce_dma_flush_sq, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "90B96A6A3D1B22D9493A83A");
