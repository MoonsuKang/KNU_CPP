//
//  GraphicEditor.cpp
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"

void GraphicEditor::insertShape(int shapeType) {
    Shape* shape = nullptr;
    if (shapeType == 1) {
        shape = new Line();
    } else if (shapeType == 2) {
        shape = new Circle();
    } else if (shapeType == 3) {
        shape = new Rect();
    }

    if (shape) {
        shapes.push_back(shape);
        cout << "도형이 추가되었습니다." << endl;
    } else {
        cout << "잘못된 입력입니다." << endl;
    }
}

void GraphicEditor::deleteShape(int index) {
    if (index < 0 || index >= shapes.size()) {
        cout << "잘못된 인덱스입니다." << endl;
    } else {
        delete shapes[index];
        shapes.erase(shapes.begin() + index);
        cout << "도형이 삭제되었습니다." << endl;
    }
}

void GraphicEditor::showAllShapes() const {
    for (size_t i = 0; i < shapes.size(); ++i) {
        cout << i << ": ";
        shapes[i]->draw();
    }
}

GraphicEditor::~GraphicEditor() {
    for (Shape* shape : shapes) {
        delete shape;
    }
}

