//
//  Circle.h
//  KNU_CPP1014
//
//  Created by kang on 11/25/24.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Circle" << endl;
    }
};

#endif // CIRCLE_H
