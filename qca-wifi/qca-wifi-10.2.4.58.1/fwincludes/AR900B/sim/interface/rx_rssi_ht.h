// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_RSSI_HT_H_
#define _RX_RSSI_HT_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	rssi_pri_chain0[7:0], rssi_sec20_chain0[15:8], rssi_sec40_chain0[23:16], rssi_sec80_chain0[31:24]
//	1	rssi_pri_chain1[7:0], rssi_sec20_chain1[15:8], rssi_sec40_chain1[23:16], rssi_sec80_chain1[31:24]
//	2	rssi_pri_chain2[7:0], rssi_sec20_chain2[15:8], rssi_sec40_chain2[23:16], rssi_sec80_chain2[31:24]
//	3	rssi_pri_chain3[7:0], rssi_sec20_chain3[15:8], rssi_sec40_chain3[23:16], rssi_sec80_chain3[31:24]
//	4	rssi_comb[7:0], bandwidth[9:8], reserved[31:10]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_RSSI_HT 5

struct rx_rssi_ht {
    volatile uint32_t rssi_pri_chain0                 :  8, //[7:0]
                      rssi_sec20_chain0               :  8, //[15:8]
                      rssi_sec40_chain0               :  8, //[23:16]
                      rssi_sec80_chain0               :  8; //[31:24]
    volatile uint32_t rssi_pri_chain1                 :  8, //[7:0]
                      rssi_sec20_chain1               :  8, //[15:8]
                      rssi_sec40_chain1               :  8, //[23:16]
                      rssi_sec80_chain1               :  8; //[31:24]
    volatile uint32_t rssi_pri_chain2                 :  8, //[7:0]
                      rssi_sec20_chain2               :  8, //[15:8]
                      rssi_sec40_chain2               :  8, //[23:16]
                      rssi_sec80_chain2               :  8; //[31:24]
    volatile uint32_t rssi_pri_chain3                 :  8, //[7:0]
                      rssi_sec20_chain3               :  8, //[15:8]
                      rssi_sec40_chain3               :  8, //[23:16]
                      rssi_sec80_chain3               :  8; //[31:24]
    volatile uint32_t rssi_comb                       :  8, //[7:0]
                      bandwidth                       :  2, //[9:8]
                      reserved                        : 22; //[31:10]
};

/*

rssi_pri_chain0
			
			RSSI for the primary 20 MHz channel on chain 0.  Note:
			value of 0x80 indicates invalid RSSI.  This applies to all
			RSSI fields <legal all>

rssi_sec20_chain0
			
			RSSI for the secondary 20 MHz channel on chain 0  <legal
			all>

rssi_sec40_chain0
			
			RSSI for the secondary 40 MHz channel on chain 0  <legal
			all>

rssi_sec80_chain0
			
			RSSI for the secondary 80 MHz channel on chain 0 (Not
			supported)  <legal 0>

rssi_pri_chain1
			
			RSSI for the primary 20 MHz channel on chain 1  <legal
			all>

rssi_sec20_chain1
			
			RSSI for the secondary 20 MHz channel on chain 1  <legal
			all>

rssi_sec40_chain1
			
			RSSI for the secondary 40 MHz channel on chain 1  <legal
			all>

rssi_sec80_chain1
			
			RSSI for the secondary 80 MHz channel on chain 1 (Not
			supported)  <legal 0>

rssi_pri_chain2
			
			RSSI for the primary 20 MHz channel on chain 2  <legal
			all>

rssi_sec20_chain2
			
			RSSI for the secondary 20 MHz channel on chain 2  <legal
			all>

rssi_sec40_chain2
			
			RSSI for the secondary 40 MHz channel on chain 2  <legal
			all>

rssi_sec80_chain2
			
			RSSI for the secondary 80 MHz channel on chain 2 (Not
			supported)  <legal 0>

rssi_pri_chain3
			
			RSSI for the primary 20 MHz channel on chain 3 (Not
			supported)  <legal 0>

rssi_sec20_chain3
			
			RSSI for the secondary 20 MHz channel on chain 3 (Not
			supported)  <legal 0>

rssi_sec40_chain3
			
			RSSI for the secondary 40 MHz channel on chain 3 (Not
			supported)  <legal 0>

rssi_sec80_chain3
			
			RSSI for the secondary 80 MHz channel on chain 2 (Not
			supported)  <legal 0>

rssi_comb
			
			Combined RSSI for the all channels and all chains 
			<legal all>

bandwidth
			
			Bandwidth field detected by PHY AGC, prior to decoding
			of (V)HT-SIG fields.
			
			<enum_typedef tx_phy_desc bandwidth>
			
			<enum 0     20_mhz>
			
			<enum 1     40_mhz>
			
			<enum 2     80_mhz>
			
			<enum 3     160_mhz> Unsupported
			
			<valid 0-2>

reserved
			
			Reserved.  Should always be set to 0 and ignored on
			reception.  <legal 0>
*/


