//
//  LaserPrinter.h
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#ifndef LASERPRINTER_H
#define LASERPRINTER_H

#include "Printer.h"

class LaserPrinter : public Printer {
private:
    int availableToner;  // 토너 잔량

public:
    LaserPrinter(string model, string manufacturer, int availableCount, int availableToner);
    void printLaser(int pages);
    void printStatus() const override;
};

#endif // LASERPRINTER_H

