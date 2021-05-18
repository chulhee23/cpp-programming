#include <iostream>
#include "Bvector.h"

#ifndef __BITSET_H__
#define __BITSET_H__

class IncompatibleException:public std::exception {
  int v1;
  int v2;
public:
  IncompatibleException(int v1, int v2):v1(v1),v2(v2){};
};

class BitSet: public Bvector{

    public:
        // constructor
        BitSet(int sz = 32);
        
        void insert(int v);

    friend BitSet operator +(const BitSet& v1, const BitSet& v2);
    friend std::ostream& operator <<(std::ostream& os, const BitSet& s);
};

#endif