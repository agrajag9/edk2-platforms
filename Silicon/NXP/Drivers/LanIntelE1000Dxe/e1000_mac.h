/**************************************************************************

Copyright (c) 2001-2010, Intel Corporation
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.

 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 3. Neither the name of the Intel Corporation nor the names of its
    contributors may be used to endorse or promote products derived from
    this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

***************************************************************************/

#ifndef _E1000_MAC_H_
#define _E1000_MAC_H_

/*
 * Functions that should not be called directly from drivers but can be used
 * by other files in this 'shared code'
 */
void e1000_init_mac_ops_generic(struct e1000_hw *hw);
#ifndef NO_NULL_OPS_SUPPORT
void e1000_null_mac_generic(struct e1000_hw *hw);
INT32  e1000_null_ops_generic(struct e1000_hw *hw);
INT32  e1000_null_link_info(struct e1000_hw *hw, UINT16 *s, UINT16 *d);
BOOLEAN e1000_null_mng_mode(struct e1000_hw *hw);
void e1000_null_update_mc(struct e1000_hw *hw, UINT8 *h, UINT32 a);
void e1000_null_write_vfta(struct e1000_hw *hw, UINT32 a, UINT32 b);
void e1000_null_rar_set(struct e1000_hw *hw, UINT8 *h, UINT32 a);
#endif /* NO_NULL_OPS_SUPPORT */
INT32  e1000_blink_led_generic(struct e1000_hw *hw);
INT32  e1000_check_for_copper_link_generic(struct e1000_hw *hw);
INT32  e1000_check_for_fiber_link_generic(struct e1000_hw *hw);
INT32  e1000_check_for_serdes_link_generic(struct e1000_hw *hw);
INT32  e1000_cleanup_led_generic(struct e1000_hw *hw);
INT32  e1000_config_fc_after_link_up_generic(struct e1000_hw *hw);
INT32  e1000_disable_pcie_master_generic(struct e1000_hw *hw);
INT32  e1000_force_mac_fc_generic(struct e1000_hw *hw);
INT32  e1000_get_auto_rd_done_generic(struct e1000_hw *hw);
#ifndef NO_PCI_SUPPORT
INT32  e1000_get_bus_info_pci_generic(struct e1000_hw *hw);
#endif
INT32  e1000_get_bus_info_pcie_generic(struct e1000_hw *hw);
void e1000_set_lan_id_single_port(struct e1000_hw *hw);
#ifndef NO_PCI_SUPPORT
void e1000_set_lan_id_multi_port_pci(struct e1000_hw *hw);
#endif
INT32  e1000_get_hw_semaphore_generic(struct e1000_hw *hw);
INT32  e1000_get_speed_and_duplex_copper_generic(struct e1000_hw *hw, UINT16 *speed,
                                               UINT16 *duplex);
INT32  e1000_get_speed_and_duplex_fiber_serdes_generic(struct e1000_hw *hw,
                                                     UINT16 *speed, UINT16 *duplex);
INT32  e1000_id_led_init_generic(struct e1000_hw *hw);
INT32  e1000_led_on_generic(struct e1000_hw *hw);
INT32  e1000_led_off_generic(struct e1000_hw *hw);
void e1000_update_mc_addr_list_generic(struct e1000_hw *hw,
	                               UINT8 *mc_addr_list, UINT32 mc_addr_count);
INT32  e1000_set_fc_watermarks_generic(struct e1000_hw *hw);
INT32  e1000_setup_fiber_serdes_link_generic(struct e1000_hw *hw);
INT32  e1000_setup_led_generic(struct e1000_hw *hw);
INT32  e1000_setup_link_generic(struct e1000_hw *hw);
#ifndef NO_82575_SUPPORT
INT32  e1000_write_8bit_ctrl_reg_generic(struct e1000_hw *hw, UINT32 reg,
                                       UINT32 offset, UINT8 data);
#endif

UINT32  e1000_hash_mc_addr_generic(struct e1000_hw *hw, UINT8 *mc_addr);

void e1000_clear_hw_cntrs_base_generic(struct e1000_hw *hw);
void e1000_clear_vfta_generic(struct e1000_hw *hw);
void e1000_config_collision_dist_generic(struct e1000_hw *hw);
void e1000_init_rx_addrs_generic(struct e1000_hw *hw, UINT16 rar_count);
void e1000_pcix_mmrbc_workaround_generic(struct e1000_hw *hw);
void e1000_put_hw_semaphore_generic(struct e1000_hw *hw);
void e1000_rar_set_generic(struct e1000_hw *hw, UINT8 *addr, UINT32 index);
INT32  e1000_check_alt_mac_addr_generic(struct e1000_hw *hw);
void e1000_reset_adaptive_generic(struct e1000_hw *hw);
void e1000_set_pcie_no_snoop_generic(struct e1000_hw *hw, UINT32 no_snoop);
void e1000_update_adaptive_generic(struct e1000_hw *hw);
void e1000_write_vfta_generic(struct e1000_hw *hw, UINT32 offset, UINT32 value);

#endif
