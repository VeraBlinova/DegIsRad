/********************************************************************************
** Form generated from reading UI file 'degisrad.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEGISRAD_H
#define UI_DEGISRAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Degisrad
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *line_deg;
    QLabel *label_3;
    QLineEdit *line_min;
    QLabel *label_4;
    QLineEdit *line_sec;
    QPushButton *btn_do;
    QLabel *label_2;
    QLineEdit *line_rad;

    void setupUi(QMainWindow *Degisrad)
    {
        if (Degisrad->objectName().isEmpty())
            Degisrad->setObjectName(QStringLiteral("Degisrad"));
        Degisrad->resize(151, 221);
        centralWidget = new QWidget(Degisrad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        line_deg = new QLineEdit(centralWidget);
        line_deg->setObjectName(QStringLiteral("line_deg"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_deg->sizePolicy().hasHeightForWidth());
        line_deg->setSizePolicy(sizePolicy);
        line_deg->setMaxLength(1024);

        verticalLayout->addWidget(line_deg);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        line_min = new QLineEdit(centralWidget);
        line_min->setObjectName(QStringLiteral("line_min"));
        sizePolicy.setHeightForWidth(line_min->sizePolicy().hasHeightForWidth());
        line_min->setSizePolicy(sizePolicy);
        line_min->setMaxLength(1024);

        verticalLayout->addWidget(line_min);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        line_sec = new QLineEdit(centralWidget);
        line_sec->setObjectName(QStringLiteral("line_sec"));
        sizePolicy.setHeightForWidth(line_sec->sizePolicy().hasHeightForWidth());
        line_sec->setSizePolicy(sizePolicy);
        line_sec->setMaximumSize(QSize(16777215, 16777215));
        line_sec->setMaxLength(1024);

        verticalLayout->addWidget(line_sec);

        btn_do = new QPushButton(centralWidget);
        btn_do->setObjectName(QStringLiteral("btn_do"));

        verticalLayout->addWidget(btn_do);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        line_rad = new QLineEdit(centralWidget);
        line_rad->setObjectName(QStringLiteral("line_rad"));

        verticalLayout->addWidget(line_rad);

        Degisrad->setCentralWidget(centralWidget);
        QWidget::setTabOrder(line_rad, btn_do);

        retranslateUi(Degisrad);

        QMetaObject::connectSlotsByName(Degisrad);
    } // setupUi

    void retranslateUi(QMainWindow *Degisrad)
    {
        Degisrad->setWindowTitle(QApplication::translate("Degisrad", "DegToRad", 0));
        label->setText(QApplication::translate("Degisrad", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", 0));
        label_3->setText(QApplication::translate("Degisrad", "\320\234\320\270\320\275\321\203\321\202\321\213", 0));
        label_4->setText(QApplication::translate("Degisrad", "\320\241\320\265\320\272\321\203\320\275\320\264\321\213", 0));
        btn_do->setText(QApplication::translate("Degisrad", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264", 0));
        label_2->setText(QApplication::translate("Degisrad", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", 0));
        line_rad->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Degisrad: public Ui_Degisrad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEGISRAD_H