/* Description		RX_RSSI_HT_0_RSSI_PRI_CHAIN0
			
			RSSI for the primary 20 MHz channel on chain 0.  Note:
			value of 0x80 indicates invalid RSSI.  This applies to all
			RSSI fields <legal all>
*/
#define RX_RSSI_HT_0_RSSI_PRI_CHAIN0_OFFSET                          0x00000000
#define RX_RSSI_HT_0_RSSI_PRI_CHAIN0_LSB                             0
#define RX_RSSI_HT_0_RSSI_PRI_CHAIN0_MASK                            0x000000ff

/* Description		RX_RSSI_HT_0_RSSI_SEC20_CHAIN0
			
			RSSI for the secondary 20 MHz channel on chain 0  <legal
			all>
*/
#define RX_RSSI_HT_0_RSSI_SEC20_CHAIN0_OFFSET                        0x00000000
#define RX_RSSI_HT_0_RSSI_SEC20_CHAIN0_LSB                           8
#define RX_RSSI_HT_0_RSSI_SEC20_CHAIN0_MASK                          0x0000ff00

/* Description		RX_RSSI_HT_0_RSSI_SEC40_CHAIN0
			
			RSSI for the secondary 40 MHz channel on chain 0  <legal
			all>
*/
#define RX_RSSI_HT_0_RSSI_SEC40_CHAIN0_OFFSET                        0x00000000
#define RX_RSSI_HT_0_RSSI_SEC40_CHAIN0_LSB                           16
#define RX_RSSI_HT_0_RSSI_SEC40_CHAIN0_MASK                          0x00ff0000

/* Description		RX_RSSI_HT_0_RSSI_SEC80_CHAIN0
			
			RSSI for the secondary 80 MHz channel on chain 0 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_0_RSSI_SEC80_CHAIN0_OFFSET                        0x00000000
#define RX_RSSI_HT_0_RSSI_SEC80_CHAIN0_LSB                           24
#define RX_RSSI_HT_0_RSSI_SEC80_CHAIN0_MASK                          0xff000000

/* Description		RX_RSSI_HT_1_RSSI_PRI_CHAIN1
			
			RSSI for the primary 20 MHz channel on chain 1  <legal
			all>
*/
#define RX_RSSI_HT_1_RSSI_PRI_CHAIN1_OFFSET                          0x00000004
#define RX_RSSI_HT_1_RSSI_PRI_CHAIN1_LSB                             0
#define RX_RSSI_HT_1_RSSI_PRI_CHAIN1_MASK                            0x000000ff

/* Description		RX_RSSI_HT_1_RSSI_SEC20_CHAIN1
			
			RSSI for the secondary 20 MHz channel on chain 1  <legal
			all>
*/
#define RX_RSSI_HT_1_RSSI_SEC20_CHAIN1_OFFSET                        0x00000004
#define RX_RSSI_HT_1_RSSI_SEC20_CHAIN1_LSB                           8
#define RX_RSSI_HT_1_RSSI_SEC20_CHAIN1_MASK                          0x0000ff00

/* Description		RX_RSSI_HT_1_RSSI_SEC40_CHAIN1
			
			RSSI for the secondary 40 MHz channel on chain 1  <legal
			all>
*/
#define RX_RSSI_HT_1_RSSI_SEC40_CHAIN1_OFFSET                        0x00000004
#define RX_RSSI_HT_1_RSSI_SEC40_CHAIN1_LSB                           16
#define RX_RSSI_HT_1_RSSI_SEC40_CHAIN1_MASK                          0x00ff0000

/* Description		RX_RSSI_HT_1_RSSI_SEC80_CHAIN1
			
			RSSI for the secondary 80 MHz channel on chain 1 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_1_RSSI_SEC80_CHAIN1_OFFSET                        0x00000004
#define RX_RSSI_HT_1_RSSI_SEC80_CHAIN1_LSB                           24
#define RX_RSSI_HT_1_RSSI_SEC80_CHAIN1_MASK                          0xff000000

/* Description		RX_RSSI_HT_2_RSSI_PRI_CHAIN2
			
			RSSI for the primary 20 MHz channel on chain 2  <legal
			all>
*/
#define RX_RSSI_HT_2_RSSI_PRI_CHAIN2_OFFSET                          0x00000008
#define RX_RSSI_HT_2_RSSI_PRI_CHAIN2_LSB                             0
#define RX_RSSI_HT_2_RSSI_PRI_CHAIN2_MASK                            0x000000ff

