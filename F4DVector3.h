#pragma once

#include <math.h>
#include <iostream>

namespace F4DEngine {
   class F4DVector3 {
   private:
   public:
      // Directions
      float x, y, z;
      // Constructors
      F4DVector3();
      F4DVector3(float uX, float uY, float uZ);
      // Destructor
      ~F4DVector3();
      // Copying constructor
      F4DVector3(const F4DVector3& v);
#pragma region Operators
#pragma region Vector with Vector Operators
      // Equality operator
      F4DVector3& operator=(const F4DVector3& v);
      // Addition operator
      F4DVector3 operator+(const F4DVector3& v);
      void operator+=(const F4DVector3& v);
      // Substraction operator
      F4DVector3 operator-(const F4DVector3& v);
      void operator-=(const F4DVector3& v);
      // Dot operator
      float operator*(const F4DVector3& v);
      float dot(const F4DVector3& v);
      // Cross operator
      F4DVector3 cross(const F4DVector3& v);
      F4DVector3 operator%(const F4DVector3& v);
      void operator%=(const F4DVector3& v);
#pragma endregion
#pragma region Vector with Floating number Operators
      // Multiplication operator
      F4DVector3 operator*(const float& f);
      void operator*=(const float& f);
      // Division operator
      F4DVector3 operator/(const float& f);
      void operator/=(const float& f);
#pragma endregion
#pragma endregion
#pragma region Methods
      float magnitude();
      void normalize();
      void show();
#pragma endregion
   };
}