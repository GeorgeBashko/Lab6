#ifndef DROB_H
#define DROB_H
#pragma once
using namespace std;
class Fraction {
private:
    int chisl;
    int znam;
public:
    Fraction(int ch,int zn);
  Fraction(const int &drob);
    Fraction umn(Fraction drob1,Fraction drob2);
    Fraction sum(Fraction drob1,Fraction drob2);
    void show();
     Fraction del(Fraction drob1,Fraction drob2);
     int sokr(int a, int b);
};
#endif