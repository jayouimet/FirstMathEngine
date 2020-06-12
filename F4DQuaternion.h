#pragma once

#include "F4DVector3.h"

namespace F4DEngine {
   class F4DQuaternion {
   private:
   public:
      // Scalar
      float s;
      // Vector
      F4DVector3 v;
      // Constructor
      F4DQuaternion();
      F4DQuaternion(float uS, F4DVector3& uV);
      // Copy constructor
      F4DQuaternion(const F4DQuaternion& q);
      // Destructor
      ~F4DQuaternion();
      // Operator overload
      F4DQuaternion& operator=(const F4DQuaternion& q);
      F4DQuaternion operator+(const F4DQuaternion& q);
      void operator+=(const F4DQuaternion& q);
      F4DQuaternion operator-(const F4DQuaternion& q);
      void operator-=(const F4DQuaternion& q);
      F4DQuaternion operator*(const F4DQuaternion& q);
      void operator*=(const F4DQuaternion& q);

      // Methods
      F4DQuaternion multiply(const F4DQuaternion& q);
   };
}