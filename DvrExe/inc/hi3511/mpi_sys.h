/******************************************************************************
 
  Copyright (C), 2001-2011, Hisilicon Tech. Co., Ltd.
 
 ******************************************************************************
  File Name     : mpi_sys.h
  Version       : Initial Draft
  Author        : Hisilicon multimedia software group
  Created       : 2007/1/31
  Description   : 
  History       :
  1.Date        : 2006/1/31
    Author      : c42025
    Modification: Created file

  2.Date        : 2008/03/03
    Author      : c42025
    Modification: add a new funtion "HI_MPI_SYS_GetVersion"

******************************************************************************/



#ifndef __MPI_SYS_H__
#define __MPI_SYS_H__

/******************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif /* __cplusplus */
/******************************************/

HI_S32 HI_MPI_SYS_Init();
HI_S32 HI_MPI_SYS_Exit();

HI_S32 HI_MPI_SYS_SetConf(const MPP_SYS_CONF_S *pstSysConf);
HI_S32 HI_MPI_SYS_GetConf(MPP_SYS_CONF_S *pstSysConf);

HI_S32 HI_MPI_SYS_GetVersion(MPP_VERSION_S *pstVersion);

/* Get the current PTS of this system */
HI_S32 HI_MPI_SYS_GetCurPts(HI_U64 *pu64CurPts);

/*
** u64Base is the global PTS of the system.
** ADVICE:
** 1. Bester to call HI_MPI_SYS_GetCurPts on the host board to get the u64Base.
** 2. When the linux start up, call HI_MPI_SYS_InitPtsBase to set the init pts.
** 3. When media bussines is running, synchronize the PTS one time per minute.
**    And should call HI_MPI_SYS_SyncPts.
*/
HI_S32 HI_MPI_SYS_InitPtsBase(HI_U64 u64PtsBase);
HI_S32 HI_MPI_SYS_SyncPts(HI_U64 u64PtsBase);

/******************************************/
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */
/******************************************/
#endif /*__MPI_SYS_H__ */


