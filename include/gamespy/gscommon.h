///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#ifndef __GSCOMMON_H__
#define __GSCOMMON_H__

// Common is more like "all"

// Build settings  (set by developer project)
//#define GS_MEM_MANAGED       // use GameSpy memory manager for SDK allocations
//#define GS_COMMON_DEBUG      // use GameSpy debug utilities for SDK debug output
//#define GS_WINSOCK2          // use winsock2
//#define GS_UNICODE           // Use widechar (UCS2) SDK interface.
//#define GS_NO_FILE           // disable file storage (on by default for PS2/DS)
//#define GS_NO_THREAD         // no multi-thread support
//#define GS_PEER		       // MUST be defined if you are using Peer SDK

#ifdef GS_PEER
#define UNIQUEID // enable unique id support
#endif

// Support all Linux compiler defines into one expected define
// See https://github.com/cpredef/predef/blob/master/OperatingSystems.md
#if !defined(_LINUX) && (defined(__linux__) || defined(__linux) || defined(linux))
#define _LINUX
#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#include "gsplatform.h"
#include "gsplatformsocket.h"
#include "gsplatformthread.h"
#include "gsplatformutil.h"

// platform independent
#include "gsmemory.h"
#include "gsdebug.h"
#include "gsassert.h"
#include "gsstringutil.h"

//#include "md5.h"
//#include "darray.h"
//#include "hashtable.h"

#define GSI_MIN(a, b)            (((a) < (b) ? (a) : (b)))
#define GSI_MAX(a, b)            (((a) > (b) ? (a) : (b)))
#define GSI_LIMIT(x, minx, maxx) (((x) < (minx) ? (minx) : ((x) > (maxx) ? (maxx) : (x))))
#define GSI_WRAP(x, minx, maxx)  (((x) < (minx) ? (maxx - 1) : ((x) >= (maxx) ? (minx) : (x))))
#define GSI_DIM(x)               (sizeof(x) / sizeof((x)[0]))

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#endif // __GSCOMMON_H__