/* Description		RX_RSSI_HT_2_RSSI_SEC20_CHAIN2
			
			RSSI for the secondary 20 MHz channel on chain 2  <legal
			all>
*/
#define RX_RSSI_HT_2_RSSI_SEC20_CHAIN2_OFFSET                        0x00000008
#define RX_RSSI_HT_2_RSSI_SEC20_CHAIN2_LSB                           8
#define RX_RSSI_HT_2_RSSI_SEC20_CHAIN2_MASK                          0x0000ff00

/* Description		RX_RSSI_HT_2_RSSI_SEC40_CHAIN2
			
			RSSI for the secondary 40 MHz channel on chain 2  <legal
			all>
*/
#define RX_RSSI_HT_2_RSSI_SEC40_CHAIN2_OFFSET                        0x00000008
#define RX_RSSI_HT_2_RSSI_SEC40_CHAIN2_LSB                           16
#define RX_RSSI_HT_2_RSSI_SEC40_CHAIN2_MASK                          0x00ff0000

/* Description		RX_RSSI_HT_2_RSSI_SEC80_CHAIN2
			
			RSSI for the secondary 80 MHz channel on chain 2 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_2_RSSI_SEC80_CHAIN2_OFFSET                        0x00000008
#define RX_RSSI_HT_2_RSSI_SEC80_CHAIN2_LSB                           24
#define RX_RSSI_HT_2_RSSI_SEC80_CHAIN2_MASK                          0xff000000

/* Description		RX_RSSI_HT_3_RSSI_PRI_CHAIN3
			
			RSSI for the primary 20 MHz channel on chain 3 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_3_RSSI_PRI_CHAIN3_OFFSET                          0x0000000c
#define RX_RSSI_HT_3_RSSI_PRI_CHAIN3_LSB                             0
#define RX_RSSI_HT_3_RSSI_PRI_CHAIN3_MASK                            0x000000ff

/* Description		RX_RSSI_HT_3_RSSI_SEC20_CHAIN3
			
			RSSI for the secondary 20 MHz channel on chain 3 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_3_RSSI_SEC20_CHAIN3_OFFSET                        0x0000000c
#define RX_RSSI_HT_3_RSSI_SEC20_CHAIN3_LSB                           8
#define RX_RSSI_HT_3_RSSI_SEC20_CHAIN3_MASK                          0x0000ff00

/* Description		RX_RSSI_HT_3_RSSI_SEC40_CHAIN3
			
			RSSI for the secondary 40 MHz channel on chain 3 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_3_RSSI_SEC40_CHAIN3_OFFSET                        0x0000000c
#define RX_RSSI_HT_3_RSSI_SEC40_CHAIN3_LSB                           16
#define RX_RSSI_HT_3_RSSI_SEC40_CHAIN3_MASK                          0x00ff0000

/* Description		RX_RSSI_HT_3_RSSI_SEC80_CHAIN3
			
			RSSI for the secondary 80 MHz channel on chain 2 (Not
			supported)  <legal 0>
*/
#define RX_RSSI_HT_3_RSSI_SEC80_CHAIN3_OFFSET                        0x0000000c
#define RX_RSSI_HT_3_RSSI_SEC80_CHAIN3_LSB                           24
#define RX_RSSI_HT_3_RSSI_SEC80_CHAIN3_MASK                          0xff000000

/* Description		RX_RSSI_HT_4_RSSI_COMB
			
			Combined RSSI for the all channels and all chains 
			<legal all>
*/
#define RX_RSSI_HT_4_RSSI_COMB_OFFSET                                0x00000010
#define RX_RSSI_HT_4_RSSI_COMB_LSB                                   0
#define RX_RSSI_HT_4_RSSI_COMB_MASK                                  0x000000ff

/* Description		RX_RSSI_HT_4_BANDWIDTH
			
			Bandwidth field detected by PHY AGC, prior to decoding
			of (V)HT-SIG fields.
			
			<enum_typedef tx_phy_desc bandwidth>
			
			<enum 0     20_mhz>
			
			<enum 1     40_mhz>
			
			<enum 2     80_mhz>
			
			<enum 3     160_mhz> Unsupported
			
			<valid 0-2>
*/
#define RX_RSSI_HT_4_BANDWIDTH_OFFSET                                0x00000010
#define RX_RSSI_HT_4_BANDWIDTH_LSB                                   8
#define RX_RSSI_HT_4_BANDWIDTH_MASK                                  0x00000300

/* Description		RX_RSSI_HT_4_RESERVED
			
			Reserved.  Should always be set to 0 and ignored on
			reception.  <legal 0>
*/
#define RX_RSSI_HT_4_RESERVED_OFFSET                                 0x00000010
#define RX_RSSI_HT_4_RESERVED_LSB                                    10
#define RX_RSSI_HT_4_RESERVED_MASK                                   0xfffffc00


#endif // _RX_RSSI_HT_H_
