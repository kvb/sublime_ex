#include <QtCore>
#include "command_button.h"

CmdButton::CmdButton(const QString text, const QString cmd, QWidget* parent, Qt::FocusPolicy policy): QPushButton(text, parent)
{
    setAutoDefault(false);
    setFixedWidth(50);
    ButtonCmd = cmd;
    setFocusPolicy(policy); //don't let these guys grab focus

    connect(this, SIGNAL(clicked()), this, SLOT(handleClick()));
}

void CmdButton::handleClick(void)
{
    emit sendCommand(ButtonCmd);
}
