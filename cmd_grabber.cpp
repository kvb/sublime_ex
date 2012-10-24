#include "cmd_grabber.h"

QHash<int,QString> CmdGrabber::CmdHash;
int CmdGrabber::Count = 0;


CmdGrabber::CmdGrabber()
{
    ++Count;
}

CmdGrabber::~CmdGrabber()
{
    --Count;
}

void CmdGrabber::AddCmdToList(unsigned int DevId, CMD_ID_T CmdId, QString Cmd)
{
    //make uniq id for this command
    CmdHash.insert((DevId << DEV_ID_OFFSET)+CmdId,Cmd);
}

void CmdGrabber::AddCmdToList(QString DevId, CMD_ID_T CmdId, QString Cmd)
{
    bool ok;
    unsigned int devid = DevId.toUInt(&ok,16);
    if(ok)
        CmdHash.insert((devid << DEV_ID_OFFSET)+CmdId,Cmd);
}

QString CmdGrabber::GetCmdStr(QString DevId, CMD_ID_T CmdId)
{
    bool ok;
    unsigned int devid = DevId.toUInt(&ok,16);

    if (CmdHash.contains((devid << DEV_ID_OFFSET) + CmdId))
        return CmdHash.value((devid << DEV_ID_OFFSET) + CmdId);

    return "";
}
