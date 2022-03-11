///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#ifndef __SAKEMAIN_H__
#define __SAKEMAIN_H__

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#include "sake.h"

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus)
extern "C" {
#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#define SAKEI_GAME_NAME_LENGTH    15
#define SAKEI_SECRET_KEY_LENGTH   8
#define SAKEI_LOGIN_TICKET_LENGTH 24

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
typedef struct SAKEInternal
{
    gsi_bool mIsGameAuthenticated;
    char mGameName[SAKEI_GAME_NAME_LENGTH + 1];
    int mGameId;
    char mSecretKey[SAKEI_SECRET_KEY_LENGTH + 1];

    gsi_bool mIsProfileAuthenticated;
    int mProfileId;
    char mLoginTicket[SAKEI_LOGIN_TICKET_LENGTH + 1];

    SAKEStartRequestResult mStartRequestResult;
} SAKEInternal;

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus)
} // extern "C"
#endif

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
#endif // __SAKEMAIN_H__
