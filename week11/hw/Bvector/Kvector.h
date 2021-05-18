#include <iostream>
#ifndef __KVECTOR_H__
#define __KVECTOR_H__

class Kvector{
    protected:
        int *m;
        int len;
    public:
        Kvector(int sz = 0, int value = 0);
        Kvector(const Kvector&v);
    virtual ~Kvector();
    virtual void print() const;
        void clear();
        int size();
        Kvector& operator=(const Kvector& v);
        bool operator==(const Kvector& v);
        bool operator!=(const Kvector& v);
        int& operator[](int idx);
    friend std::ostream& operator<<(std::ostream& os, const Kvector& v);

};

#endif
