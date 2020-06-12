#include "F4DQuaternion.h"

namespace F4DEngine {
   F4DQuaternion::F4DQuaternion():s(0.0f),v(F4DVector3()){}

   F4DQuaternion::F4DQuaternion(float uS, F4DVector3& uV):s(uS),v(uV){}

   F4DQuaternion::F4DQuaternion(const F4DQuaternion& q):s(q.s),v(q.v){}

   F4DQuaternion::~F4DQuaternion()
   {
   }

   F4DQuaternion& F4DQuaternion::operator=(const F4DQuaternion& q)
   {
      s = q.s;
      v = q.v;
      return *this;
   }
   F4DQuaternion F4DQuaternion::operator+(const F4DQuaternion& q)
   {
      float scalar = s + q.s;
      F4DVector3 vector = v + q.v;
      return F4DQuaternion(scalar, vector);
   }
   void F4DQuaternion::operator+=(const F4DQuaternion& q)
   {
      s += q.s;
      v += q.v;
   }
   F4DQuaternion F4DQuaternion::operator-(const F4DQuaternion& q)
   {
      float scalar = s - q.s;
      F4DVector3 vector = v - q.v;
      return F4DQuaternion(scalar, vector);
   }
   void F4DQuaternion::operator-=(const F4DQuaternion& q)
   {
      s -= q.s;
      v -= q.v;
   }
   F4DQuaternion F4DQuaternion::operator*(const F4DQuaternion& q)
   {
      return F4DQuaternion();
   }
   void F4DQuaternion::operator*=(const F4DQuaternion& q)
   {
      (*this) = multiply(q);
   }
   F4DQuaternion F4DQuaternion::multiply(const F4DQuaternion& q)
   {
      return F4DQuaternion();
   }
}
