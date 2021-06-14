#ifndef DIMITRYEDITOR_H
#define DIMITRYEDITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class dimitryeditor; }
QT_END_NAMESPACE

class editorwindow : public QMainWindow
{
    Q_OBJECT

public:
    editorwindow(QWidget *parent = nullptr);
    ~editorwindow();

private:
    Ui::dimitryeditor *ui;
};
#endif // DIMITRYEDITOR_H
