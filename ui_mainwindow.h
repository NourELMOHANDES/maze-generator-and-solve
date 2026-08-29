/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *title;
    QPushButton *large;
    QPushButton *medium;
    QPushButton *small;
    QGraphicsView *graphicsView;
    QPushButton *topage2;
    QLabel *logo1;
    QLabel *label_6;
    QPushButton *danger;
    QCheckBox *checkBox;
    QWidget *page_2;
    QGraphicsView *graphicsView_2;
    QLabel *title_2;
    QPushButton *dijkstra;
    QPushButton *bfs;
    QPushButton *rightwall;
    QPushButton *randommouse;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *logo1_2;
    QLabel *logo1_3;
    QPushButton *randuan;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(0, 720));
        MainWindow->setAcceptDrops(true);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(0, 0, 1280, 720));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget {\n"
"url(:/resources/background.jpg)}\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8(""));
        title = new QLabel(page);
        title->setObjectName("title");
        title->setEnabled(true);
        title->setGeometry(QRect(210, 0, 831, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(14);
        font.setBold(true);
        title->setFont(font);
        title->setMouseTracking(true);
        title->setContextMenuPolicy(Qt::DefaultContextMenu);
        title->setAcceptDrops(false);
        title->setAutoFillBackground(false);
        title->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */"));
        title->setFrameShape(QFrame::NoFrame);
        title->setFrameShadow(QFrame::Raised);
        title->setTextFormat(Qt::RichText);
        title->setAlignment(Qt::AlignCenter);
        title->setOpenExternalLinks(false);
        title->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        large = new QPushButton(page);
        large->setObjectName("large");
        large->setGeometry(QRect(10, 300, 111, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(large->sizePolicy().hasHeightForWidth());
        large->setSizePolicy(sizePolicy);
        large->setAutoFillBackground(false);
        large->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/resources/LARGE.jpg);\n"
"}\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        medium = new QPushButton(page);
        medium->setObjectName("medium");
        medium->setGeometry(QRect(10, 190, 111, 51));
        medium->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/resources/MEDIUM.jpg);\n"
"}\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        medium->setCheckable(true);
        small = new QPushButton(page);
        small->setObjectName("small");
        small->setGeometry(QRect(10, 80, 111, 51));
        small->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/resources/SMALL.jpg);\n"
"}\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        graphicsView = new QGraphicsView(page);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(147, 80, 991, 571));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background-image: url(C://Users//Nour//Documents//mazegentest//SMALL.png);\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        topage2 = new QPushButton(page);
        topage2->setObjectName("topage2");
        topage2->setGeometry(QRect(10, 580, 121, 71));
        topage2->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 10px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
"\n"
"                border: 2px solid #3498db;  /* Outline thickness and color */\n"
"                border-radius: 8px;          /* Rounded corners */\n"
"                background-color: none;      /* Make the background transparent */\n"
"                padding: 8px 16px;           /* Space inside the button */\n"
"                color: #3498db;  "));
        logo1 = new QLabel(page);
        logo1->setObjectName("logo1");
        logo1->setGeometry(QRect(1170, 530, 81, 111));
        logo1->setStyleSheet(QString::fromUtf8("    width: 200px;\n"
"    height: 150px;\n"
"    background-color: transparent;\n"
"    background-image: url(C://Users//Nour//Documents//mazegentest//logo.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"\n"
"    border-image: url(C://project//images//logo.jpg);\n"
"\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 660, 231, 20));
        label_6->setStyleSheet(QString::fromUtf8("    border-image: url(C://project//images//large.png);\n"
"background:transparent;\n"
"color:black;"));
        danger = new QPushButton(page);
        danger->setObjectName("danger");
        danger->setGeometry(QRect(1150, 390, 111, 71));
        danger->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-image: url(:/resources/t.png);\n"
"}\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(1140, 460, 141, 61));
        QFont font1;
        font1.setPointSize(7);
        font1.setBold(true);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("    border-image: url(C://project//images//jk.jpg);\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;\n"
"background:transparent;\n"
"color:black;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        graphicsView_2 = new QGraphicsView(page_2);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(147, 80, 991, 571));
        title_2 = new QLabel(page_2);
        title_2->setObjectName("title_2");
        title_2->setEnabled(true);
        title_2->setGeometry(QRect(210, 0, 831, 51));
        title_2->setFont(font);
        title_2->setMouseTracking(true);
        title_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        title_2->setAcceptDrops(false);
        title_2->setAutoFillBackground(false);
        title_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */"));
        title_2->setFrameShape(QFrame::NoFrame);
        title_2->setFrameShadow(QFrame::Raised);
        title_2->setTextFormat(Qt::RichText);
        title_2->setAlignment(Qt::AlignCenter);
        title_2->setOpenExternalLinks(false);
        title_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        dijkstra = new QPushButton(page_2);
        dijkstra->setObjectName("dijkstra");
        dijkstra->setGeometry(QRect(30, 140, 83, 29));
        bfs = new QPushButton(page_2);
        bfs->setObjectName("bfs");
        bfs->setGeometry(QRect(30, 190, 83, 29));
        rightwall = new QPushButton(page_2);
        rightwall->setObjectName("rightwall");
        rightwall->setGeometry(QRect(30, 250, 83, 41));
        randommouse = new QPushButton(page_2);
        randommouse->setObjectName("randommouse");
        randommouse->setGeometry(QRect(30, 320, 83, 41));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(1170, 150, 81, 31));
        label->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
"    background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1140, 240, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
" background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
"    background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
""));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1140, 290, 141, 71));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
" background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(page_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 50, 191, 71));
        label_4->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
