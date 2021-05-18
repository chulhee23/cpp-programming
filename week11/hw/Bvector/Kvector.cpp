#include<iostream>
#include<cassert>
#include "Kvector.h"
using namespace std;

//constructor
Kvector::Kvector(int sz, int value): len(sz){
    cout << this << " : Kvector(" << sz << ", " << value <<")\n";
    if(!sz){ m = nullptr; return;}
    m = new int[sz];
    for(int i=0; i<sz; i++) m[i] = value;

}
Kvector::Kvector(const Kvector& v){
    cout << this << " : Kvector(*" <<&v <<")\n";
    len = v.len;
    if(!len){m = nullptr; return;}
    m = new int(len);
    for(int i=0; i<len; i++) m[i] = v.m[i];

}
Kvector::~Kvector(){
    len = 0;
    delete[] m;

    cout << this <<" : ~Kvector()\n";
}
void Kvector::print() const{
    cout << "Kvector\n";
    // for(int i=0; i<len; i++) cout << m[i] << " ";
    // cout << endl;
}
void Kvector::clear(){
    if(len){
        delete[] m;
        m = nullptr;
        len = 0;
    }
}
int Kvector::size(){ return len;}
Kvector& Kvector::operator=(const Kvector& v){
    cout << "Kvector:operator = ]" << this; 
    len = v.len;
    if(!len){m=nullptr;}
    else if(*this!=v) {
        m = new int[len];
        for(int i=0; i<len; i++)m[i] = v.m[i];
    }

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
    bool a = idx>=0&&idx<len;
    assert(a);
    return m[idx];
}
ostream& operator<<(ostream& os, const Kvector& v){
    for(int i=0; i<v.len; i++) os << v.m[i] << " ";
    return os;
}