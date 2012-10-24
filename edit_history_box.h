#ifndef EDIT_HISTORY_BOX_H_
#define EDIT_HISTORY_BOX_H_

#include <QLibrary>
#include <QString>
#include <QLineEdit>

#define EDIT_HISTORY_SIZE  (64)

class EditHistoryBox : public QLineEdit
{
Q_OBJECT
private:
    QString History[EDIT_HISTORY_SIZE];
    unsigned int HistoryIndex;
    unsigned int HistoryCurrent;
    
    bool event(QEvent* event);
    
public:
    EditHistoryBox();

signals:
    void signalUpdateFromHistory(QString str);    
    
};

#endif /* EDIT_HISTORY_BOX_H_ */
