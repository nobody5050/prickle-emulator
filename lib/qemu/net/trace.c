/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_QEMU_ANNOUNCE_SELF_ITER_DSTATE;
uint16_t _TRACE_VHOST_USER_EVENT_DSTATE;
uint16_t _TRACE_COLO_PROXY_MAIN_DSTATE;
uint16_t _TRACE_COLO_COMPARE_MAIN_DSTATE;
uint16_t _TRACE_COLO_COMPARE_UDP_MISCOMPARE_DSTATE;
uint16_t _TRACE_COLO_COMPARE_ICMP_MISCOMPARE_DSTATE;
uint16_t _TRACE_COLO_COMPARE_IP_INFO_DSTATE;
uint16_t _TRACE_COLO_OLD_PACKET_CHECK_FOUND_DSTATE;
uint16_t _TRACE_COLO_COMPARE_MISCOMPARE_DSTATE;
uint16_t _TRACE_COLO_COMPARE_TCP_INFO_DSTATE;
uint16_t _TRACE_COLO_FILTER_REWRITER_DEBUG_DSTATE;
uint16_t _TRACE_COLO_FILTER_REWRITER_PKT_INFO_DSTATE;
uint16_t _TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_DSTATE;
TraceEvent _TRACE_QEMU_ANNOUNCE_SELF_ITER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qemu_announce_self_iter",
    .sstate = TRACE_QEMU_ANNOUNCE_SELF_ITER_ENABLED,
    .dstate = &_TRACE_QEMU_ANNOUNCE_SELF_ITER_DSTATE 
};
TraceEvent _TRACE_VHOST_USER_EVENT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "vhost_user_event",
    .sstate = TRACE_VHOST_USER_EVENT_ENABLED,
    .dstate = &_TRACE_VHOST_USER_EVENT_DSTATE 
};
TraceEvent _TRACE_COLO_PROXY_MAIN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_proxy_main",
    .sstate = TRACE_COLO_PROXY_MAIN_ENABLED,
    .dstate = &_TRACE_COLO_PROXY_MAIN_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_MAIN_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_main",
    .sstate = TRACE_COLO_COMPARE_MAIN_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_MAIN_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_UDP_MISCOMPARE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_udp_miscompare",
    .sstate = TRACE_COLO_COMPARE_UDP_MISCOMPARE_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_UDP_MISCOMPARE_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_ICMP_MISCOMPARE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_icmp_miscompare",
    .sstate = TRACE_COLO_COMPARE_ICMP_MISCOMPARE_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_ICMP_MISCOMPARE_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_IP_INFO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_ip_info",
    .sstate = TRACE_COLO_COMPARE_IP_INFO_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_IP_INFO_DSTATE 
};
TraceEvent _TRACE_COLO_OLD_PACKET_CHECK_FOUND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_old_packet_check_found",
    .sstate = TRACE_COLO_OLD_PACKET_CHECK_FOUND_ENABLED,
    .dstate = &_TRACE_COLO_OLD_PACKET_CHECK_FOUND_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_MISCOMPARE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_miscompare",
    .sstate = TRACE_COLO_COMPARE_MISCOMPARE_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_MISCOMPARE_DSTATE 
};
TraceEvent _TRACE_COLO_COMPARE_TCP_INFO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_compare_tcp_info",
    .sstate = TRACE_COLO_COMPARE_TCP_INFO_ENABLED,
    .dstate = &_TRACE_COLO_COMPARE_TCP_INFO_DSTATE 
};
TraceEvent _TRACE_COLO_FILTER_REWRITER_DEBUG_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_filter_rewriter_debug",
    .sstate = TRACE_COLO_FILTER_REWRITER_DEBUG_ENABLED,
    .dstate = &_TRACE_COLO_FILTER_REWRITER_DEBUG_DSTATE 
};
TraceEvent _TRACE_COLO_FILTER_REWRITER_PKT_INFO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_filter_rewriter_pkt_info",
    .sstate = TRACE_COLO_FILTER_REWRITER_PKT_INFO_ENABLED,
    .dstate = &_TRACE_COLO_FILTER_REWRITER_PKT_INFO_DSTATE 
};
TraceEvent _TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "colo_filter_rewriter_conn_offset",
    .sstate = TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_ENABLED,
    .dstate = &_TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_DSTATE 
};
TraceEvent *net_trace_events[] = {
    &_TRACE_QEMU_ANNOUNCE_SELF_ITER_EVENT,
    &_TRACE_VHOST_USER_EVENT_EVENT,
    &_TRACE_COLO_PROXY_MAIN_EVENT,
    &_TRACE_COLO_COMPARE_MAIN_EVENT,
    &_TRACE_COLO_COMPARE_UDP_MISCOMPARE_EVENT,
    &_TRACE_COLO_COMPARE_ICMP_MISCOMPARE_EVENT,
    &_TRACE_COLO_COMPARE_IP_INFO_EVENT,
    &_TRACE_COLO_OLD_PACKET_CHECK_FOUND_EVENT,
    &_TRACE_COLO_COMPARE_MISCOMPARE_EVENT,
    &_TRACE_COLO_COMPARE_TCP_INFO_EVENT,
    &_TRACE_COLO_FILTER_REWRITER_DEBUG_EVENT,
    &_TRACE_COLO_FILTER_REWRITER_PKT_INFO_EVENT,
    &_TRACE_COLO_FILTER_REWRITER_CONN_OFFSET_EVENT,
  NULL,
};

static void trace_net_register_events(void)
{
    trace_event_register_group(net_trace_events);
}
trace_init(trace_net_register_events)
