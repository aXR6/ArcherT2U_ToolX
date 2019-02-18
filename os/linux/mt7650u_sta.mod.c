#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x54202704, "module_layout" },
	{ 0x73cf9480, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xb3432ad4, "kernel_write" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0xc29bf967, "strspn" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x8e590882, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbf899149, "skb_clone" },
	{ 0x49c5267b, "dev_get_by_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0xaa87380c, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x4d1ab129, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x13c3c400, "filp_close" },
	{ 0xe2840a06, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x88784999, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x827307dd, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa8c0ee1d, "__netdev_alloc_skb" },
	{ 0x62e31cab, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x9174a909, "kernel_read" },
	{ 0x31728e9e, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x6709a7d7, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c0dd1f8, "current_task" },
	{ 0x86c32e6a, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xd9389778, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfa0ae757, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x110d757, "register_netdev" },
	{ 0xa0a48b12, "wireless_send_event" },
	{ 0x8dd9f386, "usb_control_msg" },
	{ 0x1e4a90a5, "skb_push" },
	{ 0xce2dfafc, "dev_close" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9e51721f, "skb_pull" },
	{ 0x9bcb2003, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd81c0012, "module_put" },
	{ 0x61f4ea11, "skb_copy_expand" },
	{ 0x6d138bd8, "usb_submit_urb" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4a53ae71, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf20d5af9, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfcf59dd, "eth_type_trans" },
	{ 0x923136e1, "wake_up_process" },
	{ 0xefebcfb2, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0xdb003034, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcb9ea059, "unregister_netdev" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xc03d33e7, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x945dc464, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x823fd4f, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x889ac131, "try_module_get" },
	{ 0x7b8370ad, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x95686184, "filp_open" },
	{ 0x250db497, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "7A96A1C9988FD61AEC545CC");
