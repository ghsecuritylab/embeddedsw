/*
 * Copyright (C) 2014 - 2015 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * Use of the Software is limited solely to applications:
 * (a) running on a Xilinx device, or
 * (b) that interact with a Xilinx device through a bus or interconnect.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of the Xilinx shall not be used
 * in advertising or otherwise to promote the sale, use or other dealings in
 * this Software without prior written authorization from Xilinx.
 */

/*********************************************************************
 * Definitions of commonly used functions for debugging PMU Power
 * Management (PM). Conditionaly compiled code for debugging is not
 * intended to be MISRA compliant.
 *********************************************************************/

#include "pm_common.h"
#include "pm_defs.h"
#include "pm_master.h"

#ifdef DEBUG_PM

/**
 * PmStrNode() - Converts integer node id into node string
 * @node        Node id to be converted to string
 *
 * @return      String name of given node id
 */
const char* PmStrNode(const u32 node)
{
	switch (node) {
	case NODE_APU:
		return "NODE_APU";
	case NODE_APU_0:
		return "NODE_APU_0";
	case NODE_APU_1:
		return "NODE_APU_1";
	case NODE_APU_2:
		return "NODE_APU_2";
	case NODE_APU_3:
		return "NODE_APU_3";
	case NODE_RPU:
		return "NODE_RPU";
	case NODE_RPU_0:
		return "NODE_RPU_0";
	case NODE_RPU_1:
		return "NODE_RPU_1";
	case NODE_PL:
		return "NODE_PL";
	case NODE_FPD:
		return "NODE_FPD";
	case NODE_OCM_BANK_0:
		return "NODE_OCM_BANK_0";
	case NODE_OCM_BANK_1:
		return "NODE_OCM_BANK_1";
	case NODE_OCM_BANK_2:
		return "NODE_OCM_BANK_2";
	case NODE_OCM_BANK_3:
		return "NODE_OCM_BANK_3";
	case NODE_TCM_0_A:
		return "NODE_TCM_0_A";
	case NODE_TCM_0_B:
		return "NODE_TCM_0_B";
	case NODE_TCM_1_A:
		return "NODE_TCM_1_A";
	case NODE_TCM_1_B:
		return "NODE_TCM_1_B";
	case NODE_L2:
		return "NODE_L2";
	case NODE_GPU_PP_0:
		return "NODE_GPU_PP_0";
	case NODE_GPU_PP_1:
		return "NODE_GPU_PP_1";
	case NODE_USB_0:
		return "NODE_USB_0";
	case NODE_USB_1:
		return "NODE_USB_1";
	case NODE_TTC_0:
		return "NODE_TTC_0";
	case NODE_SATA:
		return "NODE_SATA";
	case NODE_APLL:
		return "NODE_APLL";
	case NODE_VPLL:
		return "NODE_VPLL";
	case NODE_DPLL:
		return "NODE_DPLL";
	case NODE_RPLL:
		return "NODE_RPLL";
	case NODE_IOPLL:
		return "NODE_IOPLL";
	default:
		return "ERROR_NODE";
	}
}

/**
 * PmStrAck() - Converts integer acknowledge into matching string
 * @ack        Acknowlegde integer id to be converted to string
 *
 * @return     String name of given acknowledge id
 */
const char* PmStrAck(const u32 ack)
{
	switch (ack) {
	case REQUEST_ACK_NO:
		return "REQUEST_ACK_NO";
	case REQUEST_ACK_BLOCKING:
		return "REQUEST_ACK_BLOCKING";
	case REQUEST_ACK_CB_STANDARD:
		return "REQUEST_ACK_CB_STANDARD";
	case REQUEST_ACK_CB_ERROR:
		return "REQUEST_ACK_CB_ERROR";
	default:
		return "ERROR_ACK";
	}
}

/**
 * PmStrReason() - Converts integer reason id into matching string
 * @reason      Integer reason id to be converted
 *
 * @return      String name of given reason integer
 */
const char* PmStrReason(const u32 reason)
{
	switch (reason) {
	case ABORT_REASON_WKUP_EVENT:
		return "ABORT_REASON_WKUP_EVENT";
	case ABORT_REASON_PU_BUSY:
		return "ABORT_REASON_PU_BUSY";
	case ABORT_REASON_NO_PWRDN:
		return "ABORT_REASON_NO_PWRDN";
	case ABORT_REASON_UNKNOWN:
		return "ABORT_REASON_UNKNOWN";
	default:
		return "ERROR_REASON";
	}
}

#endif /* DEBUG_PM */
