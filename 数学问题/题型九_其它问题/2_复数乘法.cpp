/*
* 设z1=a+bi，z2=c+di(a、b、c、d∈R)是任意两个复数，那么它们的积(a+bi)(c+di)=(ac-bd)+(bc+ad)i。
* 其实就是把两个复数相乘，类似两个多项式相乘，展开得: ac+adi+bci+bdi2，因为i2=-1，所以结果是(ac－bd)+(bc+ad)i 。两个复数的积仍然是一个复数。
*/
#include <iostream>
using namespace std;
class complex {
public:
    complex() {
        real = 0.0;
        imag = 0.0;
    }
    complex(double r_, double i_) {
        real = r_;
        imag = i_;
    }
    void print() {
        if (imag >= 0)
            cout << real << "+" << imag << "i" << endl;
        else
            cout << real << imag << "i" << endl;
    }
    complex add(const complex& z2) {
        complex result;
        result.real = real + z2.real;
        result.imag = imag + z2.imag;
        return result;
    }
    complex multiply(const complex& z2) {
        complex result;
        result.real = real * z2.real - imag * z2.imag;
        result.imag = real * z2.imag + imag * z2.real;
        return result;
    }
private:
    // real and imaginary part
    double real, imag;
};
int main() {
    complex c1(1, 2), c2(3.3, -2.1);
    complex c3, c4;
    c3 = c1.add(c2);
    c4 = c1.multiply(c2);
    c1.print();
    c2.print();
    cout << "c1+c2=";
    c3.print();
    cout << "c1*c2=";
    c4.print();
    return 0;
}

