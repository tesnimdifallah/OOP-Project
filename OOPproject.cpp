#include "OOPproject.h"
#include "ui_OOPproject.h"
#include <QMessageBox>


// ---- Constructor ------
OOPproject::OOPproject(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::OOPproject), university("ENSIA")
{
    ui->setupUi(this);

    // window icon
    setWindowIcon(QIcon(":/icons/icons/building.png"));

    // tab icons (adjust index if your tab order differs)
    ui->tabWidget->setTabIcon(0, QIcon(":/icons/icons/person.png"));
    ui->tabWidget->setTabIcon(1, QIcon(":/icons/icons/building.png"));
    ui->tabWidget->setTabIcon(2, QIcon(":/icons/icons/restaurant.png"));
    ui->tabWidget->setTabIcon(3, QIcon(":/icons/icons/chart.png"));

    // button icons
    ui->btnAddStudent->setIcon(QIcon(":/icons/icons/plus.png"));
    ui->btnRemoveStudent->setIcon(QIcon(":/icons/icons/trash.png"));
    ui->btnadd_dorm->setIcon(QIcon(":/icons/icons/plus.png"));
    ui->btnremove_dorm->setIcon(QIcon(":/icons/icons/trash.png"));
    ui->addroom->setIcon(QIcon(":/icons/icons/plus.png"));
    ui->btnUpdateMenu->setIcon(QIcon(":/icons/icons/refresh.png"));
    ui->btnRefreshStats->setIcon(QIcon(":/icons/icons/refresh.png"));
    FileManager::load(university, "university.txt");
    refreshStudentsTable();
    refreshDormitoriesTable();
    refreshRoomStatus();
    refreshRestaurantList();
    refreshStatistics();
}

// --- Destructor----
OOPproject::~OOPproject() {
    FileManager::save(university, "university.txt");
    delete ui;
}

// --- Add Student---
void OOPproject::on_btnAddStudent_clicked() {
    QString id  = ui->inputStudentID->text();
    QString name = ui->inputFullName->text();
    QString dorm = ui->inputDormName->text();
    int year  = ui->inputYear->value();
    int room = ui->inputRoomNumber->value();

    // validate inputs
    if (id.isEmpty() || name.isEmpty() || dorm.isEmpty()) {
        QMessageBox::warning(this, "Error", "ID, Name and Dorm cannot be empty!");
        return;
    }

    Dormitory* d = university.findDormitory(dorm.toStdString());
    if (!d) 
    {
        QMessageBox::warning(this, "Error","Dormitory not found!");
        return;
    }

    Student* s = new Student(id.toStdString(),name.toStdString(),year);
    if (d->assignStudent(s, room)) {
        QMessageBox::information(this, "Success","Student added successfully!");
        // clear inputs
        ui->inputStudentID->clear();
        ui->inputFullName->clear();
        ui->inputDormName->clear();
        refreshStudentsTable();
    } else {
        QMessageBox::warning(this, "Error","Could not assign student to room!");
        delete s;
    }
}

//-- Remove Student------
void OOPproject::on_btnRemoveStudent_clicked() {
    QString id = ui->inputStudentID->text();
    QString dorm = ui->inputDormName->text();
    int room = ui->inputRoomNumber->value();

    if (id.isEmpty() || dorm.isEmpty()) {
        QMessageBox::warning(this, "Error","ID and Dorm cannot be empty!");
        return;
    }

    Dormitory* d = university.findDormitory(dorm.toStdString());
    if (!d) {
        QMessageBox::warning(this, "Error", "Dormitory not found!");
        return;
    }

    if (d->removeStudent(id.toStdString(), room)) {
        QMessageBox::information(this, "Success","Student removed successfully!");
        refreshStudentsTable();
    } else {
        QMessageBox::warning(this, "Error","Student not found!");
    }
}

//-- Add Dormitory ----------
void OOPproject::on_btnadd_dorm_clicked() {
    QString dorm   = ui->inpudormitory->text();
    QString rest  = ui->inputreastaurant->text();
    int roomCount   = ui->spincapacity->value();
    int capacity  = ui->roomnum->value();

    if (dorm.isEmpty() || rest.isEmpty()) {
        QMessageBox::warning(this, "Error", "Dorm and Restaurant cannot be empty!");
        return;
    }

    university.addDormitory(dorm.toStdString(), rest.toStdString());

    Dormitory* d = university.findDormitory(dorm.toStdString());
    if (d) {
        for (int i = 0; i < roomCount; i++) {
            d->addRoom(1+ i, capacity);
        }
    }

    QMessageBox::information(this, "Success",  QString("Dormitory added with %1 rooms!").arg(roomCount));
    ui->inpudormitory->clear();
    ui->inputreastaurant->clear();
 refreshDormitoriesTable();
refreshRoomStatus();
}

// ==== Remove Dormitory ========
void OOPproject::on_btnremove_dorm_clicked() {
    QString dorm = ui->inpudormitory->text();
if (dorm.isEmpty()) {
        QMessageBox::warning(this, "Error","Dorm name cannot be empty!");
        return;
    }

    university.removeDormitory(dorm.toStdString());
    QMessageBox::information(this, "Success", "Dormitory removed!");
    ui->inpudormitory->clear();
    refreshDormitoriesTable();
    refreshRoomStatus();
}

//  Add Room ============
void OOPproject::on_addroom_clicked() {
    QString dorm = ui->inpudormitory->text();
    int roomNum = ui->roomnum->value();
    int capacity = ui->spincapacity->value();

    if (dorm.isEmpty()) {
        QMessageBox::warning(this, "Error", "Dorm name cannot be empty!");
        return;
    }

    Dormitory* d = university.findDormitory(dorm.toStdString());
    if (!d) {
        QMessageBox::warning(this, "Error", "Dormitory not found!");
        return;
    }

    d->addRoom(roomNum, capacity);
    QMessageBox::information(this, "Success","Room added successfully!");
    refreshDormitoriesTable();
    refreshRoomStatus();
}

