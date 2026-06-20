#pragma once
#include <QMainWindow>
#include "University.h"
#include "FileManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class OOPproject; }
QT_END_NAMESPACE

// OOPproject class: main GUI window
// connects Qt interface to the backend university system
// handles all user interactions through button slots
class OOPproject : public QMainWindow {
    Q_OBJECT

public:// constructor: sets up UI and loads saved data
    OOPproject(QWidget *parent = nullptr);
     // destructor: saves data before closing
    ~OOPproject();

private slots:

    void on_btnAddStudent_clicked();// adds new student to room
    void on_btnRemoveStudent_clicked(); // removes student from room

 void on_btnadd_dorm_clicked(); // adds new dormitory
    void on_btnremove_dorm_clicked(); // removes dormitory
void on_addroom_clicked();// adds room to dormitory


    void on_btnUpdateMenu_clicked();// updates daily menu

    void on_btnRefreshStats_clicked();


private:
    Ui::OOPproject* ui;// Qt UI object
    University university;// main university data object


void refreshStudentsTable();// updates student table
 void refreshDormitoriesTable();// updates dormitory table
 void refreshRestaurantList(); // updates restaurant list
void refreshRoomStatus();
    void refreshStatistics();


};



