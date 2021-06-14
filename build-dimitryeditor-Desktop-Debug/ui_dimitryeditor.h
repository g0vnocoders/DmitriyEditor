/********************************************************************************
** Form generated from reading UI file 'dimitryeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMITRYEDITOR_H
#define UI_DIMITRYEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DimitryEditor
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DimitryEditor)
    {
        if (DimitryEditor->objectName().isEmpty())
            DimitryEditor->setObjectName(QString::fromUtf8("DimitryEditor"));
        DimitryEditor->resize(800, 600);
        DimitryEditor->setWindowTitle(QString::fromUtf8("DimitryEditor"));
        centralwidget = new QWidget(DimitryEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(130, 0, 671, 561));
        DimitryEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DimitryEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        DimitryEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(DimitryEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DimitryEditor->setStatusBar(statusbar);

        retranslateUi(DimitryEditor);

        QMetaObject::connectSlotsByName(DimitryEditor);
    } // setupUi

    void retranslateUi(QMainWindow *DimitryEditor)
    {
        textEdit->setDocumentTitle(QCoreApplication::translate("DimitryEditor", "asdf", nullptr));
        (void)DimitryEditor;
    } // retranslateUi

};

namespace Ui {
    class DimitryEditor: public Ui_DimitryEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMITRYEDITOR_H
