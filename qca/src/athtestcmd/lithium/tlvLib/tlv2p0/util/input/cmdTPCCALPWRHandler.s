#===============================================================================
# Copyright (c) 2017-2019 Qualcomm Technologies, Inc.
# All Rights Reserved.
# Confidential and Proprietary - Qualcomm Technologies, Inc.
#===============================================================================

#if !defined(WHAL_NUM_11G_CAL_PIERS)
#define WHAL_NUM_11G_CAL_PIERS  14
#define WHAL_NUM_11A_CAL_PIERS  32
#endif
#define WHAL_NUM_11A_CAL_PIERS_FTM  32
#if !defined(NUM_CAL_GAINS_2G)
#define NUM_CAL_GAINS_2G        13
#define NUM_CAL_GAINS_5G        13
#endif
#if !defined(MAX_NUM_CHAINS)
#define MAX_NUM_CHAINS          4
#endif

#define NUM_MEASURED_PWR        512
#define NUM_CALDATA_2G          256
#define NUM_CALDATA_5G          512
#ifndef FTM_MAX_NUM_FREQ_2G
#define FTM_MAX_NUM_FREQ_2G         14
#define FTM_MAX_NUM_FREQ_5G         64
#endif

# cmd
CMD= TPCCalPwr

# cmd parm
PARM_START:
INT16:measuredPwr:NUM_MEASURED_PWR:512:d:24:16
UINT8:radioId:1:u:0
UINT8:numMeasuredPwr:1:u:0
UINT8:phyId:1:u:0
PARM_END:

# rsp
RSP= TPCCalData

# rsp parm
PARM_START:
UINT8:miscFlags:1:u:0
UINT8:radioId:1:u:0
DATA256:calData2G:NUM_CALDATA_2G:256:u
UINT16:calData2GOffset:1:u:0
UINT16:calData2GLength:1:u:0
DATA512:calData5G:NUM_CALDATA_5G:512:u
UINT16:calData5GOffset:1:u:0
UINT16:calData5GLength:1:u:0
DATA256:calData2G_clpc:NUM_CALDATA_2G:256:u
UINT16:calData2GOffset_clpc:1:u:0
UINT16:calData2GLength_clpc:1:u:0
DATA512:calData5G_clpc:NUM_CALDATA_5G:512:u
UINT16:calData5GOffset_clpc:1:u:0
UINT16:calData5GLength_clpc:1:u:0
UINT8:numFreq2G:1:u:3
UINT8:freq2G:WHAL_NUM_11G_CAL_PIERS:14:u:112:137:172
UINT8:numFreq5G:1:u:8
UINT8:freq5G:WHAL_NUM_11A_CAL_PIERS_FTM:32:u:76:88:92:104:140:180:189:201
UINT16:chainMasks:MAX_NUM_CHAINS:4:x:0x1:0x2
UINT8:numChain:1:u:2
UINT8:numCALPt2G:1:u:13
INT16:tgtPwr2G:NUM_CAL_GAINS_2G:13:d:8:16:24:32:40:48:56:64:72:80:88:96:104
UINT8:CALPt2G:NUM_CAL_GAINS_2G:13:u:1:2:3:4:5:6:7:8:9:10:11:12:13
UINT8:txGains2G:NUM_CAL_GAINS_2G:13:u:1:2:3:4:5:6:7:8:9:10:11:12:13
UINT8:dacGains2G:NUM_CAL_GAINS_2G:13:u:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8
UINT8:paCfg2G:NUM_CAL_GAINS_2G:13:u:0:0:0:0:0:0:0:0:0:0:0:0:0
UINT8:pad1:1:u:0
UINT8:numCALPt5G:1:u:13
INT16:tgtPwr5G:NUM_CAL_GAINS_5G:13:d:8:16:24:32:40:48:56:64:72:80:88:96:104
UINT8:CALPt5G:NUM_CAL_GAINS_5G:13:u:1:2:3:4:5:6:7:8:9:10:11:12:13
UINT8:txGains5G:NUM_CAL_GAINS_5G:13:u:1:2:3:4:5:6:7:8:9:10:11:12:13
UINT8:dacGains5G:NUM_CAL_GAINS_5G:13:u:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8:-8
UINT8:paCfg5G:NUM_CAL_GAINS_5G:13:u:0:0:0:0:0:0:0:0:0:0:0:0:0
UINT8:phyId:1:u:0
UINT8:padding:1:u:0
UINT16:mhz2GArray:FTM_MAX_NUM_FREQ_2G:14:u
UINT16:mhz5GArray:FTM_MAX_NUM_FREQ_5G:64:u
PARM_END:

