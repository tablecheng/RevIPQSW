/* Copyright (c) 2018-2019 Qualcomm Technologies, Inc.
 * All Rights Reserved.
 * Confidential and Proprietary - Qualcomm Technologies, Inc.
 */
// This is an auto-generated file from input/cmdConfigureSpectralScan.s
#include "tlv2Inc.h"
#include "cmdConfigureSpectralScan.h"

void* initCONFIGURESPECTRALSCANOpParms(A_UINT8 *pParmsCommon, PARM_OFFSET_TBL *pParmsOffset, PARM_DICT *pParmDict)
{
    int i, j; 	//for initializing array parameter
    CMD_CONFIGURESPECTRALSCAN_PARMS  *pCONFIGURESPECTRALSCANParms = (CMD_CONFIGURESPECTRALSCAN_PARMS *)pParmsCommon;

    if (pParmsCommon == NULL) return (NULL);

    i = j = 0;	//assign a number to avoid warning in case i and j are not used

    // Populate the parm structure with initial values
    pCONFIGURESPECTRALSCANParms->freq = pParmDict[PARM_FREQ].v.valU16;
    pCONFIGURESPECTRALSCANParms->freq2 = pParmDict[PARM_FREQ2].v.valU16;
    pCONFIGURESPECTRALSCANParms->chainMask = pParmDict[PARM_CHAINMASK].v.valU16;
    pCONFIGURESPECTRALSCANParms->bandwidth = pParmDict[PARM_BANDWIDTH].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanCount = pParmDict[PARM_SCANCOUNT].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanPeriod = pParmDict[PARM_SCANPERIOD].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanPriority = pParmDict[PARM_SCANPRIORITY].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanFFTSize = pParmDict[PARM_SCANFFTSIZE].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanGCEna = pParmDict[PARM_SCANGCENA].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanRestartEna = pParmDict[PARM_SCANRESTARTENA].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanInitDelay = pParmDict[PARM_SCANINITDELAY].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanNBToneThr = pParmDict[PARM_SCANNBTONETHR].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanStrBinThr = pParmDict[PARM_SCANSTRBINTHR].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanWBRptMode = pParmDict[PARM_SCANWBRPTMODE].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanRssiRptMode = pParmDict[PARM_SCANRSSIRPTMODE].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanPwrFormat = pParmDict[PARM_SCANPWRFORMAT].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanRptMode = pParmDict[PARM_SCANRPTMODE].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanBinScale = pParmDict[PARM_SCANBINSCALE].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScandBmAdj = pParmDict[PARM_SCANDBMADJ].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanChnMask = pParmDict[PARM_SCANCHNMASK].v.valU8;
    pCONFIGURESPECTRALSCANParms->phyId = pParmDict[PARM_PHYID].v.valU8;
    pCONFIGURESPECTRALSCANParms->ScanRssiThr = pParmDict[PARM_SCANRSSITHR].v.valS32;
    pCONFIGURESPECTRALSCANParms->ScanNoiseFloorRef = pParmDict[PARM_SCANNOISEFLOORREF].v.valS32;

    // Make up ParmOffsetTbl
    resetParmOffsetFields();
    fillParmOffsetTbl((A_UINT32)PARM_FREQ, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->freq)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_FREQ2, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->freq2)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_CHAINMASK, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->chainMask)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_BANDWIDTH, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->bandwidth)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANCOUNT, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanCount)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANPERIOD, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanPeriod)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANPRIORITY, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanPriority)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANFFTSIZE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanFFTSize)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANGCENA, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanGCEna)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANRESTARTENA, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanRestartEna)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANINITDELAY, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanInitDelay)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANNBTONETHR, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanNBToneThr)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANSTRBINTHR, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanStrBinThr)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANWBRPTMODE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanWBRptMode)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANRSSIRPTMODE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanRssiRptMode)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANPWRFORMAT, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanPwrFormat)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANRPTMODE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanRptMode)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANBINSCALE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanBinScale)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANDBMADJ, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScandBmAdj)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANCHNMASK, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanChnMask)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_PHYID, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->phyId)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANRSSITHR, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanRssiThr)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    fillParmOffsetTbl((A_UINT32)PARM_SCANNOISEFLOORREF, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANParms->ScanNoiseFloorRef)) - (A_UINT32)pCONFIGURESPECTRALSCANParms), pParmsOffset);
    return((void*) pCONFIGURESPECTRALSCANParms);
}

static CONFIGURESPECTRALSCAN_OP_FUNC CONFIGURESPECTRALSCANOpFunc = NULL;

TLV2_API void registerCONFIGURESPECTRALSCANHandler(CONFIGURESPECTRALSCAN_OP_FUNC fp)
{
    CONFIGURESPECTRALSCANOpFunc = fp;
}

