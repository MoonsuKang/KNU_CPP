//
//  GraphicEditor.h
//  KNU_CPP
//
//  Created by kang on 11/18/24.
//

#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <vector>
#include "Shape.h"

class GraphicEditor {
private:
    vector<Shape*> shapes; // 도형을 저장하는 벡터

public:
    void insertShape(int shapeType);
    void deleteShape(int index);
    void showAllShapes() const;
    ~GraphicEditor();
};

#endif // GRAPHICEDITOR_H

