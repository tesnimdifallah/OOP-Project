/********************************************************************************
** Form generated from reading UI file 'OOPproject.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OOPPROJECT_H
#define UI_OOPPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OOPproject
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *student;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *inputStudentID;
    QLineEdit *inputFullName;
    QLineEdit *inputDormName;
    QSpinBox *inputRoomNumber;
    QSpinBox *inputYear;
    QPushButton *btnAddStudent;
    QPushButton *btnRemoveStudent;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QWidget *Dormitory;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *inputreastaurant;
    QLineEdit *inpudormitory;
    QSpinBox *roomnum;
    QSpinBox *spincapacity;
    QPushButton *btnadd_dorm;
    QPushButton *addroom;
    QPushButton *btnremove_dorm;
    QTableWidget *tableWidget_3;
    QTableWidget *tableWidget_4;
    QLabel *label_11;
    QTextEdit *textRoomStatus;
    QLabel *label_10;
    QWidget *restaurant;
    QTableWidget *tableWidget_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *inputdormitoryn;
    QLineEdit *inputbreakfast;
    QLineEdit *inputLunch;
    QLineEdit *inputDinner;
    QPushButton *btnUpdateMenu;
    QListWidget *listWidget;
    QWidget *tab;
    QLabel *lblAvgStudents;
    QLabel *lblTotalRestaurants;
    QLabel *lblTotalStudents;
    QLabel *lblTotalRooms;
    QLabel *lblTotalDorms;
    QPushButton *btnRefreshStats;

    void setupUi(QMainWindow *OOPproject)
    {
        if (OOPproject->objectName().isEmpty())
            OOPproject->setObjectName("OOPproject");
        OOPproject->resize(800, 600);
        centralwidget = new QWidget(OOPproject);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 601));
        student = new QWidget();
        student->setObjectName("student");
        label = new QLabel(student);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 120, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Fax")});
        label->setFont(font);
        label_2 = new QLabel(student);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 120, 30));
        label_2->setFont(font);
        label_3 = new QLabel(student);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 120, 30));
        label_3->setFont(font);
        label_4 = new QLabel(student);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 180, 120, 30));
        label_4->setFont(font);
        label_5 = new QLabel(student);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 20, 120, 30));
        label_5->setFont(font);
        inputStudentID = new QLineEdit(student);
        inputStudentID->setObjectName("inputStudentID");
        inputStudentID->setGeometry(QRect(200, 20, 200, 30));
        inputStudentID->setMinimumSize(QSize(200, 0));
        inputFullName = new QLineEdit(student);
        inputFullName->setObjectName("inputFullName");
        inputFullName->setGeometry(QRect(200, 60, 200, 30));
        inputFullName->setMinimumSize(QSize(200, 0));
        inputDormName = new QLineEdit(student);
        inputDormName->setObjectName("inputDormName");
        inputDormName->setGeometry(QRect(200, 140, 200, 30));
        inputDormName->setMinimumSize(QSize(120, 0));
        inputRoomNumber = new QSpinBox(student);
        inputRoomNumber->setObjectName("inputRoomNumber");
        inputRoomNumber->setGeometry(QRect(200, 180, 100, 30));
        inputRoomNumber->setMinimumSize(QSize(100, 30));
        inputRoomNumber->setMaximum(100);
        inputRoomNumber->setValue(0);
        inputYear = new QSpinBox(student);
        inputYear->setObjectName("inputYear");
        inputYear->setGeometry(QRect(200, 100, 100, 30));
        inputYear->setMinimumSize(QSize(100, 30));
        inputYear->setMinimum(1);
        inputYear->setMaximum(5);
        inputYear->setStepType(QAbstractSpinBox::StepType::AdaptiveDecimalStepType);
        btnAddStudent = new QPushButton(student);
        btnAddStudent->setObjectName("btnAddStudent");
        btnAddStudent->setGeometry(QRect(140, 230, 150, 35));
        btnAddStudent->setMinimumSize(QSize(50, 0));
        btnAddStudent->setFont(font);
        btnRemoveStudent = new QPushButton(student);
        btnRemoveStudent->setObjectName("btnRemoveStudent");
        btnRemoveStudent->setGeometry(QRect(430, 230, 150, 35));
        btnRemoveStudent->setMinimumSize(QSize(50, 10));
        btnRemoveStudent->setFont(font);
        tableWidget = new QTableWidget(student);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 0, 761, 561));
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget_2 = new QTableWidget(student);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QFont font1;
        font1.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(40, 310, 421, 211));
        tabWidget->addTab(student, QString());
        tableWidget->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        inputStudentID->raise();
        inputFullName->raise();
        inputDormName->raise();
        inputRoomNumber->raise();
        inputYear->raise();
        btnAddStudent->raise();
        btnRemoveStudent->raise();
        tableWidget_2->raise();
        Dormitory = new QWidget();
        Dormitory->setObjectName("Dormitory");
        label_6 = new QLabel(Dormitory);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 20, 130, 30));
        label_6->setMinimumSize(QSize(3, 0));
        label_6->setFont(font);
        label_7 = new QLabel(Dormitory);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 60, 130, 30));
        label_7->setFont(font);
        label_8 = new QLabel(Dormitory);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 140, 130, 30));
        label_8->setFont(font);
        label_9 = new QLabel(Dormitory);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 100, 130, 30));
        label_9->setFont(font);
        inputreastaurant = new QLineEdit(Dormitory);
        inputreastaurant->setObjectName("inputreastaurant");
        inputreastaurant->setGeometry(QRect(200, 60, 200, 30));
        inputreastaurant->setMinimumSize(QSize(200, 0));
        inpudormitory = new QLineEdit(Dormitory);
        inpudormitory->setObjectName("inpudormitory");
        inpudormitory->setGeometry(QRect(200, 20, 200, 30));
        inpudormitory->setMinimumSize(QSize(200, 0));
        roomnum = new QSpinBox(Dormitory);
        roomnum->setObjectName("roomnum");
        roomnum->setGeometry(QRect(200, 140, 100, 30));
        roomnum->setMinimumSize(QSize(100, 30));
        spincapacity = new QSpinBox(Dormitory);
        spincapacity->setObjectName("spincapacity");
        spincapacity->setGeometry(QRect(200, 100, 100, 30));
        spincapacity->setMinimumSize(QSize(100, 30));
        btnadd_dorm = new QPushButton(Dormitory);
        btnadd_dorm->setObjectName("btnadd_dorm");
        btnadd_dorm->setGeometry(QRect(70, 190, 150, 35));
        btnadd_dorm->setFont(font);
        addroom = new QPushButton(Dormitory);
        addroom->setObjectName("addroom");
        addroom->setGeometry(QRect(220, 240, 150, 35));
        addroom->setFont(font);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        addroom->setIcon(icon);
        btnremove_dorm = new QPushButton(Dormitory);
        btnremove_dorm->setObjectName("btnremove_dorm");
        btnremove_dorm->setGeometry(QRect(370, 190, 150, 35));
        btnremove_dorm->setFont(font);
        tableWidget_3 = new QTableWidget(Dormitory);
        tableWidget_3->setObjectName("tableWidget_3");
        tableWidget_3->setGeometry(QRect(0, 10, 751, 521));
        tableWidget_4 = new QTableWidget(Dormitory);
        if (tableWidget_4->columnCount() < 3)
            tableWidget_4->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidget_4->setObjectName("tableWidget_4");
        tableWidget_4->setGeometry(QRect(10, 330, 331, 191));
        label_11 = new QLabel(Dormitory);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 300, 261, 21));
        textRoomStatus = new QTextEdit(Dormitory);
        textRoomStatus->setObjectName("textRoomStatus");
        textRoomStatus->setGeometry(QRect(410, 330, 331, 191));
        label_10 = new QLabel(Dormitory);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(410, 290, 271, 30));
        label_10->setFont(font);
        tabWidget->addTab(Dormitory, QString());
        tableWidget_3->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        inputreastaurant->raise();
        inpudormitory->raise();
        roomnum->raise();
        spincapacity->raise();
        btnadd_dorm->raise();
        addroom->raise();
        btnremove_dorm->raise();
        tableWidget_4->raise();
        label_11->raise();
        textRoomStatus->raise();
        label_10->raise();
        restaurant = new QWidget();
        restaurant->setObjectName("restaurant");
        tableWidget_5 = new QTableWidget(restaurant);
        tableWidget_5->setObjectName("tableWidget_5");
        tableWidget_5->setGeometry(QRect(15, 0, 751, 551));
        label_12 = new QLabel(restaurant);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 80, 130, 30));
        label_12->setFont(font);
        label_13 = new QLabel(restaurant);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 10, 130, 30));
        label_13->setFont(font);
        label_14 = new QLabel(restaurant);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 150, 130, 30));
        label_14->setFont(font);
        label_16 = new QLabel(restaurant);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 220, 130, 30));
        label_16->setFont(font);
        inputdormitoryn = new QLineEdit(restaurant);
        inputdormitoryn->setObjectName("inputdormitoryn");
        inputdormitoryn->setGeometry(QRect(160, 20, 200, 30));
        inputdormitoryn->setMinimumSize(QSize(200, 0));
        inputbreakfast = new QLineEdit(restaurant);
        inputbreakfast->setObjectName("inputbreakfast");
        inputbreakfast->setGeometry(QRect(160, 80, 200, 30));
        inputbreakfast->setMinimumSize(QSize(200, 0));
        inputLunch = new QLineEdit(restaurant);
        inputLunch->setObjectName("inputLunch");
        inputLunch->setGeometry(QRect(160, 150, 200, 30));
        inputLunch->setMinimumSize(QSize(200, 0));
        inputDinner = new QLineEdit(restaurant);
        inputDinner->setObjectName("inputDinner");
        inputDinner->setGeometry(QRect(160, 220, 200, 30));
        inputDinner->setMinimumSize(QSize(200, 0));
        btnUpdateMenu = new QPushButton(restaurant);
        btnUpdateMenu->setObjectName("btnUpdateMenu");
        btnUpdateMenu->setGeometry(QRect(130, 290, 150, 35));
        btnUpdateMenu->setFont(font);
        listWidget = new QListWidget(restaurant);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(375, 21, 261, 371));
        listWidget->setFont(font);
        tabWidget->addTab(restaurant, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        lblAvgStudents = new QLabel(tab);
        lblAvgStudents->setObjectName("lblAvgStudents");
        lblAvgStudents->setGeometry(QRect(30, 270, 231, 31));
        lblAvgStudents->setFont(font);
        lblTotalRestaurants = new QLabel(tab);
        lblTotalRestaurants->setObjectName("lblTotalRestaurants");
        lblTotalRestaurants->setGeometry(QRect(30, 190, 131, 31));
        lblTotalRestaurants->setFont(font);
        lblTotalStudents = new QLabel(tab);
        lblTotalStudents->setObjectName("lblTotalStudents");
        lblTotalStudents->setGeometry(QRect(30, 130, 111, 21));
        lblTotalStudents->setFont(font);
        lblTotalRooms = new QLabel(tab);
        lblTotalRooms->setObjectName("lblTotalRooms");
        lblTotalRooms->setGeometry(QRect(30, 80, 121, 21));
        lblTotalRooms->setFont(font);
        lblTotalDorms = new QLabel(tab);
        lblTotalDorms->setObjectName("lblTotalDorms");
        lblTotalDorms->setGeometry(QRect(30, 20, 171, 31));
        lblTotalDorms->setFont(font);
        btnRefreshStats = new QPushButton(tab);
        btnRefreshStats->setObjectName("btnRefreshStats");
        btnRefreshStats->setGeometry(QRect(370, 360, 161, 41));
        btnRefreshStats->setFont(font);
        tabWidget->addTab(tab, QString());
        OOPproject->setCentralWidget(centralwidget);

        retranslateUi(OOPproject);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(OOPproject);
    } // setupUi

    void retranslateUi(QMainWindow *OOPproject)
    {
        OOPproject->setWindowTitle(QCoreApplication::translate("OOPproject", "OOPproject", nullptr));
        label->setText(QCoreApplication::translate("OOPproject", "Full Name", nullptr));
        label_2->setText(QCoreApplication::translate("OOPproject", "Academic Year", nullptr));
        label_3->setText(QCoreApplication::translate("OOPproject", "Dormitory", nullptr));
        label_4->setText(QCoreApplication::translate("OOPproject", "Room Number", nullptr));
        label_5->setText(QCoreApplication::translate("OOPproject", "Student ID", nullptr));
        btnAddStudent->setText(QCoreApplication::translate("OOPproject", "Add student", nullptr));
        btnRemoveStudent->setText(QCoreApplication::translate("OOPproject", "Remove student", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OOPproject", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OOPproject", "Full Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OOPproject", "Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OOPproject", "Room", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(student), QCoreApplication::translate("OOPproject", "student", nullptr));
        label_6->setText(QCoreApplication::translate("OOPproject", "Dormitory name", nullptr));
        label_7->setText(QCoreApplication::translate("OOPproject", "Restaurant name", nullptr));
        label_8->setText(QCoreApplication::translate("OOPproject", "Rooms capacity", nullptr));
        label_9->setText(QCoreApplication::translate("OOPproject", "Room number to add", nullptr));
        btnadd_dorm->setText(QCoreApplication::translate("OOPproject", "Add dorm", nullptr));
        addroom->setText(QCoreApplication::translate("OOPproject", "Add room to dorm", nullptr));
        btnremove_dorm->setText(QCoreApplication::translate("OOPproject", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OOPproject", "Dorm", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("OOPproject", "Restaurant", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("OOPproject", "Room", nullptr));
        label_11->setText(QCoreApplication::translate("OOPproject", "All dormitories :", nullptr));
        label_10->setText(QCoreApplication::translate("OOPproject", "Occupied and Available Rooms :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Dormitory), QCoreApplication::translate("OOPproject", "dormitories", nullptr));
        label_12->setText(QCoreApplication::translate("OOPproject", "Breakfast", nullptr));
        label_13->setText(QCoreApplication::translate("OOPproject", "Dormitory name", nullptr));
        label_14->setText(QCoreApplication::translate("OOPproject", "Lunch", nullptr));
        label_16->setText(QCoreApplication::translate("OOPproject", "Dinner", nullptr));
        btnUpdateMenu->setText(QCoreApplication::translate("OOPproject", "Update menu", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("OOPproject", "Breakfast", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(2);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("OOPproject", "Lunch", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(4);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("OOPproject", "Dinner", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(restaurant), QCoreApplication::translate("OOPproject", " restaurant", nullptr));
        lblAvgStudents->setText(QCoreApplication::translate("OOPproject", "Average Students per Room:", nullptr));
        lblTotalRestaurants->setText(QCoreApplication::translate("OOPproject", "Total Restaurants:", nullptr));
        lblTotalStudents->setText(QCoreApplication::translate("OOPproject", "Total Students:", nullptr));
        lblTotalRooms->setText(QCoreApplication::translate("OOPproject", "Total Rooms:", nullptr));
        lblTotalDorms->setText(QCoreApplication::translate("OOPproject", "Total Dormitories:", nullptr));
        btnRefreshStats->setText(QCoreApplication::translate("OOPproject", "Refresh Statistics", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("OOPproject", "Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OOPproject: public Ui_OOPproject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OOPPROJECT_H
