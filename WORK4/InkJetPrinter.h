//
//  InkJetPrinter.h
//  KNU_CPP
//
//  Created by kang on 11/10/24.
//

#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H

#include "Printer.h"

class InkJetPrinter : public Printer {
private:
    int availableInk;  // 잉크 잔량

public:
    InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk);
    void printInkJet(int pages);
    void printStatus() const override;
};

#endif // INKJETPRINTER_H
