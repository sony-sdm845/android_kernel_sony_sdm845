/*
 * Copyright (c) 2016-2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_REO_QUEUE_EXT_H_
#define _RX_REO_QUEUE_EXT_H_
#if !defined(__ASSEMBLER__)
#endif

#include "uniform_descriptor_header.h"
#include "rx_mpdu_link_ptr.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	struct uniform_descriptor_header descriptor_header;
//	1	reserved_1a[31:0]
//	2-3	struct rx_mpdu_link_ptr mpdu_link_pointer_0;
//	4-5	struct rx_mpdu_link_ptr mpdu_link_pointer_1;
//	6-7	struct rx_mpdu_link_ptr mpdu_link_pointer_2;
//	8-9	struct rx_mpdu_link_ptr mpdu_link_pointer_3;
//	10-11	struct rx_mpdu_link_ptr mpdu_link_pointer_4;
//	12-13	struct rx_mpdu_link_ptr mpdu_link_pointer_5;
//	14-15	struct rx_mpdu_link_ptr mpdu_link_pointer_6;
//	16-17	struct rx_mpdu_link_ptr mpdu_link_pointer_7;
//	18-19	struct rx_mpdu_link_ptr mpdu_link_pointer_8;
//	20-21	struct rx_mpdu_link_ptr mpdu_link_pointer_9;
//	22-23	struct rx_mpdu_link_ptr mpdu_link_pointer_10;
//	24-25	struct rx_mpdu_link_ptr mpdu_link_pointer_11;
//	26-27	struct rx_mpdu_link_ptr mpdu_link_pointer_12;
//	28-29	struct rx_mpdu_link_ptr mpdu_link_pointer_13;
//	30-31	struct rx_mpdu_link_ptr mpdu_link_pointer_14;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_REO_QUEUE_EXT 32

struct rx_reo_queue_ext {
    struct            uniform_descriptor_header                       descriptor_header;
             uint32_t reserved_1a                     : 32; //[31:0]
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_0;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_1;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_2;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_3;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_4;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_5;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_6;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_7;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_8;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_9;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_10;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_11;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_12;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_13;
    struct            rx_mpdu_link_ptr                       mpdu_link_pointer_14;
};

/*

struct uniform_descriptor_header descriptor_header
			
			Details about which module owns this struct.
			
			Note that sub field Buffer_type shall be set to
			Receive_REO_queue_ext_descriptor

reserved_1a
			
			<legal 0>

struct rx_mpdu_link_ptr mpdu_link_pointer_0
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_1
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_2
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_3
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_4
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_5
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_6
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_7
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_8
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_9
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_10
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_11
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_12
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_13
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue

struct rx_mpdu_link_ptr mpdu_link_pointer_14
			
			Consumer: REO
			
			Producer: REO
			
			
			
			Pointer to the next MPDU_link descriptor in the MPDU
			queue
*/

#define RX_REO_QUEUE_EXT_0_UNIFORM_DESCRIPTOR_HEADER_DESCRIPTOR_HEADER_OFFSET 0x00000000
#define RX_REO_QUEUE_EXT_0_UNIFORM_DESCRIPTOR_HEADER_DESCRIPTOR_HEADER_LSB 0
#define RX_REO_QUEUE_EXT_0_UNIFORM_DESCRIPTOR_HEADER_DESCRIPTOR_HEADER_MASK 0xffffffff

