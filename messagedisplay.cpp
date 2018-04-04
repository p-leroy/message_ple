#include "messagedisplay.h"
#include "ui_messagedisplay.h"

MessageDisplay::MessageDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageDisplay)
{
    ui->setupUi(this);

    connect( this->ui->pushButton_clear, SIGNAL(clicked(bool)),
             this, SLOT(clearDisplay()) );
}

MessageDisplay::~MessageDisplay()
{
    delete ui;
}

void MessageDisplay::clearDisplay()
{
    this->ui->textEdit->clear();
}

void MessageDisplay::displayMessage( QString msg, unsigned char level )
{
    QColor color;

    switch (level)
    {
    case LEVEL_ERR:
        color = Qt::red;
        break;
    case LEVEL_WARNING:
        color = Qt::blue;
        break;
    case LEVEL_OK:
        color = Qt::black;
        break;
    case LEVEL_SBG:
        color = Qt::darkBlue;
        break;
    default:
        color = Qt::black;
        break;
    }

    this->ui->textEdit->setTextColor( color );
    this->ui->textEdit->append( msg );
}

void MessageDisplay::displayMessageAlt( QString msg )
{
    QColor color;

    color = Qt::darkBlue;

    this->ui->textEdit->setTextColor( color );
    this->ui->textEdit->append( msg );
    QApplication::processEvents();

}
