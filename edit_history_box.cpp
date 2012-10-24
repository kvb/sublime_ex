
#include <QKeyEvent>

#include "edit_history_box.h"

EditHistoryBox::EditHistoryBox() : QLineEdit()
{
    HistoryIndex = 0;
    HistoryCurrent = 0;
    for (int i = 0; i < EDIT_HISTORY_SIZE; i++)
    {
        History[i] = "";
    }

    this->setPlaceholderText("Type Commands Here!");

    
    connect((QObject*)this, SIGNAL(signalUpdateFromHistory(QString)), (QObject*)this, SLOT(setText(QString)));
}

bool EditHistoryBox::event(QEvent* event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent *>(event);
        if (ke->key() == Qt::Key_Up) {
            if (HistoryCurrent == 0)
                HistoryCurrent = EDIT_HISTORY_SIZE - 1;
            else
                HistoryCurrent--;
            emit signalUpdateFromHistory(History[HistoryCurrent]);
            return true;
        }
        if (ke->key() == Qt::Key_Down) {
            HistoryCurrent = (HistoryCurrent + 1) % EDIT_HISTORY_SIZE;
            emit signalUpdateFromHistory(History[HistoryCurrent]);
            return true;
        }
        if ((ke->key() == Qt::Key_Enter) || (ke->key() == Qt::Key_Return)){
            History[HistoryIndex] = text();
            HistoryIndex = (HistoryIndex + 1) % EDIT_HISTORY_SIZE;
            HistoryCurrent = HistoryIndex;
            //purposefully continue on to below
        }
    }

    return QWidget::event(event);
}
