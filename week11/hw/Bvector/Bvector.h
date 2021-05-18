#include <iostream>
#include "Kvector.h"

#ifndef __BVECTOR_H__
#define __BVECTOR_H__

class Bvector: public Kvector{

    protected:
        unsigned int *u_m;
        const int NBITS;

    public:
        // constructor
        Bvector(int nbits = 32);
        Bvector(const Bvector& e);

        // functions: handle a bit
        bool bit(int pos) const;
        void reset(int pos);
        void set(int pos);

        // ouput functions
        void print() const;

        // operator
        bool operator [](int idx) const { return bit(idx); } // reference 반환이 아닌 bool 반환
        Bvector& operator =(const Bvector& v);              // v[0] = 1; // compile error -> v.set(0);

        //freind functions
    friend std::ostream& operator<<(std::ostream& os, const Bvector& v);

        // getter, setter
        int size() const { return NBITS; }
        void clear(){ for(int i=0; i<len; i++){
            m[i] = 0; u_m[i] = 0;
            }
        } // 이래도 돼? 
        //u_m[i] = 0 아님?
};

#endif