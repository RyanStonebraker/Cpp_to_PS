// sandbox.cpp
// Contains example code to test framework on the spot, rather than with structured
// tests

#include "Polygon.h"
#include "Rotate.h"

#include <iostream>
using std::cout;
using std::endl;

#include <memory>

int main () {
  Polygon testShape(4, 3);

  Rotate rotateTest(testShape, Rotate::RotationAngle::FLIP);
  testShape.addExpression(rotateTest);
  testShape.setPosition(3,3);
  testShape.drawToFile("test.ps");
}
