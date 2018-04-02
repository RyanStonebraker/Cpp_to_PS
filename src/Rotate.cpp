// Rotate.cpp
// Inheritted class from Expression that takes a Shape and rotates it

#include "Rotate.h"
#include <memory>
#include <iostream>

// template <typename InherittedShape>
// Rotate::Rotate(InherittedShape & shape, RotationAngle rotationAmount) : _rotationAmount(rotationAmount) {
//   _target = std::make_shared<InherittedShape>(shape);
//   setEnclosing();
// }

std::string Rotate::drawCurrentAboveToString() {
  auto xOrigin = _target->getX() + double(_target->getWidth())/2;
  auto yOrigin = _target->getY() + double(_target->getHeight())/2;
  std::string topString;
  topString += "gsave\n";

  topString += convertUnits(xOrigin, 1) + " " + convertUnits(yOrigin, 1) + " translate\n";
  auto rotation = std::to_string(_rotationAmount);
  topString += rotation + " rotate\n";
  topString += convertUnits(-xOrigin, 1) + " " + convertUnits(-yOrigin, 1) + " translate\n";
  return topString;
}

std::string Rotate::drawCurrentBelowToString() {
  return {"grestore"};
}
