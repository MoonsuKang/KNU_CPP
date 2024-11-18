//
//  Shape.h
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const = 0; // 순수 가상 함수
    virtual ~Shape() {}           // 가상 소멸자
};

#endif // SHAPE_H
