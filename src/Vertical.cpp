// Vertical.cpp
// A vertically drawn stack of shapes

#include "Vertical.h"
#include "Shape.h"

Vertical::Vertical (std::vector <std::shared_ptr<Shape>> & shapes) : _xOrigin(0), _yOrigin(0) {
  _stackedHeight = _yOrigin;
  for (auto & currentShape : shapes) {
      currentShape->setY(_stackedHeight + _yOrigin);
      _stackedHeight += currentShape->getHeight();
      currentShape->setX(_xOrigin - double(currentShape->getWidth())/2);
      addSharedExpression(currentShape);
  }
}

Vertical::Vertical (std::initializer_list<std::shared_ptr<Shape>> & shapes) : _xOrigin(0), _yOrigin(0) {
  _stackedHeight = _yOrigin;
  for (auto & currentShape : shapes) {
    currentShape->setY(_stackedHeight + _yOrigin);
    _stackedHeight += currentShape->getHeight();
    currentShape->setX(_xOrigin - double(currentShape->getWidth())/2);
    addSharedExpression(currentShape);
  }
}

std::string Vertical::drawCurrentAboveToString() {
  return {};
}

std::string Vertical::drawCurrentBelowToString() {

  return {};
}

void Vertical::setPosition(double x, double y) {
  _xOrigin = x;
  _yOrigin = y;
}
