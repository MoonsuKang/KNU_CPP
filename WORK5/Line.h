//
//  Line.h
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#ifndef LINE_H
#define LINE_H

#include "Shape.h"

class Line : public Shape {
public:
    void draw() const override {
        cout << "Line" << endl;
    }
};

#endif // LINE_H

