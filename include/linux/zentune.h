#ifndef _LINUX_ZENTUNE_H
#define _LINUX_ZENTUNE_H

#ifdef __KERNEL__

//bfs related
#ifdef CONFIG_SCHED_BFS
#define rr_interval_custom 3
#define sched_iso_cpu_custom 25
#endif

//cfs related
#ifdef CONFIG_FAIR_GROUP_SCHED
#define sysctl_sched_latency_custom 6000000ULL
#define normalized_sysctl_sched_latency_custom 6000000ULL
#define sysctl_sched_min_granularity_custom 750000ULL
#define normalized_sysctl_sched_min_granularity_custom 750000ULL
#define sched_nr_latency_custom 8
#define normalized_sysctl_sched_wakeup_granularity_custom 1000000UL
#define sysctl_sched_wakeup_granularity_custom 1000000UL
#define sysctl_sched_migration_cost_custom 500000UL
#define sysctl_sched_shares_window_custom 10000000UL
#endif

//mm related
#define vm_dirty_ratio_custom 90 //90
#define dirty_background_ratio_custom 70 //70
#define dirty_writeback_interval_custom 60000
#define dirty_expire_interval_custom 60000
#define vfs_cache_pressure_custom 40
#define swappiness_custom 20

//wifi power related
#define wifi_power_mode_online PM_MAX
#define wifi_power_mode_offline PM_MAX

//uksm related
#define ksm_thread_pages_to_scan_custom 256
#define ksm_thread_sleep_millisecs_custom 4000

//printk related
#define printk_disabled 1

//NORMALMEM settings
#ifdef CONFIG_ANCORA_NORMALMEM
#define surface_flinger_size_custom 0x1A00000
#define adsp_size_custom 0x2D00000
#define fluid_adsp_size_custom 0x2800000

//BIGMEM settings
#elif CONFIG_ANCORA_BIGMEM
#define surface_flinger_size_custom 0x1600000
#define adsp_size_custom 0X1D00000
#define fluid_adsp_size_custom 0X1D00000

//MAXMEM settings
#elif CONFIG_ANCORA_MAXMEM
#define surface_flinger_size_custom 0X0D00000//0X0D00000
#define adsp_size_custom 0x2D00000//0X1100000
#define fluid_adsp_size_custom 0x2D00000

//TOTALMEM settings
#elif CONFIG_ANCORA_TOTALMEM
#define surface_flinger_size_custom 0X0000000
#define adsp_size_custom 0X0000000
#define fluid_adsp_size_custom 0X0000000

#endif



#endif /* __KERNEL__ */
#endif /* _LINUX_ZENTUNE_H */
