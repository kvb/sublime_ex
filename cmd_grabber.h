#ifndef CMD_GRABBER_H_
#define CMD_GRABBER_H_

#include <QHash>

#define DEV_ID_OFFSET   (5)


typedef enum _CMD_ID_T
{
    eCMD_ID_FIRST = 1,
    eCMD_ID_VERSION = eCMD_ID_FIRST,
    eCMD_ID_NAV_LEFT,
    eCMD_ID_NAV_RIGHT,
    eCMD_ID_NAV_DOWN,
    eCMD_ID_NAV_UP,
    eCMD_ID_NAV_ENTER,


    eCMD_ID_MAX_T
} CMD_ID_T;

class CmdGrabber
{
private:
    static int Count;
    static QHash<int,QString> CmdHash;

public:

    CmdGrabber();
    ~CmdGrabber();

    void AddCmdToList(unsigned int DevId, CMD_ID_T CmdId, QString Cmd);
    void AddCmdToList(QString DevId, CMD_ID_T CmdId, QString Cmd);

    static QString GetCmdStr(QString DevId, CMD_ID_T CmdId);
};


#endif// CMD_GRABBER_H_
