#ifndef COMMAND_BUTTON_H_
#define COMMAND_BUTTON_H_
#include <QtGui>

class CmdButton : public QPushButton
{
    Q_OBJECT

public:
    CmdButton(const QString text, const QString cmd, QWidget* parent = 0, Qt::FocusPolicy policy = Qt::NoFocus);

public Q_SLOTS:

    void handleClick(void);

signals:
    void sendCommand(QString Cmd);

private:

    QString ButtonCmd;

};

#endif /* COMMAND_BUTTON_H_ */
