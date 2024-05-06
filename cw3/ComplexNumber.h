//
// Created by kuba on 11.03.24.
//


#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H



class ComplexNumber {
private:
    double _re;
    double _im;

public:
    ComplexNumber();
    ComplexNumber(double re);
    ComplexNumber(double re, double im);

    void re(double r);
    [[nodiscard]] double re() const;
    void im(double i);
    [[nodiscard]] double im() const;

    [[nodiscard]] ComplexNumber add(const ComplexNumber &cn2) const;
    [[nodiscard]] ComplexNumber add(const double &v) const;
    [[nodiscard]] ComplexNumber operator+(const ComplexNumber &cn2) const;
    [[nodiscard]] ComplexNumber operator+(const double &v) const;

    [[nodiscard]] ComplexNumber sub(const ComplexNumber &cn2) const;
    [[nodiscard]] ComplexNumber operator-(const ComplexNumber &cn2) const;
    [[nodiscard]] ComplexNumber operator-() const;


    void print() const;

};




#endif //COMPLEXNUMBER_H
