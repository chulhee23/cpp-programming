#include<iostream>
#include<limits.h>
using namespace std;

class Kvector{
    private:
        int *m;
        int len;
    public:
        Kvector(int sz = 0, int value = 0);
        Kvector(const Kvector&v);
        ~Kvector();
        Kvector& operator=(const Kvector& v);
        bool operator==(const Kvector& v);
        bool operator!=(const Kvector& v);
        friend ostream& operator<<(ostream& os, const Kvector& v);
        int& operator[](int idx);
        void print() const{
            for(int i=0; i<len; i++) cout << m[i] << " ";
            cout << endl;
        }
        void clear(){
            delete[] m;
            m = nullptr;
            len = 0;
        }
        int size(){return len;}
};
//constructor
Kvector::Kvector(int sz, int value){
    len = sz;
    if(!sz) m = nullptr;
    m = new int[sz];
    for(int i=0; i<sz; i++) m[i] = value;

    cout << this << " : Kvector(int, int)\n";
}
Kvector::Kvector(const Kvector& v){
    len = v.len;
    if(!len) m = nullptr;
    m = new int(len);
    for(int i=0; i<len; i++) m[i] = v.m[i];

    cout << this << " : Kvector(Kvector&) \n";
}
Kvector::~Kvector(){
    len = 0;
    delete[] m;

    cout << this <<" : ~Kvector()\n";
}
Kvector& Kvector::operator=(const Kvector& v){
    len = v.len;
    if(!len) m=nullptr;
    m = new int[len];
    for(int i=0; i<len; i++)m[i] = v.m[i];

    return *this;
}
bool Kvector::operator==(const Kvector& v){
    bool rst = true;
    if(len != v.len) rst = false;
    else{
        for(int i=0; i<len; i++){
            if(m[i]!=v.m[i]){rst = false; break;}
        }
    }
    return rst;
}

bool Kvector::operator!=(const Kvector& v){
    return !(*this == v);
}

int& Kvector::operator[](int idx){
    bool a = idx>0&&idx<len;
    if(a) return m[idx];
    //조건에 만족하지 않을때 하는 방법은 없나?
}

ostream& operator<<(ostream& os, const Kvector& v){
    for(int i=0; i<v.len; i++) os << v.m[i] << " ";
    return os;
}
int main(){
    Kvector v1(3); v1.print();
    Kvector v2(2, 9); v2.print();
    Kvector v3(v2); v3.print();
    cout << (v1 == v2) << endl;
    cout << (v3 == v2) << endl;
    v3 = v2 = v1;
    cout << v1 <<endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << (v3!=v2) << endl;
    v1[2] = 2;
    v2[0] = v1[2];
    cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
    
    return 0;
}