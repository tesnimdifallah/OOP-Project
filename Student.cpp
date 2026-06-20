#include "Student.h"
#include <iostream>

Student::Student(const std::string& id,
                 const std::string& fullName,
                 int academicYear)
    : Person(fullName), id(id), academicYear(academicYear) {}

std::string Student::getId()   const { return id; }
int         Student::getYear() const { return academicYear; }

void Student::setYear(int year) { academicYear = year; }

void Student::display() const {
    std::cout << "[Student] ID: " << id
              << " | Name: " << fullName
              << " | Year: " << academicYear << "\n";
}