#include "F4DVector3.h"

namespace F4DEngine {
   F4DVector3::F4DVector3():x(0.0), y(0.0), z(0.0) {}
   F4DVector3::F4DVector3(float uX, float uY, float uZ):x(uX), y(uY), z(uZ) {}

   F4DVector3::~F4DVector3(){}

   F4DVector3::F4DVector3(const F4DVector3& v):x(v.x), y(v.y), z(v.z) {}

   F4DVector3& F4DVector3::operator=(const F4DVector3& v) {
      x = v.x;
      y = v.y;
      z = v.z;
      return *this;
   }
   F4DVector3 F4DVector3::operator+(const F4DVector3& v) {
      return F4DVector3(x + v.x, y + v.y, z + v.z);
   }
   void F4DVector3::operator+=(const F4DVector3& v) {
      x += v.x;
      y += v.y;
      z += v.z;
   }
   F4DVector3 F4DVector3::operator-(const F4DVector3& v) {
      return F4DVector3(x - v.x, y - v.y, z - v.z);
   }
   void F4DVector3::operator-=(const F4DVector3& v) {
      x -= v.x;
      y -= v.y;
      z -= v.z;
   }

   float F4DVector3::operator*(const F4DVector3& v) {
      return x * v.x
         + y * v.y
         + z * v.z;
   }
   float F4DVector3::dot(const F4DVector3& v) {
      return x * v.x
         + y * v.y
         + z * v.z;
   }

   F4DVector3 F4DVector3::cross(const F4DVector3& v) {
      return F4DVector3(
         y * v.z - z * v.y,
         z * v.x - x * v.z, 
         x * v.y - y * v.x
      );
   }
   F4DVector3 F4DVector3::operator%(const F4DVector3& v) {
      return F4DVector3(
         y * v.z - z * v.y,
         z * v.x - x * v.z,
         x * v.y - y * v.x
      );
   }
   void F4DVector3::operator%=(const F4DVector3& v) {
      *this = cross(v);
   }

   F4DVector3 F4DVector3::operator*(const float& f) {
      return F4DVector3(x * f, y * f, z * f);
   }
   void F4DVector3::operator*=(const float& f) {
      x *= f;
      y *= f;
      z *= f;
   }
   F4DVector3 F4DVector3::operator/(const float& f) {
      return F4DVector3(x / f, y / f, z / f);
   }
   void F4DVector3::operator/=(const float& f) {
      x /= f;
      y /= f;
      z /= f;
   }

   float F4DVector3::magnitude() {
      return sqrt((x * x) + (y * y) + (z * z));
   }
   void F4DVector3::normalize() {
      float magnitude = sqrt((x * x) + (y * y) + (z * z));
      if (magnitude > 0.0f) {
         float oneOverMagnitude = 1.0 / magnitude;
         x *= oneOverMagnitude;
         y *= oneOverMagnitude;
         z *= oneOverMagnitude;
      }
   }
   void F4DVector3::show()
   {
      std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
   }
}