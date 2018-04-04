#ifndef MESSAGEDISPLAY_H
#define MESSAGEDISPLAY_H

#include <QWidget>

#include "message_levels.h"

namespace Ui {
class MessageDisplay;
}

class MessageDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit MessageDisplay(QWidget *parent = 0);
    ~MessageDisplay();

private:
    Ui::MessageDisplay *ui;

public slots:
    void clearDisplay();
    void displayMessage( QString msg, unsigned char level = LEVEL_OK );
    void displayMessageAlt( QString msg );

};

#endif // MESSAGEDISPLAY_H
