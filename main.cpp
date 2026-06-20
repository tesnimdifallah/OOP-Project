#include <QApplication>
#include "OOPproject.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    a.setStyleSheet(
        "QMainWindow { background-color: #2b2b2b; }"

        "QTabWidget::pane { border: 1px solid #555; }"
        "QTabBar::tab { background: #3c3c3c; color: white;"
        "padding: 8px 20px; font-size: 13px; }"
        "QTabBar::tab:selected { background: #0078d4; color: white; }"

        "QLineEdit { background: #3c3c3c; color: white;"
        "border: 1px solid #555; border-radius: 4px; padding: 4px; }"


        "QPushButton { background: #0078d4; color: white;"
        "border-radius: 4px; padding: 6px 12px; font-size: 13px; }"
        "QPushButton:hover { background: #005a9e; }"


        "QTableWidget { background: #3c3c3c; color: white;"
        "gridline-color: #555; }"
        "QHeaderView::section { background: #2b2b2b; color: white;"
        "padding: 4px; border: 1px solid #555; }"
        "QListWidget { background: #3c3c3c; color: white;"
        "border: 1px solid #555; }"


        "QLabel { color: white; font-size: 13px; }"


        "QSpinBox { background: #3c3c3c; color: white;"
        "border: 1px solid #555; border-radius: 4px; padding: 4px; }"
        "QSpinBox::up-button { subcontrol-origin: border;"
        "subcontrol-position: top right; width: 20px;"
        "border-left: 1px solid #555; background: #4a4a4a; }"
        "QSpinBox::down-button { subcontrol-origin: border;"
        "subcontrol-position: bottom right; width: 20px;"
        "border-left: 1px solid #555; background: #4a4a4a; }"
        "QSpinBox::up-arrow { image: none; width: 0; height: 0;"
        "border-left: 5px solid transparent;"
        "border-right: 5px solid transparent;"
        "border-bottom: 6px solid white; }"
        "QSpinBox::down-arrow { image: none; width: 0; height: 0;"
        "border-left: 5px solid transparent;"
        "border-right: 5px solid transparent;"
        "border-top: 6px solid white; }"
        );

    OOPproject w;
    w.show();
    return a.exec();
}