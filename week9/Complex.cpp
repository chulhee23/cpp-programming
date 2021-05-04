#include<iostream>
using namespace std;

enum COMPLEX_PART {RE, IM};
class Complex{
    double re, im;

public:
    Complex(double r=0, double i=0): re(r), im(i){}
    ~Complex(){}
    double real() {return re;}
    double imag() {return im;}
    Complex add(const Complex& c) const;
    friend Complex operator+(const Complex& c, const  Complex& d);
    friend bool operator==(const Complex& c, const Complex& d);
    friend ostream& operator<<(ostream& os, const Complex& c);
    Complex& operator++() {re++; return *this;}
    Complex operator++(int ){Complex t(*this); operator++(); return t;}
    Complex& operator+=(const Complex& c){re+=c.re; im+=c.im; return *this;}
    double& operator[](COMPLEX_PART idx){return (idx ? re: im);}
    Complex& operator=(const Complex& c);
    void print() const{
        cout << re << " + "  << im << "i" << endl;
    }
};

Complex operator+(const Complex& c, const Complex& d){
    Complex result(c.re + d.re, c.im + d.im);
    return result;
}

Complex Complex::add(const Complex& c) const {
    Complex result(re+c.re, im+c.im);
    return result;
}

bool operator==(const Complex& c, const Complex& d){
    return((c.re==d.re)&&(c.im==d.im));
}

bool operator!=(const Complex& c, const Complex& d){
    return !(c==d);
}
ostream& operator<<(ostream& os, const Complex& c){
    os << c.re << " + "<<c.im<< "i";
    return os;
}
Complex& Complex::operator=(const Complex& c){
    re = c.re; im = c.im;
    return *this;
}
int main(){
    Complex x(2,3);
    Complex y(-1, -3), z;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    z = x++;
    cout << "x = " << x <<endl;
    cout << "z = " << z << endl;
    z = ++x;
    cout <<"x = " << x << endl;
    cout <<"z = " << z << endl;
    z+=x;
    cout <<"x = " << x << endl;
    cout <<"z = " << z << endl;
    z[IM] = x[RE];
    cout << "z = " << z << endl;

    cout <<("x!=y -> ") << (x!=y) << endl;

    return 0;
}