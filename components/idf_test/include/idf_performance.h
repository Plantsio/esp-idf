#pragma once

/* put target-specific macros into include/target/idf_performance_target.h */
#include "idf_performance_target.h"

/* Define default values in this file with #ifndef if the value could been overwritten in the target-specific headers
 * above. Forgetting this will produce compile-time warnings.
 */

#ifndef IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP
#define IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP                     300     // TODO: IDF-5178
#endif
#ifndef IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP_PSRAM
#define IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP_PSRAM               300
#endif
#ifndef IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP_UNICORE
#define IDF_PERFORMANCE_MAX_FREERTOS_SPINLOCK_CYCLES_PER_OP_UNICORE             130
#endif
#ifndef IDF_PERFORMANCE_MAX_ESP_TIMER_GET_TIME_PER_CALL
#define IDF_PERFORMANCE_MAX_ESP_TIMER_GET_TIME_PER_CALL                         1000
#endif

/* Due to code size & linker layout differences interacting with cache, VFS
   microbenchmark currently runs slower with PSRAM enabled. */
#ifndef IDF_PERFORMANCE_MAX_VFS_OPEN_WRITE_CLOSE_TIME
#define IDF_PERFORMANCE_MAX_VFS_OPEN_WRITE_CLOSE_TIME                           25000   // TODO: IDF-5179
#endif
#ifndef IDF_PERFORMANCE_MAX_VFS_OPEN_WRITE_CLOSE_TIME_PSRAM
#define IDF_PERFORMANCE_MAX_VFS_OPEN_WRITE_CLOSE_TIME_PSRAM                     25000
#endif

// throughput performance by iperf
#ifndef IDF_PERFORMANCE_MIN_TCP_RX_THROUGHPUT
#define IDF_PERFORMANCE_MIN_TCP_RX_THROUGHPUT                                   40      // TODO: IDF-5221
#endif
#ifndef IDF_PERFORMANCE_MIN_TCP_TX_THROUGHPUT
#define IDF_PERFORMANCE_MIN_TCP_TX_THROUGHPUT                                   40
#endif
#ifndef IDF_PERFORMANCE_MIN_UDP_RX_THROUGHPUT
#define IDF_PERFORMANCE_MIN_UDP_RX_THROUGHPUT                                   64
#endif
#ifndef IDF_PERFORMANCE_MIN_UDP_TX_THROUGHPUT
#define IDF_PERFORMANCE_MIN_UDP_TX_THROUGHPUT                                   50
#endif

// throughput performance by ethernet iperf
#ifndef IDF_PERFORMANCE_MIN_TCP_RX_ETH_THROUGHPUT
#define IDF_PERFORMANCE_MIN_TCP_RX_ETH_THROUGHPUT                                   20
#endif
#ifndef IDF_PERFORMANCE_MIN_TCP_TX_ETH_THROUGHPUT
#define IDF_PERFORMANCE_MIN_TCP_TX_ETH_THROUGHPUT                                   30
#endif
#ifndef IDF_PERFORMANCE_MIN_UDP_RX_ETH_THROUGHPUT
#define IDF_PERFORMANCE_MIN_UDP_RX_ETH_THROUGHPUT                                   50
#endif
#ifndef IDF_PERFORMANCE_MIN_UDP_TX_ETH_THROUGHPUT
#define IDF_PERFORMANCE_MIN_UDP_TX_ETH_THROUGHPUT                                   70
#endif

// events dispatched per second by event loop library
#ifndef IDF_PERFORMANCE_MIN_EVENT_DISPATCH
#define IDF_PERFORMANCE_MIN_EVENT_DISPATCH                                      25000
#endif
#ifndef IDF_PERFORMANCE_MIN_EVENT_DISPATCH_PSRAM
#define IDF_PERFORMANCE_MIN_EVENT_DISPATCH_PSRAM                                21000
#endif

#ifndef IDF_PERFORMANCE_MAX_SPILL_REG_CYCLES
#define IDF_PERFORMANCE_MAX_SPILL_REG_CYCLES                                    150
#endif
#ifndef IDF_PERFORMANCE_MAX_ISR_ENTER_CYCLES
#define IDF_PERFORMANCE_MAX_ISR_ENTER_CYCLES                                    290
#endif
#ifndef IDF_PERFORMANCE_MAX_ISR_EXIT_CYCLES
#define IDF_PERFORMANCE_MAX_ISR_EXIT_CYCLES                                     565
#endif

#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_4BIT
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_4BIT                   12200
#endif
#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_4BIT
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_4BIT                   12200
#endif
#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_1BIT
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_1BIT                   4000
#endif
#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_1BIT
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_1BIT                   4000
#endif
#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_SPI
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_TOHOST_SPI                    1000
#endif
#ifndef IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_SPI
#define IDF_PERFORMANCE_MIN_SDIO_THROUGHPUT_KBSEC_FRHOST_SPI                    1000
#endif

//time to perform the task selection plus context switch (from task)
#ifndef IDF_PERFORMANCE_MAX_SCHEDULING_TIME
#define IDF_PERFORMANCE_MAX_SCHEDULING_TIME                                     2000
#endif

#ifndef IDF_PERFORMANCE_MAX_MALLOC_DEFAULT_AVERAGE_TIME
#define IDF_PERFORMANCE_MAX_MALLOC_DEFAULT_AVERAGE_TIME                         2600
#endif

#ifndef IDF_PERFORMANCE_MAX_FREE_DEFAULT_AVERAGE_TIME
#define IDF_PERFORMANCE_MAX_FREE_DEFAULT_AVERAGE_TIME                           950
#endif