/* Description		RX_REO_QUEUE_EXT_1_RESERVED_1A
			
			<legal 0>
*/
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_OFFSET                        0x00000004
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_LSB                           0
#define RX_REO_QUEUE_EXT_1_RESERVED_1A_MASK                          0xffffffff
#define RX_REO_QUEUE_EXT_2_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_OFFSET 0x00000008
#define RX_REO_QUEUE_EXT_2_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_LSB  0
#define RX_REO_QUEUE_EXT_2_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_3_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_OFFSET 0x0000000c
#define RX_REO_QUEUE_EXT_3_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_LSB  0
#define RX_REO_QUEUE_EXT_3_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_0_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_4_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_OFFSET 0x00000010
#define RX_REO_QUEUE_EXT_4_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_LSB  0
#define RX_REO_QUEUE_EXT_4_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_5_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_OFFSET 0x00000014
#define RX_REO_QUEUE_EXT_5_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_LSB  0
#define RX_REO_QUEUE_EXT_5_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_1_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_6_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_OFFSET 0x00000018
#define RX_REO_QUEUE_EXT_6_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_LSB  0
#define RX_REO_QUEUE_EXT_6_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_7_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_OFFSET 0x0000001c
#define RX_REO_QUEUE_EXT_7_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_LSB  0
#define RX_REO_QUEUE_EXT_7_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_2_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_8_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_OFFSET 0x00000020
#define RX_REO_QUEUE_EXT_8_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_LSB  0
#define RX_REO_QUEUE_EXT_8_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_9_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_OFFSET 0x00000024
#define RX_REO_QUEUE_EXT_9_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_LSB  0
#define RX_REO_QUEUE_EXT_9_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_3_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_10_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_OFFSET 0x00000028
#define RX_REO_QUEUE_EXT_10_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_LSB 0
#define RX_REO_QUEUE_EXT_10_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_11_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_OFFSET 0x0000002c
#define RX_REO_QUEUE_EXT_11_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_LSB 0
#define RX_REO_QUEUE_EXT_11_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_4_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_12_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_OFFSET 0x00000030
#define RX_REO_QUEUE_EXT_12_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_LSB 0
#define RX_REO_QUEUE_EXT_12_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_13_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_OFFSET 0x00000034
#define RX_REO_QUEUE_EXT_13_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_LSB 0
#define RX_REO_QUEUE_EXT_13_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_5_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_14_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_OFFSET 0x00000038
#define RX_REO_QUEUE_EXT_14_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_LSB 0
#define RX_REO_QUEUE_EXT_14_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_15_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_OFFSET 0x0000003c
#define RX_REO_QUEUE_EXT_15_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_LSB 0
#define RX_REO_QUEUE_EXT_15_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_6_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_16_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_OFFSET 0x00000040
#define RX_REO_QUEUE_EXT_16_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_LSB 0
#define RX_REO_QUEUE_EXT_16_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_17_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_OFFSET 0x00000044
#define RX_REO_QUEUE_EXT_17_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_LSB 0
#define RX_REO_QUEUE_EXT_17_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_7_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_18_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_OFFSET 0x00000048
#define RX_REO_QUEUE_EXT_18_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_LSB 0
#define RX_REO_QUEUE_EXT_18_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_19_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_OFFSET 0x0000004c
#define RX_REO_QUEUE_EXT_19_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_LSB 0
#define RX_REO_QUEUE_EXT_19_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_8_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_20_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_OFFSET 0x00000050
#define RX_REO_QUEUE_EXT_20_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_LSB 0
#define RX_REO_QUEUE_EXT_20_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_21_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_OFFSET 0x00000054
#define RX_REO_QUEUE_EXT_21_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_LSB 0
#define RX_REO_QUEUE_EXT_21_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_9_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_22_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_OFFSET 0x00000058
#define RX_REO_QUEUE_EXT_22_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_LSB 0
#define RX_REO_QUEUE_EXT_22_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_23_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_OFFSET 0x0000005c
#define RX_REO_QUEUE_EXT_23_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_LSB 0
#define RX_REO_QUEUE_EXT_23_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_10_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_24_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_OFFSET 0x00000060
#define RX_REO_QUEUE_EXT_24_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_LSB 0
#define RX_REO_QUEUE_EXT_24_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_25_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_OFFSET 0x00000064
#define RX_REO_QUEUE_EXT_25_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_LSB 0
#define RX_REO_QUEUE_EXT_25_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_11_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_26_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_OFFSET 0x00000068
#define RX_REO_QUEUE_EXT_26_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_LSB 0
#define RX_REO_QUEUE_EXT_26_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_27_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_OFFSET 0x0000006c
#define RX_REO_QUEUE_EXT_27_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_LSB 0
#define RX_REO_QUEUE_EXT_27_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_12_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_28_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_OFFSET 0x00000070
#define RX_REO_QUEUE_EXT_28_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_LSB 0
#define RX_REO_QUEUE_EXT_28_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_29_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_OFFSET 0x00000074
#define RX_REO_QUEUE_EXT_29_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_LSB 0
#define RX_REO_QUEUE_EXT_29_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_13_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_30_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_OFFSET 0x00000078
#define RX_REO_QUEUE_EXT_30_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_LSB 0
#define RX_REO_QUEUE_EXT_30_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_MASK 0xffffffff
#define RX_REO_QUEUE_EXT_31_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_OFFSET 0x0000007c
#define RX_REO_QUEUE_EXT_31_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_LSB 0
#define RX_REO_QUEUE_EXT_31_RX_MPDU_LINK_PTR_MPDU_LINK_POINTER_14_MASK 0xffffffff


#endif // _RX_REO_QUEUE_EXT_H_
