//
//  LaserPrinter.cpp
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#include <iostream>
#include "LaserPrinter.h"
using namespace std;

LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner)
    : Printer(model, manufacturer, availableCount), availableToner(availableToner) {}

void LaserPrinter::printLaser(int pages) {
    if (pages > availableCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    } else if (pages > availableToner) {
        cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
    } else {
        availableCount -= pages;
        availableToner -= pages;
        cout << "프린트하였습니다." << endl;
    }
}

void LaserPrinter::printStatus() const {
    Printer::printStatus();
    cout << "남은 토너 " << availableToner << endl;
}
