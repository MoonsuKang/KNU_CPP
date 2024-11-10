//
//  Printer.cpp
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#include <iostream>
#include "Printer.h"
using namespace std;

Printer::Printer(string model, string manufacturer, int availableCount)
    : model(model), manufacturer(manufacturer), availableCount(availableCount), printCount(0) {}

Printer::~Printer() {}

void Printer::print(int pages) {
    if (pages > availableCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    } else {
        availableCount -= pages;
        printCount += pages;
        cout << "프린트하였습니다." << endl;
    }
}

void Printer::printStatus() const {
    cout << model << " , " << manufacturer << " , 남은 종이 " << availableCount << "장" << endl;
}