" background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
""));
        label_4->setScaledContents(true);
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1140, 180, 141, 61));
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("color: black;  /* Text color */\n"
"border-radius: 5px;  /* Rounded corners */\n"
"padding: 5px;  /* Add some spacing inside the label */   \n"
" background-image: url(C://Users//Nour//Documents//mazegentest//logo.png);\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignCenter);
        logo1_2 = new QLabel(page_2);
        logo1_2->setObjectName("logo1_2");
        logo1_2->setGeometry(QRect(1170, 530, 81, 111));
        logo1_2->setStyleSheet(QString::fromUtf8("    width: 200px;\n"
"    height: 150px;\n"
"    background-color: transparent;\n"
"    background-image: url(C://project//images//logo.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"\n"
""));
        logo1_3 = new QLabel(page_2);
        logo1_3->setObjectName("logo1_3");
        logo1_3->setGeometry(QRect(1170, 530, 81, 111));
        logo1_3->setStyleSheet(QString::fromUtf8("    width: 200px;\n"
"    height: 150px;\n"
"    background-color: transparent;\n"
"    background-image: url(C://Users//Nour//Documents//mazegentest//logo.jpg);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"\n"
"    border-image: url(C://project//images//logo.jpg);\n"
"\n"
"background-repeat: repeat;\n"
"background-position: center;\n"
"background-size: cover;"));
        randuan = new QPushButton(page_2);
        randuan->setObjectName("randuan");
        randuan->setGeometry(QRect(30, 390, 81, 41));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "maze generator and solver", nullptr));
#if QT_CONFIG(tooltip)
        title->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        title->setText(QCoreApplication::translate("MainWindow", "welcome to the maze generator and maze solver project", nullptr));
        large->setText(QString());
        medium->setText(QString());
        small->setText(QString());
        topage2->setText(QCoreApplication::translate("MainWindow", "go solve it !!", nullptr));
        logo1->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "you neet to generate a maze first ", nullptr));
        danger->setText(QString());
        checkBox->setText(QCoreApplication::translate("MainWindow", "i am fully aware \n"
"that i am creating \n"
"a colossal maze", nullptr));
#if QT_CONFIG(tooltip)
        title_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        title_2->setText(QCoreApplication::translate("MainWindow", "welcome to the maze generator and maze solver project", nullptr));
        dijkstra->setText(QCoreApplication::translate("MainWindow", "dijkstra", nullptr));
        bfs->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        rightwall->setText(QCoreApplication::translate("MainWindow", "right wall\n"
" follower", nullptr));
        randommouse->setText(QCoreApplication::translate("MainWindow", "random \n"
" mouse", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "it took", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "to solve this\n"
" maze using", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "choose the algorithm \n"
" you want to solve \n"
" the maze with :", nullptr));
        label_5->setText(QString());
        logo1_2->setText(QString());
        logo1_3->setText(QString());
        randuan->setText(QCoreApplication::translate("MainWindow", "ran duan    \n"
"algorithm ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
