#include "F4DQuaternion.h"

int main(int argc, const char* argv[])
{
   F4DEngine::F4DVector3 v(0, 1, 0);
   F4DEngine::F4DVector3 axis(1, 0, 0);
   F4DEngine::F4DVector3 rotatedVector = v.rotateVectorAboutAngleAndAxis(90, axis);
   rotatedVector.show();
   return 0;
}
