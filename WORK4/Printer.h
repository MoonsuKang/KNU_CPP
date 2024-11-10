//
//  Printer.h
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#ifndef PRINTER_H
#define PRINTER_H

#include <string>
using namespace std;

// 기본 Printer 클래스
class Printer {
protected:
    string model;
    string manufacturer;
    int printCount;   // 인쇄 매수
    int availableCount; // 인쇄 종이 잔량

public:
    Printer(string model, string manufacturer, int availableCount);
    virtual ~Printer();
    virtual void print(int pages);
    virtual void printStatus() const;
};

#endif // PRINTER_H
