/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ADC_CHANNEL_SETUP 0
#define K_SYSCALL_ADC_READ 1
#define K_SYSCALL_ADC_READ_ASYNC 2
#define K_SYSCALL_ATOMIC_ADD 3
#define K_SYSCALL_ATOMIC_AND 4
#define K_SYSCALL_ATOMIC_CAS 5
#define K_SYSCALL_ATOMIC_NAND 6
#define K_SYSCALL_ATOMIC_OR 7
#define K_SYSCALL_ATOMIC_PTR_CAS 8
#define K_SYSCALL_ATOMIC_PTR_SET 9
#define K_SYSCALL_ATOMIC_SET 10
#define K_SYSCALL_ATOMIC_SUB 11
#define K_SYSCALL_ATOMIC_XOR 12
#define K_SYSCALL_BBRAM_CHECK_INVALID 13
#define K_SYSCALL_BBRAM_CHECK_POWER 14
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 15
#define K_SYSCALL_BBRAM_GET_SIZE 16
#define K_SYSCALL_BBRAM_READ 17
#define K_SYSCALL_BBRAM_WRITE 18
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 19
#define K_SYSCALL_CAN_CALC_TIMING 20
#define K_SYSCALL_CAN_CALC_TIMING_DATA 21
#define K_SYSCALL_CAN_GET_CORE_CLOCK 22
#define K_SYSCALL_CAN_GET_MAX_BITRATE 23
#define K_SYSCALL_CAN_GET_MAX_FILTERS 24
#define K_SYSCALL_CAN_GET_STATE 25
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 26
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 27
#define K_SYSCALL_CAN_GET_TIMING_MAX 28
#define K_SYSCALL_CAN_GET_TIMING_MIN 29
#define K_SYSCALL_CAN_RECOVER 30
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 31
#define K_SYSCALL_CAN_SEND 32
#define K_SYSCALL_CAN_SET_BITRATE 33
#define K_SYSCALL_CAN_SET_BITRATE_DATA 34
#define K_SYSCALL_CAN_SET_MODE 35
#define K_SYSCALL_CAN_SET_TIMING 36
#define K_SYSCALL_CAN_SET_TIMING_DATA 37
#define K_SYSCALL_CLOCK_GETTIME 38
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 39
#define K_SYSCALL_COUNTER_GET_FREQUENCY 40
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 41
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 42
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 43
#define K_SYSCALL_COUNTER_GET_PENDING_INT 44
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 45
#define K_SYSCALL_COUNTER_GET_VALUE 46
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 47
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 48
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 49
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 50
#define K_SYSCALL_COUNTER_START 51
#define K_SYSCALL_COUNTER_STOP 52
#define K_SYSCALL_COUNTER_TICKS_TO_US 53
#define K_SYSCALL_COUNTER_US_TO_TICKS 54
#define K_SYSCALL_DAC_CHANNEL_SETUP 55
#define K_SYSCALL_DAC_WRITE_VALUE 56
#define K_SYSCALL_DEVICE_GET_BINDING 57
#define K_SYSCALL_DEVICE_IS_READY 58
#define K_SYSCALL_DMA_CHAN_FILTER 59
#define K_SYSCALL_DMA_RELEASE_CHANNEL 60
#define K_SYSCALL_DMA_REQUEST_CHANNEL 61
#define K_SYSCALL_DMA_RESUME 62
#define K_SYSCALL_DMA_START 63
#define K_SYSCALL_DMA_STOP 64
#define K_SYSCALL_DMA_SUSPEND 65
#define K_SYSCALL_EC_HOST_CMD_PERIPH_INIT 66
#define K_SYSCALL_EC_HOST_CMD_PERIPH_SEND 67
#define K_SYSCALL_EEPROM_GET_SIZE 68
#define K_SYSCALL_EEPROM_READ 69
#define K_SYSCALL_EEPROM_WRITE 70
#define K_SYSCALL_ENTROPY_GET_ENTROPY 71
#define K_SYSCALL_ESPI_CONFIG 72
#define K_SYSCALL_ESPI_FLASH_ERASE 73
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 74
#define K_SYSCALL_ESPI_READ_FLASH 75
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 76
#define K_SYSCALL_ESPI_READ_REQUEST 77
#define K_SYSCALL_ESPI_RECEIVE_OOB 78
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 79
#define K_SYSCALL_ESPI_SAF_ACTIVATE 80
#define K_SYSCALL_ESPI_SAF_CONFIG 81
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 82
#define K_SYSCALL_ESPI_SAF_FLASH_READ 83
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 84
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 85
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 86
#define K_SYSCALL_ESPI_SEND_OOB 87
#define K_SYSCALL_ESPI_SEND_VWIRE 88
#define K_SYSCALL_ESPI_WRITE_FLASH 89
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 90
#define K_SYSCALL_ESPI_WRITE_REQUEST 91
#define K_SYSCALL_FLASH_ERASE 92
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 93
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 94
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 95
#define K_SYSCALL_FLASH_GET_PARAMETERS 96
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 97
#define K_SYSCALL_FLASH_READ 98
#define K_SYSCALL_FLASH_READ_JEDEC_ID 99
#define K_SYSCALL_FLASH_SFDP_READ 100
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 101
#define K_SYSCALL_FLASH_WRITE 102
#define K_SYSCALL_GPIO_GET_PENDING_INT 103
#define K_SYSCALL_GPIO_PIN_CONFIGURE 104
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 105
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 106
#define K_SYSCALL_GPIO_PORT_GET_RAW 107
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 108
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 109
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 110
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 111
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 112
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 113
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 114
#define K_SYSCALL_I2C_CONFIGURE 115
#define K_SYSCALL_I2C_GET_CONFIG 116
#define K_SYSCALL_I2C_RECOVER_BUS 117
#define K_SYSCALL_I2C_SLAVE_DRIVER_REGISTER 118
#define K_SYSCALL_I2C_SLAVE_DRIVER_UNREGISTER 119
#define K_SYSCALL_I2C_TRANSFER 120
#define K_SYSCALL_I2S_BUF_READ 121
#define K_SYSCALL_I2S_BUF_WRITE 122
#define K_SYSCALL_I2S_CONFIGURE 123
#define K_SYSCALL_I2S_TRIGGER 124
#define K_SYSCALL_IPM_COMPLETE 125
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 126
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 127
#define K_SYSCALL_IPM_SEND 128
#define K_SYSCALL_IPM_SET_ENABLED 129
#define K_SYSCALL_IVSHMEM_GET_ID 130
#define K_SYSCALL_IVSHMEM_GET_MEM 131
#define K_SYSCALL_IVSHMEM_GET_VECTORS 132
#define K_SYSCALL_IVSHMEM_INT_PEER 133
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 134
#define K_SYSCALL_KSCAN_CONFIG 135
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 136
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 137
#define K_SYSCALL_K_BUSY_WAIT 138
#define K_SYSCALL_K_CONDVAR_BROADCAST 139
#define K_SYSCALL_K_CONDVAR_INIT 140
#define K_SYSCALL_K_CONDVAR_SIGNAL 141
#define K_SYSCALL_K_CONDVAR_WAIT 142
#define K_SYSCALL_K_EVENT_INIT 143
#define K_SYSCALL_K_EVENT_POST 144
#define K_SYSCALL_K_EVENT_SET 145
#define K_SYSCALL_K_EVENT_WAIT 146
#define K_SYSCALL_K_EVENT_WAIT_ALL 147
#define K_SYSCALL_K_FLOAT_DISABLE 148
#define K_SYSCALL_K_FLOAT_ENABLE 149
#define K_SYSCALL_K_FUTEX_WAIT 150
#define K_SYSCALL_K_FUTEX_WAKE 151
#define K_SYSCALL_K_IS_PREEMPT_THREAD 152
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 153
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 154
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 155
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 156
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 157
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 158
#define K_SYSCALL_K_MSGQ_GET 159
#define K_SYSCALL_K_MSGQ_GET_ATTRS 160
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 161
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 162
#define K_SYSCALL_K_MSGQ_PEEK 163
#define K_SYSCALL_K_MSGQ_PURGE 164
#define K_SYSCALL_K_MSGQ_PUT 165
#define K_SYSCALL_K_MUTEX_INIT 166
#define K_SYSCALL_K_MUTEX_LOCK 167
#define K_SYSCALL_K_MUTEX_UNLOCK 168
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 169
#define K_SYSCALL_K_OBJECT_ALLOC 170
#define K_SYSCALL_K_OBJECT_RELEASE 171
#define K_SYSCALL_K_PIPE_ALLOC_INIT 172
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 173
#define K_SYSCALL_K_PIPE_FLUSH 174
#define K_SYSCALL_K_PIPE_GET 175
#define K_SYSCALL_K_PIPE_PUT 176
#define K_SYSCALL_K_PIPE_READ_AVAIL 177
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 178
#define K_SYSCALL_K_POLL 179
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 180
#define K_SYSCALL_K_POLL_SIGNAL_INIT 181
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 182
#define K_SYSCALL_K_POLL_SIGNAL_RESET 183
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 184
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 185
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 186
#define K_SYSCALL_K_QUEUE_GET 187
#define K_SYSCALL_K_QUEUE_INIT 188
#define K_SYSCALL_K_QUEUE_IS_EMPTY 189
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 190
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 191
#define K_SYSCALL_K_SEM_COUNT_GET 192
#define K_SYSCALL_K_SEM_GIVE 193
#define K_SYSCALL_K_SEM_INIT 194
#define K_SYSCALL_K_SEM_RESET 195
#define K_SYSCALL_K_SEM_TAKE 196
#define K_SYSCALL_K_SLEEP 197
#define K_SYSCALL_K_STACK_ALLOC_INIT 198
#define K_SYSCALL_K_STACK_POP 199
#define K_SYSCALL_K_STACK_PUSH 200
#define K_SYSCALL_K_STR_OUT 201
#define K_SYSCALL_K_THREAD_ABORT 202
#define K_SYSCALL_K_THREAD_CREATE 203
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 204
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 205
#define K_SYSCALL_K_THREAD_DEADLINE_SET 206
#define K_SYSCALL_K_THREAD_JOIN 207
#define K_SYSCALL_K_THREAD_NAME_COPY 208
#define K_SYSCALL_K_THREAD_NAME_SET 209
#define K_SYSCALL_K_THREAD_PRIORITY_GET 210
#define K_SYSCALL_K_THREAD_PRIORITY_SET 211
#define K_SYSCALL_K_THREAD_RESUME 212
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 213
#define K_SYSCALL_K_THREAD_START 214
#define K_SYSCALL_K_THREAD_SUSPEND 215
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 216
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 217
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 218
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 219
#define K_SYSCALL_K_TIMER_START 220
#define K_SYSCALL_K_TIMER_STATUS_GET 221
#define K_SYSCALL_K_TIMER_STATUS_SYNC 222
#define K_SYSCALL_K_TIMER_STOP 223
#define K_SYSCALL_K_TIMER_USER_DATA_GET 224
#define K_SYSCALL_K_TIMER_USER_DATA_SET 225
#define K_SYSCALL_K_UPTIME_TICKS 226
#define K_SYSCALL_K_USLEEP 227
#define K_SYSCALL_K_WAKEUP 228
#define K_SYSCALL_K_YIELD 229
#define K_SYSCALL_LED_BLINK 230
#define K_SYSCALL_LED_GET_INFO 231
#define K_SYSCALL_LED_OFF 232
#define K_SYSCALL_LED_ON 233
#define K_SYSCALL_LED_SET_BRIGHTNESS 234
#define K_SYSCALL_LED_SET_CHANNEL 235
#define K_SYSCALL_LED_SET_COLOR 236
#define K_SYSCALL_LED_WRITE_CHANNELS 237
#define K_SYSCALL_LOG_BUFFERED_CNT 238
#define K_SYSCALL_LOG_FILTER_SET 239
#define K_SYSCALL_LOG_PANIC 240
#define K_SYSCALL_LOG_PROCESS 241
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 242
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 243
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 244
#define K_SYSCALL_MBOX_MTU_GET 245
#define K_SYSCALL_MBOX_SEND 246
#define K_SYSCALL_MBOX_SET_ENABLED 247
#define K_SYSCALL_MDIO_BUS_DISABLE 248
#define K_SYSCALL_MDIO_BUS_ENABLE 249
#define K_SYSCALL_MDIO_READ 250
#define K_SYSCALL_MDIO_WRITE 251
#define K_SYSCALL_NET_ADDR_NTOP 252
#define K_SYSCALL_NET_ADDR_PTON 253
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 254
#define K_SYSCALL_NET_IF_GET_BY_INDEX 255
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 256
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 257
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 258
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 259
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 260
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 261
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 262
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 263
#define K_SYSCALL_NRF_QSPI_NOR_BASE_CLOCK_DIV_FORCE 264
#define K_SYSCALL_PECI_CONFIG 265
#define K_SYSCALL_PECI_DISABLE 266
#define K_SYSCALL_PECI_ENABLE 267
#define K_SYSCALL_PECI_TRANSFER 268
#define K_SYSCALL_PHY_CONFIGURE_LINK 269
#define K_SYSCALL_PHY_GET_LINK_STATE 270
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 271
#define K_SYSCALL_PHY_READ 272
#define K_SYSCALL_PHY_WRITE 273
#define K_SYSCALL_PS2_CONFIG 274
#define K_SYSCALL_PS2_DISABLE_CALLBACK 275
#define K_SYSCALL_PS2_ENABLE_CALLBACK 276
#define K_SYSCALL_PS2_READ 277
#define K_SYSCALL_PS2_WRITE 278
#define K_SYSCALL_PTP_CLOCK_GET 279
#define K_SYSCALL_PWM_CAPTURE_CYCLES 280
#define K_SYSCALL_PWM_DISABLE_CAPTURE 281
#define K_SYSCALL_PWM_ENABLE_CAPTURE 282
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 283
#define K_SYSCALL_PWM_SET_CYCLES 284
#define K_SYSCALL_RESET_LINE_ASSERT 285
#define K_SYSCALL_RESET_LINE_DEASSERT 286
#define K_SYSCALL_RESET_LINE_TOGGLE 287
#define K_SYSCALL_RESET_STATUS 288
#define K_SYSCALL_SDHC_CARD_BUSY 289
#define K_SYSCALL_SDHC_CARD_PRESENT 290
#define K_SYSCALL_SDHC_EXECUTE_TUNING 291
#define K_SYSCALL_SDHC_GET_HOST_PROPS 292
#define K_SYSCALL_SDHC_HW_RESET 293
#define K_SYSCALL_SDHC_REQUEST 294
#define K_SYSCALL_SDHC_SET_IO 295
#define K_SYSCALL_SENSOR_ATTR_GET 296
#define K_SYSCALL_SENSOR_ATTR_SET 297
#define K_SYSCALL_SENSOR_CHANNEL_GET 298
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 299
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 300
#define K_SYSCALL_SPI_RELEASE 301
#define K_SYSCALL_SPI_TRANSCEIVE 302
#define K_SYSCALL_SYSCON_GET_BASE 303
#define K_SYSCALL_SYSCON_GET_SIZE 304
#define K_SYSCALL_SYSCON_READ_REG 305
#define K_SYSCALL_SYSCON_WRITE_REG 306
#define K_SYSCALL_SYS_CACHE_DATA_ALL 307
#define K_SYSCALL_SYS_CACHE_DATA_RANGE 308
#define K_SYSCALL_SYS_CACHE_INSTR_ALL 309
#define K_SYSCALL_SYS_CACHE_INSTR_RANGE 310
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 311
#define K_SYSCALL_SYS_CSRAND_GET 312
#define K_SYSCALL_SYS_RAND32_GET 313
#define K_SYSCALL_SYS_RAND_GET 314
#define K_SYSCALL_UART_CONFIGURE 315
#define K_SYSCALL_UART_CONFIG_GET 316
#define K_SYSCALL_UART_DRV_CMD 317
#define K_SYSCALL_UART_ERR_CHECK 318
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 319
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 320
#define K_SYSCALL_UART_IRQ_IS_PENDING 321
#define K_SYSCALL_UART_IRQ_RX_DISABLE 322
#define K_SYSCALL_UART_IRQ_RX_ENABLE 323
#define K_SYSCALL_UART_IRQ_TX_DISABLE 324
#define K_SYSCALL_UART_IRQ_TX_ENABLE 325
#define K_SYSCALL_UART_IRQ_UPDATE 326
#define K_SYSCALL_UART_LINE_CTRL_GET 327
#define K_SYSCALL_UART_LINE_CTRL_SET 328
#define K_SYSCALL_UART_MUX_FIND 329
#define K_SYSCALL_UART_POLL_IN 330
#define K_SYSCALL_UART_POLL_IN_U16 331
#define K_SYSCALL_UART_POLL_OUT 332
#define K_SYSCALL_UART_POLL_OUT_U16 333
#define K_SYSCALL_UART_RX_DISABLE 334
#define K_SYSCALL_UART_RX_ENABLE 335
#define K_SYSCALL_UART_RX_ENABLE_U16 336
#define K_SYSCALL_UART_TX 337
#define K_SYSCALL_UART_TX_ABORT 338
#define K_SYSCALL_UART_TX_U16 339
#define K_SYSCALL_USER_FAULT 340
#define K_SYSCALL_WDT_DISABLE 341
#define K_SYSCALL_WDT_FEED 342
#define K_SYSCALL_WDT_SETUP 343
#define K_SYSCALL_ZEPHYR_FPUTC 344
#define K_SYSCALL_ZEPHYR_FWRITE 345
#define K_SYSCALL_ZEPHYR_READ_STDIN 346
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 347
#define K_SYSCALL_ZSOCK_ACCEPT 348
#define K_SYSCALL_ZSOCK_BIND 349
#define K_SYSCALL_ZSOCK_CLOSE 350
#define K_SYSCALL_ZSOCK_CONNECT 351
#define K_SYSCALL_ZSOCK_FCNTL 352
#define K_SYSCALL_ZSOCK_GETHOSTNAME 353
#define K_SYSCALL_ZSOCK_GETPEERNAME 354
#define K_SYSCALL_ZSOCK_GETSOCKNAME 355
#define K_SYSCALL_ZSOCK_GETSOCKOPT 356
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 357
#define K_SYSCALL_ZSOCK_INET_PTON 358
#define K_SYSCALL_ZSOCK_LISTEN 359
#define K_SYSCALL_ZSOCK_POLL 360
#define K_SYSCALL_ZSOCK_RECVFROM 361
#define K_SYSCALL_ZSOCK_SELECT 362
#define K_SYSCALL_ZSOCK_SENDMSG 363
#define K_SYSCALL_ZSOCK_SENDTO 364
#define K_SYSCALL_ZSOCK_SETSOCKOPT 365
#define K_SYSCALL_ZSOCK_SHUTDOWN 366
#define K_SYSCALL_ZSOCK_SOCKET 367
#define K_SYSCALL_ZSOCK_SOCKETPAIR 368
#define K_SYSCALL_Z_CURRENT_GET 369
#define K_SYSCALL_Z_ERRNO 370
#define K_SYSCALL_Z_LOG_HEXDUMP_FROM_USER 371
#define K_SYSCALL_Z_LOG_MSG2_RUNTIME_VCREATE 372
#define K_SYSCALL_Z_LOG_MSG2_STATIC_CREATE 373
#define K_SYSCALL_Z_LOG_STRING_FROM_USER 374
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 375
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 376
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 377
#define K_SYSCALL_BAD 378
#define K_SYSCALL_LIMIT 379


#ifndef _ASMLANGUAGE

#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
