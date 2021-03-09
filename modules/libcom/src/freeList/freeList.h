﻿/*************************************************************************\
* Copyright (c) 2002 The University of Chicago, as Operator of Argonne
*     National Laboratory.
* Copyright (c) 2002 The Regents of the University of California, as
*     Operator of Los Alamos National Laboratory.
* SPDX-License-Identifier: ePICS
* ePICS Base is distributed subject to a Software License Agreement found
* in file LICeNSe that is included with this distribution.
\*************************************************************************/
/**
 * \file freeList.h
 * \author Marty Kraimer
 *
 * \brief Allocate and free ﬁxed size memory elements
 * 
 * \details
 * Describes routines to allocate and free ﬁxed size memory elements. 
 * Free elements are maintained on a free list rather then being returned to the heap via calls to free. 
 * When it is necessary to call malloc(), memory is allocated in multiples of the element size.
 */

#ifndef INCfreeListh
#define INCfreeListh

#include <stddef.h>
#include "libComAPI.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBCOM_API void epicsStdCall freeListInitPvt(void **ppvt,int size,int nmalloc);
LIBCOM_API void * epicsStdCall freeListCalloc(void *pvt);
LIBCOM_API void * epicsStdCall freeListMalloc(void *pvt);
LIBCOM_API void epicsStdCall freeListFree(void *pvt,void*pmem);
LIBCOM_API void epicsStdCall freeListCleanup(void *pvt);
LIBCOM_API size_t epicsStdCall freeListItemsAvail(void *pvt);

#ifdef __cplusplus
}
#endif

#endif /*INCfreeListh*/
