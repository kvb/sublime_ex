#ifndef ERRORS_H
#define ERRORS_H

extern "C"
{
#include "..\..\lib\cexception\lib\CException.h"
}

#define ERROR_ID_CONNECT    (0x01)
#define ERROR_ID_VERSION    (0x02)
#define ERROR_ID_ACCESS     (0x03)
#define ERROR_ID_MONITOR    (0x04)
#define ERROR_ID_APP        (0x05)
#define ERROR_ID_MONMODE    (0x06)
#define ERROR_ID_CLEAR      (0x07)
#define ERROR_ID_WRITE      (0x08)
#define ERROR_ID_PUT        (0x09)
#define ERROR_ID_VERIFY     (0x0A)
#define ERROR_ID_CRC        (0x0B)
#define ERROR_ID_MEMORY     (0x0C)

const char* ErrorText(const unsigned int Id);

#endif //ERRORS_H