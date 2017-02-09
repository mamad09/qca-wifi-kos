// Copyright (c) 2012 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _QUEUE_PAUSE_STATUS_H_
#define _QUEUE_PAUSE_STATUS_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	mpdu_qid[13:0], pause_status[14], reserved_0a[31:15]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_QUEUE_PAUSE_STATUS 1

struct queue_pause_status {
    volatile uint32_t mpdu_qid                        : 14, //[13:0]
                      pause_status                    :  1, //[14]
                      reserved_0a                     : 17; //[31:15]
};

/*

mpdu_qid
			
			Queue ID of the queue that is not empty anymore.
			
			 <legal all>

pause_status
			
			0: Queus is unpaused
			
			1: Queue is paused 
			
			 <legal all>

reserved_0a
			
			<legal 0>
*/


/* Description		QUEUE_PAUSE_STATUS_0_MPDU_QID
			
			Queue ID of the queue that is not empty anymore.
			
			 <legal all>
*/
#define QUEUE_PAUSE_STATUS_0_MPDU_QID_OFFSET                         0x00000000
#define QUEUE_PAUSE_STATUS_0_MPDU_QID_LSB                            0
#define QUEUE_PAUSE_STATUS_0_MPDU_QID_MASK                           0x00003fff

/* Description		QUEUE_PAUSE_STATUS_0_PAUSE_STATUS
			
			0: Queus is unpaused
			
			1: Queue is paused 
			
			 <legal all>
*/
#define QUEUE_PAUSE_STATUS_0_PAUSE_STATUS_OFFSET                     0x00000000
#define QUEUE_PAUSE_STATUS_0_PAUSE_STATUS_LSB                        14
#define QUEUE_PAUSE_STATUS_0_PAUSE_STATUS_MASK                       0x00004000

/* Description		QUEUE_PAUSE_STATUS_0_RESERVED_0A
			
			<legal 0>
*/
#define QUEUE_PAUSE_STATUS_0_RESERVED_0A_OFFSET                      0x00000000
#define QUEUE_PAUSE_STATUS_0_RESERVED_0A_LSB                         15
#define QUEUE_PAUSE_STATUS_0_RESERVED_0A_MASK                        0xffff8000


#endif // _QUEUE_PAUSE_STATUS_H_
