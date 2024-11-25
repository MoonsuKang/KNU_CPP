//
//  Rect.h
//  KNU_CPP1014
//
//  Created by kang on 11/25/24.
//

#ifndef RECT_H
#define RECT_H

#include "Shape.h"

class Rect : public Shape {
public:
    void draw() const override {
        cout << "Rectangle" << endl;
    }
};

#endif // RECT_H
