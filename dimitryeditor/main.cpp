#include "dimitryeditor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    editorwindow w;
    w.setWindowTitle("DimitryEditor");

    w.show();
    return a.exec();
}
