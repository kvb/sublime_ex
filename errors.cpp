
#include "errors.h"

#define NUM_ERROR_IDS (12)

const struct 
{
    const unsigned int ErrorId;
    const char* Text;
} ErrorList[] = 
{
    { ERROR_ID_CONNECT, "Error Connecting to Instrument." },
    { ERROR_ID_VERSION, "Error Fetching Version." },
    { ERROR_ID_ACCESS,  "Error Obtaining Access." },
    { ERROR_ID_MONITOR, "Error Entering Monitor." },
    { ERROR_ID_APP,     "Error Launching Application." },
    { ERROR_ID_MONMODE, "Error Resetting To Monitor." },
    { ERROR_ID_CLEAR,   "Error Clearing Memory." },
    { ERROR_ID_WRITE,   "Error Writing Firmware." },
    { ERROR_ID_PUT,     "Error Writing File." },
    { ERROR_ID_VERIFY,  "Error Verifying Firmware." },
    { ERROR_ID_CRC,     "Error With Internal CRC." },
    { ERROR_ID_MEMORY,  "Error With Memory Map." },
};

const char* ErrorText(const unsigned int Id)
{
    for (int i=0; i < NUM_ERROR_IDS; i++)
    {
         if (ErrorList[i].ErrorId == Id)
             return ErrorList[i].Text;
    }
    return "Something Went Horribly Wrong.";
}