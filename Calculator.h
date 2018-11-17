//
// Created by Victor Alexandru on 15/10/2018.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H


class Calculator {
public:
    int sum(int a, int b);
    double sum(double a, double b);

    int sub(int a, int b);
    double sub(double a, double b);

    int mult(int a, int b);
    double mult(double a, double b);

    int div(int a, int b);
    double div(double a, double b);

    double sqrt(int a);
};

#endif //CALCULATOR_CALCULATOR_H
