#include "Vector.h"


int main()
{
    Vector v1;
    Vector v2;
    float x1 = 2;
    float y1 = 5;
    float x2 = 3;
    float y2 = 4;
    v1.SetVec(x1, y1);
    v2.SetVec(x2, y2);
    std::cout << "Scal proizved: "<<v1.Scal2V(v2)<<std::endl;
    std::cout << "Vec proizved: " <<"0 0 "<< v1.VectYmn2V(v2) << std::endl;
    std::cout << "Vec 1 length: " << v1.LengthVec() << std::endl;
    std::cout << "Vec 2 length: " << v2.LengthVec()<<std::endl;
}