A_BOOL CONFIGURESPECTRALSCANOp(void *pParms)
{
    CMD_CONFIGURESPECTRALSCAN_PARMS *pCONFIGURESPECTRALSCANParms = (CMD_CONFIGURESPECTRALSCAN_PARMS *)pParms;

#if 0 //for debugging, comment out this line, and uncomment the line below
//#ifdef _DEBUG
    int i; 	//for initializing array parameter
    i = 0;	//assign a number to avoid warning in case i is not used

    A_PRINTF("CONFIGURESPECTRALSCANOp: freq %u\n", pCONFIGURESPECTRALSCANParms->freq);
    A_PRINTF("CONFIGURESPECTRALSCANOp: freq2 %u\n", pCONFIGURESPECTRALSCANParms->freq2);
    A_PRINTF("CONFIGURESPECTRALSCANOp: chainMask %u\n", pCONFIGURESPECTRALSCANParms->chainMask);
    A_PRINTF("CONFIGURESPECTRALSCANOp: bandwidth %u\n", pCONFIGURESPECTRALSCANParms->bandwidth);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanCount %u\n", pCONFIGURESPECTRALSCANParms->ScanCount);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanPeriod %u\n", pCONFIGURESPECTRALSCANParms->ScanPeriod);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanPriority %u\n", pCONFIGURESPECTRALSCANParms->ScanPriority);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanFFTSize %u\n", pCONFIGURESPECTRALSCANParms->ScanFFTSize);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanGCEna %u\n", pCONFIGURESPECTRALSCANParms->ScanGCEna);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanRestartEna %u\n", pCONFIGURESPECTRALSCANParms->ScanRestartEna);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanInitDelay %u\n", pCONFIGURESPECTRALSCANParms->ScanInitDelay);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanNBToneThr %u\n", pCONFIGURESPECTRALSCANParms->ScanNBToneThr);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanStrBinThr %u\n", pCONFIGURESPECTRALSCANParms->ScanStrBinThr);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanWBRptMode %u\n", pCONFIGURESPECTRALSCANParms->ScanWBRptMode);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanRssiRptMode %u\n", pCONFIGURESPECTRALSCANParms->ScanRssiRptMode);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanPwrFormat %u\n", pCONFIGURESPECTRALSCANParms->ScanPwrFormat);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanRptMode %u\n", pCONFIGURESPECTRALSCANParms->ScanRptMode);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanBinScale %u\n", pCONFIGURESPECTRALSCANParms->ScanBinScale);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScandBmAdj %u\n", pCONFIGURESPECTRALSCANParms->ScandBmAdj);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanChnMask %u\n", pCONFIGURESPECTRALSCANParms->ScanChnMask);
    A_PRINTF("CONFIGURESPECTRALSCANOp: phyId %u\n", pCONFIGURESPECTRALSCANParms->phyId);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanRssiThr %d\n", pCONFIGURESPECTRALSCANParms->ScanRssiThr);
    A_PRINTF("CONFIGURESPECTRALSCANOp: ScanNoiseFloorRef %d\n", pCONFIGURESPECTRALSCANParms->ScanNoiseFloorRef);
#endif //_DEBUG

    if (NULL != CONFIGURESPECTRALSCANOpFunc) {
        (*CONFIGURESPECTRALSCANOpFunc)(pCONFIGURESPECTRALSCANParms);
    }
    return(TRUE);
}

void* initCONFIGURESPECTRALSCANRSPOpParms(A_UINT8 *pParmsCommon, PARM_OFFSET_TBL *pParmsOffset, PARM_DICT *pParmDict)
{
    int i, j; 	//for initializing array parameter
    CMD_CONFIGURESPECTRALSCANRSP_PARMS  *pCONFIGURESPECTRALSCANRSPParms = (CMD_CONFIGURESPECTRALSCANRSP_PARMS *)pParmsCommon;

    if (pParmsCommon == NULL) return (NULL);

    i = j = 0;	//assign a number to avoid warning in case i and j are not used

    // Populate the parm structure with initial values
    pCONFIGURESPECTRALSCANRSPParms->fftreportsize = pParmDict[PARM_FFTREPORTSIZE].v.valU32;

    // Make up ParmOffsetTbl
    resetParmOffsetFields();
    fillParmOffsetTbl((A_UINT32)PARM_FFTREPORTSIZE, (A_UINT32)(((A_UINT32)&(pCONFIGURESPECTRALSCANRSPParms->fftreportsize)) - (A_UINT32)pCONFIGURESPECTRALSCANRSPParms), pParmsOffset);
    return((void*) pCONFIGURESPECTRALSCANRSPParms);
}

static CONFIGURESPECTRALSCANRSP_OP_FUNC CONFIGURESPECTRALSCANRSPOpFunc = NULL;

TLV2_API void registerCONFIGURESPECTRALSCANRSPHandler(CONFIGURESPECTRALSCANRSP_OP_FUNC fp)
{
    CONFIGURESPECTRALSCANRSPOpFunc = fp;
}

A_BOOL CONFIGURESPECTRALSCANRSPOp(void *pParms)
{
    CMD_CONFIGURESPECTRALSCANRSP_PARMS *pCONFIGURESPECTRALSCANRSPParms = (CMD_CONFIGURESPECTRALSCANRSP_PARMS *)pParms;

#if 0 //for debugging, comment out this line, and uncomment the line below
//#ifdef _DEBUG
    int i; 	//for initializing array parameter
    i = 0;	//assign a number to avoid warning in case i is not used

    A_PRINTF("CONFIGURESPECTRALSCANRSPOp: fftreportsize %u\n", pCONFIGURESPECTRALSCANRSPParms->fftreportsize);
#endif //_DEBUG

    if (NULL != CONFIGURESPECTRALSCANRSPOpFunc) {
        (*CONFIGURESPECTRALSCANRSPOpFunc)(pCONFIGURESPECTRALSCANRSPParms);
    }
    return(TRUE);
}
