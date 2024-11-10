//
//  InkJetPrinter.cpp
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#include <iostream>
#include "InkJetPrinter.h"
using namespace std;

InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk)
    : Printer(model, manufacturer, availableCount), availableInk(availableInk) {}

void InkJetPrinter::printInkJet(int pages) {
    if (pages > availableCount) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    } else if (pages > availableInk) {
        cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
    } else {
        availableCount -= pages;
        availableInk -= pages;
        cout << "프린트하였습니다." << endl;
    }
}

void InkJetPrinter::printStatus() const {
    Printer::printStatus();
    cout << "남은 잉크 " << availableInk << endl;
}
