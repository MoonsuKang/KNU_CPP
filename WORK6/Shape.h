//
//  Shape.h
//  KNU_CPP1014
//
//  Created by kang on 11/25/24.
//

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0; // 순수 가상 함수
    virtual ~Shape() {}
};

#endif // SHAPE_H
