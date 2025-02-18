/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_BCM2835_SDHOST_READ_DSTATE;
uint16_t _TRACE_BCM2835_SDHOST_WRITE_DSTATE;
uint16_t _TRACE_BCM2835_SDHOST_EDM_CHANGE_DSTATE;
uint16_t _TRACE_BCM2835_SDHOST_UPDATE_IRQ_DSTATE;
uint16_t _TRACE_SDBUS_COMMAND_DSTATE;
uint16_t _TRACE_SDBUS_READ_DSTATE;
uint16_t _TRACE_SDBUS_WRITE_DSTATE;
uint16_t _TRACE_SDBUS_SET_VOLTAGE_DSTATE;
uint16_t _TRACE_SDBUS_GET_DAT_LINES_DSTATE;
uint16_t _TRACE_SDBUS_GET_CMD_LINE_DSTATE;
uint16_t _TRACE_SDHCI_SET_INSERTED_DSTATE;
uint16_t _TRACE_SDHCI_SEND_COMMAND_DSTATE;
uint16_t _TRACE_SDHCI_ERROR_DSTATE;
uint16_t _TRACE_SDHCI_RESPONSE4_DSTATE;
uint16_t _TRACE_SDHCI_RESPONSE16_DSTATE;
uint16_t _TRACE_SDHCI_END_TRANSFER_DSTATE;
uint16_t _TRACE_SDHCI_ADMA_DSTATE;
uint16_t _TRACE_SDHCI_ADMA_LOOP_DSTATE;
uint16_t _TRACE_SDHCI_ADMA_TRANSFER_COMPLETED_DSTATE;
uint16_t _TRACE_SDHCI_ACCESS_DSTATE;
uint16_t _TRACE_SDHCI_READ_DATAPORT_DSTATE;
uint16_t _TRACE_SDHCI_WRITE_DATAPORT_DSTATE;
uint16_t _TRACE_SDHCI_CAPAREG_DSTATE;
uint16_t _TRACE_SDCARD_NORMAL_COMMAND_DSTATE;
uint16_t _TRACE_SDCARD_APP_COMMAND_DSTATE;
uint16_t _TRACE_SDCARD_RESPONSE_DSTATE;
uint16_t _TRACE_SDCARD_POWERUP_DSTATE;
uint16_t _TRACE_SDCARD_INQUIRY_CMD41_DSTATE;
uint16_t _TRACE_SDCARD_RESET_DSTATE;
uint16_t _TRACE_SDCARD_SET_BLOCKLEN_DSTATE;
uint16_t _TRACE_SDCARD_INSERTED_DSTATE;
uint16_t _TRACE_SDCARD_EJECTED_DSTATE;
uint16_t _TRACE_SDCARD_ERASE_DSTATE;
uint16_t _TRACE_SDCARD_LOCK_DSTATE;
uint16_t _TRACE_SDCARD_UNLOCK_DSTATE;
uint16_t _TRACE_SDCARD_READ_BLOCK_DSTATE;
uint16_t _TRACE_SDCARD_WRITE_BLOCK_DSTATE;
uint16_t _TRACE_SDCARD_WRITE_DATA_DSTATE;
uint16_t _TRACE_SDCARD_READ_DATA_DSTATE;
uint16_t _TRACE_SDCARD_SET_VOLTAGE_DSTATE;
uint16_t _TRACE_MILKYMIST_MEMCARD_MEMORY_READ_DSTATE;
uint16_t _TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_DSTATE;
uint16_t _TRACE_PXA2XX_MMCI_READ_DSTATE;
uint16_t _TRACE_PXA2XX_MMCI_WRITE_DSTATE;
TraceEvent _TRACE_BCM2835_SDHOST_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bcm2835_sdhost_read",
    .sstate = TRACE_BCM2835_SDHOST_READ_ENABLED,
    .dstate = &_TRACE_BCM2835_SDHOST_READ_DSTATE 
};
TraceEvent _TRACE_BCM2835_SDHOST_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bcm2835_sdhost_write",
    .sstate = TRACE_BCM2835_SDHOST_WRITE_ENABLED,
    .dstate = &_TRACE_BCM2835_SDHOST_WRITE_DSTATE 
};
TraceEvent _TRACE_BCM2835_SDHOST_EDM_CHANGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bcm2835_sdhost_edm_change",
    .sstate = TRACE_BCM2835_SDHOST_EDM_CHANGE_ENABLED,
    .dstate = &_TRACE_BCM2835_SDHOST_EDM_CHANGE_DSTATE 
};
TraceEvent _TRACE_BCM2835_SDHOST_UPDATE_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bcm2835_sdhost_update_irq",
    .sstate = TRACE_BCM2835_SDHOST_UPDATE_IRQ_ENABLED,
    .dstate = &_TRACE_BCM2835_SDHOST_UPDATE_IRQ_DSTATE 
};
TraceEvent _TRACE_SDBUS_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_command",
    .sstate = TRACE_SDBUS_COMMAND_ENABLED,
    .dstate = &_TRACE_SDBUS_COMMAND_DSTATE 
};
TraceEvent _TRACE_SDBUS_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_read",
    .sstate = TRACE_SDBUS_READ_ENABLED,
    .dstate = &_TRACE_SDBUS_READ_DSTATE 
};
TraceEvent _TRACE_SDBUS_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_write",
    .sstate = TRACE_SDBUS_WRITE_ENABLED,
    .dstate = &_TRACE_SDBUS_WRITE_DSTATE 
};
TraceEvent _TRACE_SDBUS_SET_VOLTAGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_set_voltage",
    .sstate = TRACE_SDBUS_SET_VOLTAGE_ENABLED,
    .dstate = &_TRACE_SDBUS_SET_VOLTAGE_DSTATE 
};
TraceEvent _TRACE_SDBUS_GET_DAT_LINES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_get_dat_lines",
    .sstate = TRACE_SDBUS_GET_DAT_LINES_ENABLED,
    .dstate = &_TRACE_SDBUS_GET_DAT_LINES_DSTATE 
};
TraceEvent _TRACE_SDBUS_GET_CMD_LINE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdbus_get_cmd_line",
    .sstate = TRACE_SDBUS_GET_CMD_LINE_ENABLED,
    .dstate = &_TRACE_SDBUS_GET_CMD_LINE_DSTATE 
};
TraceEvent _TRACE_SDHCI_SET_INSERTED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_set_inserted",
    .sstate = TRACE_SDHCI_SET_INSERTED_ENABLED,
    .dstate = &_TRACE_SDHCI_SET_INSERTED_DSTATE 
};
TraceEvent _TRACE_SDHCI_SEND_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_send_command",
    .sstate = TRACE_SDHCI_SEND_COMMAND_ENABLED,
    .dstate = &_TRACE_SDHCI_SEND_COMMAND_DSTATE 
};
TraceEvent _TRACE_SDHCI_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_error",
    .sstate = TRACE_SDHCI_ERROR_ENABLED,
    .dstate = &_TRACE_SDHCI_ERROR_DSTATE 
};
TraceEvent _TRACE_SDHCI_RESPONSE4_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_response4",
    .sstate = TRACE_SDHCI_RESPONSE4_ENABLED,
    .dstate = &_TRACE_SDHCI_RESPONSE4_DSTATE 
};
TraceEvent _TRACE_SDHCI_RESPONSE16_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_response16",
    .sstate = TRACE_SDHCI_RESPONSE16_ENABLED,
    .dstate = &_TRACE_SDHCI_RESPONSE16_DSTATE 
};
TraceEvent _TRACE_SDHCI_END_TRANSFER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_end_transfer",
    .sstate = TRACE_SDHCI_END_TRANSFER_ENABLED,
    .dstate = &_TRACE_SDHCI_END_TRANSFER_DSTATE 
};
TraceEvent _TRACE_SDHCI_ADMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_adma",
    .sstate = TRACE_SDHCI_ADMA_ENABLED,
    .dstate = &_TRACE_SDHCI_ADMA_DSTATE 
};
TraceEvent _TRACE_SDHCI_ADMA_LOOP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_adma_loop",
    .sstate = TRACE_SDHCI_ADMA_LOOP_ENABLED,
    .dstate = &_TRACE_SDHCI_ADMA_LOOP_DSTATE 
};
TraceEvent _TRACE_SDHCI_ADMA_TRANSFER_COMPLETED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_adma_transfer_completed",
    .sstate = TRACE_SDHCI_ADMA_TRANSFER_COMPLETED_ENABLED,
    .dstate = &_TRACE_SDHCI_ADMA_TRANSFER_COMPLETED_DSTATE 
};
TraceEvent _TRACE_SDHCI_ACCESS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_access",
    .sstate = TRACE_SDHCI_ACCESS_ENABLED,
    .dstate = &_TRACE_SDHCI_ACCESS_DSTATE 
};
TraceEvent _TRACE_SDHCI_READ_DATAPORT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_read_dataport",
    .sstate = TRACE_SDHCI_READ_DATAPORT_ENABLED,
    .dstate = &_TRACE_SDHCI_READ_DATAPORT_DSTATE 
};
TraceEvent _TRACE_SDHCI_WRITE_DATAPORT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_write_dataport",
    .sstate = TRACE_SDHCI_WRITE_DATAPORT_ENABLED,
    .dstate = &_TRACE_SDHCI_WRITE_DATAPORT_DSTATE 
};
TraceEvent _TRACE_SDHCI_CAPAREG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdhci_capareg",
    .sstate = TRACE_SDHCI_CAPAREG_ENABLED,
    .dstate = &_TRACE_SDHCI_CAPAREG_DSTATE 
};
TraceEvent _TRACE_SDCARD_NORMAL_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_normal_command",
    .sstate = TRACE_SDCARD_NORMAL_COMMAND_ENABLED,
    .dstate = &_TRACE_SDCARD_NORMAL_COMMAND_DSTATE 
};
TraceEvent _TRACE_SDCARD_APP_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_app_command",
    .sstate = TRACE_SDCARD_APP_COMMAND_ENABLED,
    .dstate = &_TRACE_SDCARD_APP_COMMAND_DSTATE 
};
TraceEvent _TRACE_SDCARD_RESPONSE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_response",
    .sstate = TRACE_SDCARD_RESPONSE_ENABLED,
    .dstate = &_TRACE_SDCARD_RESPONSE_DSTATE 
};
TraceEvent _TRACE_SDCARD_POWERUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_powerup",
    .sstate = TRACE_SDCARD_POWERUP_ENABLED,
    .dstate = &_TRACE_SDCARD_POWERUP_DSTATE 
};
TraceEvent _TRACE_SDCARD_INQUIRY_CMD41_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_inquiry_cmd41",
    .sstate = TRACE_SDCARD_INQUIRY_CMD41_ENABLED,
    .dstate = &_TRACE_SDCARD_INQUIRY_CMD41_DSTATE 
};
TraceEvent _TRACE_SDCARD_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_reset",
    .sstate = TRACE_SDCARD_RESET_ENABLED,
    .dstate = &_TRACE_SDCARD_RESET_DSTATE 
};
TraceEvent _TRACE_SDCARD_SET_BLOCKLEN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_set_blocklen",
    .sstate = TRACE_SDCARD_SET_BLOCKLEN_ENABLED,
    .dstate = &_TRACE_SDCARD_SET_BLOCKLEN_DSTATE 
};
TraceEvent _TRACE_SDCARD_INSERTED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_inserted",
    .sstate = TRACE_SDCARD_INSERTED_ENABLED,
    .dstate = &_TRACE_SDCARD_INSERTED_DSTATE 
};
TraceEvent _TRACE_SDCARD_EJECTED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_ejected",
    .sstate = TRACE_SDCARD_EJECTED_ENABLED,
    .dstate = &_TRACE_SDCARD_EJECTED_DSTATE 
};
TraceEvent _TRACE_SDCARD_ERASE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_erase",
    .sstate = TRACE_SDCARD_ERASE_ENABLED,
    .dstate = &_TRACE_SDCARD_ERASE_DSTATE 
};
TraceEvent _TRACE_SDCARD_LOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_lock",
    .sstate = TRACE_SDCARD_LOCK_ENABLED,
    .dstate = &_TRACE_SDCARD_LOCK_DSTATE 
};
TraceEvent _TRACE_SDCARD_UNLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_unlock",
    .sstate = TRACE_SDCARD_UNLOCK_ENABLED,
    .dstate = &_TRACE_SDCARD_UNLOCK_DSTATE 
};
TraceEvent _TRACE_SDCARD_READ_BLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_read_block",
    .sstate = TRACE_SDCARD_READ_BLOCK_ENABLED,
    .dstate = &_TRACE_SDCARD_READ_BLOCK_DSTATE 
};
TraceEvent _TRACE_SDCARD_WRITE_BLOCK_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_write_block",
    .sstate = TRACE_SDCARD_WRITE_BLOCK_ENABLED,
    .dstate = &_TRACE_SDCARD_WRITE_BLOCK_DSTATE 
};
TraceEvent _TRACE_SDCARD_WRITE_DATA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_write_data",
    .sstate = TRACE_SDCARD_WRITE_DATA_ENABLED,
    .dstate = &_TRACE_SDCARD_WRITE_DATA_DSTATE 
};
TraceEvent _TRACE_SDCARD_READ_DATA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_read_data",
    .sstate = TRACE_SDCARD_READ_DATA_ENABLED,
    .dstate = &_TRACE_SDCARD_READ_DATA_DSTATE 
};
TraceEvent _TRACE_SDCARD_SET_VOLTAGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sdcard_set_voltage",
    .sstate = TRACE_SDCARD_SET_VOLTAGE_ENABLED,
    .dstate = &_TRACE_SDCARD_SET_VOLTAGE_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_MEMCARD_MEMORY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_memcard_memory_read",
    .sstate = TRACE_MILKYMIST_MEMCARD_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_MEMCARD_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_memcard_memory_write",
    .sstate = TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_DSTATE 
};
TraceEvent _TRACE_PXA2XX_MMCI_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pxa2xx_mmci_read",
    .sstate = TRACE_PXA2XX_MMCI_READ_ENABLED,
    .dstate = &_TRACE_PXA2XX_MMCI_READ_DSTATE 
};
TraceEvent _TRACE_PXA2XX_MMCI_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pxa2xx_mmci_write",
    .sstate = TRACE_PXA2XX_MMCI_WRITE_ENABLED,
    .dstate = &_TRACE_PXA2XX_MMCI_WRITE_DSTATE 
};
TraceEvent *hw_sd_trace_events[] = {
    &_TRACE_BCM2835_SDHOST_READ_EVENT,
    &_TRACE_BCM2835_SDHOST_WRITE_EVENT,
    &_TRACE_BCM2835_SDHOST_EDM_CHANGE_EVENT,
    &_TRACE_BCM2835_SDHOST_UPDATE_IRQ_EVENT,
    &_TRACE_SDBUS_COMMAND_EVENT,
    &_TRACE_SDBUS_READ_EVENT,
    &_TRACE_SDBUS_WRITE_EVENT,
    &_TRACE_SDBUS_SET_VOLTAGE_EVENT,
    &_TRACE_SDBUS_GET_DAT_LINES_EVENT,
    &_TRACE_SDBUS_GET_CMD_LINE_EVENT,
    &_TRACE_SDHCI_SET_INSERTED_EVENT,
    &_TRACE_SDHCI_SEND_COMMAND_EVENT,
    &_TRACE_SDHCI_ERROR_EVENT,
    &_TRACE_SDHCI_RESPONSE4_EVENT,
    &_TRACE_SDHCI_RESPONSE16_EVENT,
    &_TRACE_SDHCI_END_TRANSFER_EVENT,
    &_TRACE_SDHCI_ADMA_EVENT,
    &_TRACE_SDHCI_ADMA_LOOP_EVENT,
    &_TRACE_SDHCI_ADMA_TRANSFER_COMPLETED_EVENT,
    &_TRACE_SDHCI_ACCESS_EVENT,
    &_TRACE_SDHCI_READ_DATAPORT_EVENT,
    &_TRACE_SDHCI_WRITE_DATAPORT_EVENT,
    &_TRACE_SDHCI_CAPAREG_EVENT,
    &_TRACE_SDCARD_NORMAL_COMMAND_EVENT,
    &_TRACE_SDCARD_APP_COMMAND_EVENT,
    &_TRACE_SDCARD_RESPONSE_EVENT,
    &_TRACE_SDCARD_POWERUP_EVENT,
    &_TRACE_SDCARD_INQUIRY_CMD41_EVENT,
    &_TRACE_SDCARD_RESET_EVENT,
    &_TRACE_SDCARD_SET_BLOCKLEN_EVENT,
    &_TRACE_SDCARD_INSERTED_EVENT,
    &_TRACE_SDCARD_EJECTED_EVENT,
    &_TRACE_SDCARD_ERASE_EVENT,
    &_TRACE_SDCARD_LOCK_EVENT,
    &_TRACE_SDCARD_UNLOCK_EVENT,
    &_TRACE_SDCARD_READ_BLOCK_EVENT,
    &_TRACE_SDCARD_WRITE_BLOCK_EVENT,
    &_TRACE_SDCARD_WRITE_DATA_EVENT,
    &_TRACE_SDCARD_READ_DATA_EVENT,
    &_TRACE_SDCARD_SET_VOLTAGE_EVENT,
    &_TRACE_MILKYMIST_MEMCARD_MEMORY_READ_EVENT,
    &_TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_EVENT,
    &_TRACE_PXA2XX_MMCI_READ_EVENT,
    &_TRACE_PXA2XX_MMCI_WRITE_EVENT,
  NULL,
};

static void trace_hw_sd_register_events(void)
{
    trace_event_register_group(hw_sd_trace_events);
}
trace_init(trace_hw_sd_register_events)
