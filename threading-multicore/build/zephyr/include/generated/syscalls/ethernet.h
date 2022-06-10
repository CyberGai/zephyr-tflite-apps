/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_ETHERNET_H
#define Z_INCLUDE_SYSCALLS_ETHERNET_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern const struct device * z_impl_net_eth_get_ptp_clock_by_index(int index);

__pinned_func
static inline const struct device * net_eth_get_ptp_clock_by_index(int index)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; int val; } parm0 = { .val = index };
		return (const struct device *) arch_syscall_invoke1(parm0.x, K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX);
	}
#endif
	compiler_barrier();
	return z_impl_net_eth_get_ptp_clock_by_index(index);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define net_eth_get_ptp_clock_by_index(index) ({ 	const struct device * retval; 	sys_port_trace_syscall_enter(K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX, net_eth_get_ptp_clock_by_index, index); 	retval = net_eth_get_ptp_clock_by_index(index); 	sys_port_trace_syscall_exit(K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX, net_eth_get_ptp_clock_by_index, index, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */