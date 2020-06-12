#include <iostream>
#include "F4DVector3.h"
#include "F4DMatrix3.h"
#include "F4DQuaternion.h"

int main(int argc, const char* argv[])
{
   F4DEngine::F4DVector3 axis(1, 0, 0);
   F4DEngine::F4DQuaternion q(90.0f, axis);
   F4DEngine::F4DQuaternion p(10.0f, axis);
   F4DEngine::F4DQuaternion nQ = q + p;
   q += p;
   return 0;
}
