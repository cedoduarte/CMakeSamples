#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	a.setStyle("fusion");
    Dialog w;
    w.show();
    return a.exec();
}