//  Update Menu ------
void OOPproject::on_btnUpdateMenu_clicked() {
    QString dorm = ui->inputdormitoryn->text();
    QString breakfast = ui->inputbreakfast->text();
    QString lunch = ui->inputLunch->text();
    QString dinner = ui->inputDinner->text();

    if (dorm.isEmpty()) {
        QMessageBox::warning(this, "Error","Dorm name cannot be empty!");
        return;
    }

    Dormitory* d = university.findDormitory(dorm.toStdString());
    if (!d) {
        QMessageBox::warning(this, "Error","Dormitory not found!");
        return;
    }

    d->getRestaurant().setMeal("breakfast", breakfast.toStdString());
    d->getRestaurant().setMeal("lunch",  lunch.toStdString());
    d->getRestaurant().setMeal("dinner", dinner.toStdString());

    QMessageBox::information(this, "Success",
                             "Menu updated successfully!");
    refreshRestaurantList();
}

// Refresh Students Table=========
void OOPproject::refreshStudentsTable() {
    ui->tableWidget_2->setRowCount(0); //  this clears all rows first
    ui->tableWidget_2->setColumnCount(4);
    ui->tableWidget_2->setHorizontalHeaderLabels( {"ID", "Full Name", "Year", "Room"});

    for (const auto& dorm : university.getDormitories()) {
    for (const auto& room : dorm.getRooms()) {
            for (const auto* s : room.getOccupants()) {
                int row = ui->tableWidget_2->rowCount();
                ui->tableWidget_2->insertRow(row);
                ui->tableWidget_2->setItem(row, 0,new QTableWidgetItem( QString::fromStdString(s->getId())));
                ui->tableWidget_2->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(s->getFullName())));
                ui->tableWidget_2->setItem(row, 2, new QTableWidgetItem( QString::number(s->getYear())));
                ui->tableWidget_2->setItem(row, 3,  new QTableWidgetItem( QString::number(room.getRoomNumber())));
            }
        }
    }
}

// Refresh Dormitories Table -----
void OOPproject::refreshDormitoriesTable() {
    ui->tableWidget_4->setRowCount(0);
    ui->tableWidget_4->setColumnCount(3);
    ui->tableWidget_4->setHorizontalHeaderLabels( {"Dorm Name", "Restaurant", "Rooms"});

    for (const auto& dorm : university.getDormitories()) {
        int row = ui->tableWidget_4->rowCount();
        ui->tableWidget_4->insertRow(row);
        ui->tableWidget_4->setItem(row, 0, new QTableWidgetItem( QString::fromStdString(dorm.getName())));
        ui->tableWidget_4->setItem(row, 1, new QTableWidgetItem( QString::fromStdString( dorm.getRestaurant().getName()))); new QTableWidgetItem(QString::number(dorm.getRooms().size())));
    }
}
// shows occupied and available rooms for every dormitory
void OOPproject::refreshRoomStatus() {
    ui->textRoomStatus->clear();
    QString output;

    for (const auto& dorm : university.getDormitories()) {
        output += "=== " + QString::fromStdString(dorm.getName()) + " ===\n";

        for (const auto& room : dorm.getRooms()) {
            QString status = room.isFull() ? "FULL" : "AVAILABLE";
            output += "Room " + QString::number(room.getRoomNumber()) + " [" + QString::number(room.getOccupancy()) +  "/" + QString::number(room.getCapacity()) + "] - " + status + "\n";
        }
        output += "\n";
    }

    ui->textRoomStatus->setPlainText(output);
}

// --Refresh Restaurant List -------
void OOPproject::refreshRestaurantList() {
    ui->listWidget->clear();

    for (const auto& dorm : university.getDormitories()) {
        ui->listWidget->addItem(  "=== " + QString::fromStdString(dorm.getName()) + " ===");
        ui->listWidget->addItem( "Breakfast: " + QString::fromStdString(  dorm.getRestaurant().getMeal("breakfast")));
        ui->listWidget->addItem( "Lunch: " + QString::fromStdString(dorm.getRestaurant().getMeal("lunch")));
        ui->listWidget->addItem( "Dinner: " + QString::fromStdString( dorm.getRestaurant().getMeal("dinner")));
        ui->listWidget->addItem("---------------");
    }
}

// calculates and displays system_wide statistics
void OOPproject::refreshStatistics() {
    int totalDorms  = university.getDormitories().size();
    int totalRooms= 0;
    int totalStudents = 0;

    for (const auto& dorm : university.getDormitories()) {
     totalRooms += dorm.getRooms().size();
        for (const auto& room : dorm.getRooms())
           totalStudents += room.getOccupancy();
    }

    double avg = (totalRooms > 0) ? (double)totalStudents / totalRooms : 0.0;

    ui->lblTotalDorms->setText( "Total Dormitories: " + QString::number(totalDorms));
    ui->lblTotalRooms->setText("Total Rooms: " + QString::number(totalRooms));
    ui->lblTotalStudents->setText( "Total Students: " + QString::number(totalStudents));
    ui->lblTotalRestaurants->setText( "Total Restaurants: " + QString::number(totalDorms));
    ui->lblAvgStudents->setText("Average Students per Room: " +  QString::number(avg, 'f', 2));
}

// refresh button handler
void OOPproject::on_btnRefreshStats_clicked() {
    refreshStatistics();
}
