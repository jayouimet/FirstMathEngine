#include "F4DMatrix3.h"

namespace F4DEngine {
   F4DMatrix3::F4DMatrix3() 
   {
      for (int i = 0; i < 9; i++)
      {
         matrixData[i] = 0.0f;
      }
   }
   F4DMatrix3::F4DMatrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8)
   {
      matrixData[0] = m0;
      matrixData[3] = m3;
      matrixData[6] = m6;

      matrixData[1] = m1;
      matrixData[4] = m4;
      matrixData[7] = m7;

      matrixData[2] = m2;
      matrixData[5] = m5;
      matrixData[8] = m8;
   }
   F4DMatrix3::F4DMatrix3(const F4DMatrix3& m)
   {
      matrixData[0] = m.matrixData[0];
      matrixData[3] = m.matrixData[3];
      matrixData[6] = m.matrixData[6];

      matrixData[1] = m.matrixData[1];
      matrixData[4] = m.matrixData[4];
      matrixData[7] = m.matrixData[7];

      matrixData[2] = m.matrixData[2];
      matrixData[5] = m.matrixData[5];
      matrixData[8] = m.matrixData[8];
   }
   F4DMatrix3::~F4DMatrix3()
   {
   }
   F4DMatrix3& F4DMatrix3::operator=(const F4DMatrix3& m)
   {
      matrixData[0] = m.matrixData[0];
      matrixData[3] = m.matrixData[3];
      matrixData[6] = m.matrixData[6];

      matrixData[1] = m.matrixData[1];
      matrixData[4] = m.matrixData[4];
      matrixData[7] = m.matrixData[7];

      matrixData[2] = m.matrixData[2];
      matrixData[5] = m.matrixData[5];
      matrixData[8] = m.matrixData[8];
      return *this;
   }
   F4DMatrix3 F4DMatrix3::operator+(const F4DMatrix3& m)
   {
      F4DMatrix3 n;
      n.matrixData[0] = matrixData[0] + m.matrixData[0];
      n.matrixData[3] = matrixData[3] + m.matrixData[3];
      n.matrixData[6] = matrixData[6] + m.matrixData[6];

      n.matrixData[1] = matrixData[1] + m.matrixData[1];
      n.matrixData[4] = matrixData[4] + m.matrixData[4];
      n.matrixData[7] = matrixData[7] + m.matrixData[7];

      n.matrixData[2] = matrixData[2] + m.matrixData[2];
      n.matrixData[5] = matrixData[5] + m.matrixData[5];
      n.matrixData[8] = matrixData[8] + m.matrixData[8];
      return n;
   }
   void F4DMatrix3::operator+=(const F4DMatrix3& m)
   {
      matrixData[0] += m.matrixData[0];
      matrixData[3] += m.matrixData[3];
      matrixData[6] += m.matrixData[6];

      matrixData[1] += m.matrixData[1];
      matrixData[4] += m.matrixData[4];
      matrixData[7] += m.matrixData[7];

      matrixData[2] += m.matrixData[2];
      matrixData[5] += m.matrixData[5];
      matrixData[8] += m.matrixData[8];
   }
   F4DMatrix3 F4DMatrix3::operator*(const F4DMatrix3& m)
   {
      return F4DMatrix3(
         matrixData[0] * m.matrixData[0] + matrixData[3] * m.matrixData[1] + matrixData[6] * m.matrixData[2],
         matrixData[0] * m.matrixData[3] + matrixData[3] * m.matrixData[4] + matrixData[6] * m.matrixData[5],
         matrixData[0] * m.matrixData[6] + matrixData[3] * m.matrixData[7] + matrixData[6] * m.matrixData[8],
         
         matrixData[1] * m.matrixData[0] + matrixData[4] * m.matrixData[1] + matrixData[7] * m.matrixData[2],
         matrixData[1] * m.matrixData[3] + matrixData[4] * m.matrixData[4] + matrixData[7] * m.matrixData[5],
         matrixData[1] * m.matrixData[6] + matrixData[4] * m.matrixData[7] + matrixData[7] * m.matrixData[8],
         
         matrixData[2] * m.matrixData[0] + matrixData[5] * m.matrixData[1] + matrixData[8] * m.matrixData[2],
         matrixData[2] * m.matrixData[3] + matrixData[5] * m.matrixData[4] + matrixData[8] * m.matrixData[5],
         matrixData[2] * m.matrixData[6] + matrixData[5] * m.matrixData[7] + matrixData[8] * m.matrixData[8]
      );
   }
   void F4DMatrix3::operator*=(const F4DMatrix3& m)
   {
      float temp1;
      float temp2;
      float temp3;

      temp1 = matrixData[0] * m.matrixData[0] + matrixData[3] * m.matrixData[1] + matrixData[6] * m.matrixData[2];
      temp2 = matrixData[0] * m.matrixData[3] + matrixData[3] * m.matrixData[4] + matrixData[6] * m.matrixData[5];
      temp3 = matrixData[0] * m.matrixData[6] + matrixData[3] * m.matrixData[7] + matrixData[6] * m.matrixData[8];

      matrixData[0] = temp1;
      matrixData[3] = temp2;
      matrixData[6] = temp3;

      temp1 = matrixData[1] * m.matrixData[0] + matrixData[4] * m.matrixData[1] + matrixData[7] * m.matrixData[2];
      temp2 = matrixData[1] * m.matrixData[3] + matrixData[4] * m.matrixData[4] + matrixData[7] * m.matrixData[5];
      temp3 = matrixData[1] * m.matrixData[6] + matrixData[4] * m.matrixData[7] + matrixData[7] * m.matrixData[8];

      matrixData[1] = temp1;
      matrixData[4] = temp2;
      matrixData[7] = temp3;

      temp1 = matrixData[2] * m.matrixData[0] + matrixData[5] * m.matrixData[1] + matrixData[8] * m.matrixData[2];
      temp2 = matrixData[2] * m.matrixData[3] + matrixData[5] * m.matrixData[4] + matrixData[8] * m.matrixData[5];
      temp3 = matrixData[2] * m.matrixData[6] + matrixData[5] * m.matrixData[7] + matrixData[8] * m.matrixData[8];

      matrixData[2] = temp1;
      matrixData[5] = temp2;
      matrixData[8] = temp3;
   }
   F4DMatrix3 F4DMatrix3::operator*(const float s)
   {
      return F4DMatrix3(
         matrixData[0] * s, matrixData[3] * s, matrixData[6] * s,
         matrixData[1] * s, matrixData[4] * s, matrixData[7] * s, 
         matrixData[2] * s, matrixData[5] * s, matrixData[8] * s
      );
   }
   void F4DMatrix3::operator*=(const float s)
   {
      matrixData[0] *= s; 
      matrixData[3] *= s; 
      matrixData[6] *= s;

      matrixData[1] *= s; 
      matrixData[4] *= s; 
      matrixData[7] *= s;

      matrixData[2] *= s; 
      matrixData[5] *= s; 
      matrixData[8] *= s;
   }
   F4DVector3 F4DMatrix3::operator*(const F4DVector3& v)
   {
      return F4DVector3(
         matrixData[0] * v.x + matrixData[3] * v.y + matrixData[6] * v.z, 
         matrixData[1] * v.x + matrixData[4] * v.y + matrixData[7] * v.z, 
         matrixData[2] * v.x + matrixData[5] * v.y + matrixData[8] * v.z
      );
   }
   F4DMatrix3 F4DMatrix3::getInverseOfMatrix()
   {
      F4DMatrix3 result;
      result.setMatrixAsInverseOfGivenMatrix(*this);
      return result;
   }
   F4DMatrix3 F4DMatrix3::getTransposeOfMatrix()
   {
      F4DMatrix3 result;
      result.setMatrixAsTransposeOfGivenMatrix(*this);
      return result;
   }
   void F4DMatrix3::invertMatrix()
   {
      setMatrixAsInverseOfGivenMatrix(*this);
   }
   void F4DMatrix3::show()
   {
      std::cout << "[" << matrixData[0] << "," << matrixData[3] << "," << matrixData[6] << "," << std::endl;
      std::cout << matrixData[1] << "," << matrixData[4] << "," << matrixData[7] << "," << std::endl;
      std::cout << matrixData[2] << "," << matrixData[5] << "," << matrixData[8] << "]" << std::endl;
   }
   void F4DMatrix3::setMatrixAsIdentityMatrix()
   {
      matrixData[0] = 1.0f;
      matrixData[3] = 0.0f;
      matrixData[6] = 0.0f;

      matrixData[1] = 0.0f;
      matrixData[4] = 1.0f;
      matrixData[7] = 0.0f;

      matrixData[2] = 0.0f;
      matrixData[5] = 0.0f;
      matrixData[8] = 1.0f;
   }
   void F4DMatrix3::setMatrixAsInverseOfGivenMatrix(const F4DMatrix3& m)
   {
      float m0, m1, m2, m3, m4, m5, m6, m7, m8;

      m0 = m.matrixData[4] * m.matrixData[8] - m.matrixData[7] * m.matrixData[5];
      m1 = -(m.matrixData[1] * m.matrixData[8] - m.matrixData[7] * m.matrixData[2]);
      m2 = m.matrixData[1] * m.matrixData[5] - m.matrixData[4] * m.matrixData[2];

      m3 = -(m.matrixData[3] * m.matrixData[8] - m.matrixData[5] * m.matrixData[6]);
      m4 = m.matrixData[0] * m.matrixData[8] - m.matrixData[6] * m.matrixData[2];
      m5 = -(m.matrixData[0] * m.matrixData[5] - m.matrixData[3] * m.matrixData[2]);

      m6 = m.matrixData[3] * m.matrixData[7] - m.matrixData[4] * m.matrixData[6];
      m7 = -(m.matrixData[0] * m.matrixData[7] - m.matrixData[1] * m.matrixData[6]);
      m8 = m.matrixData[0] * m.matrixData[4] - m.matrixData[3] * m.matrixData[1];

      float invd = 1 / (m.matrixData[0] * m0 + m.matrixData[3] * m1 + m.matrixData[6] * m2);

      matrixData[0] = m0 * invd;
      matrixData[1] = m1 * invd;
      matrixData[2] = m2 * invd;

      matrixData[3] = m3 * invd;
      matrixData[4] = m4 * invd;
      matrixData[5] = m5 * invd;

      matrixData[6] = m6 * invd;
      matrixData[7] = m7 * invd;
      matrixData[8] = m8 * invd;
   }
   void F4DMatrix3::setMatrixAsTransposeOfGivenMatrix(const F4DMatrix3& m)
   {
      matrixData[0] = m.matrixData[0];
      matrixData[3] = m.matrixData[1];
      matrixData[6] = m.matrixData[2];

      matrixData[1] = m.matrixData[3];
      matrixData[4] = m.matrixData[4];
      matrixData[7] = m.matrixData[5];

      matrixData[2] = m.matrixData[6];
      matrixData[5] = m.matrixData[7];
      matrixData[8] = m.matrixData[8];
   }
   F4DVector3 F4DMatrix3::transformVectorByMatrix(const F4DVector3& v)
   {
      return (*this) * v;
   }
   void F4DMatrix3::transposeMatrix()
   {
      setMatrixAsTransposeOfGivenMatrix(*this);
   }
}