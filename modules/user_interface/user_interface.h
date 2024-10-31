//=====[#include guards - begin]===============================================

#ifndef _USER_INTERFACE_H_
#define _USER_INTERFACE_H_

//=====[Declaration of public defines]=========================================

#define TEST_0 (0)
#define TEST_1 (1)
#define TEST_2 (2)

#define TEST_X (TEST_2)

//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void userInterfaceInit();
void userInterfaceUpdate();
bool userInterfaceCodeCompleteRead();
void userInterfaceCodeCompleteWrite( bool state );

bool incorrectCodeStateRead();
void incorrectCodeStateWrite( bool state );

bool systemBlockedStateRead();
void systemBlockedStateWrite( bool state );

//=====[#include guards - end]=================================================

#endif // _USER_INTERFACE_H_