//17软工二班转专业 戴旭东
#include <iostream>
#include <cmath>

class Equation
{
private:
    double cof_a;
    double cof_b;
    double cof_c;
public:
    Equation() : cof_a(0), cof_b(0), cof_c(0) {}
    Equation(double ins_a, double ins_b, double ins_c) :
        cof_a(ins_a), cof_b(ins_b), cof_c(ins_c) {}
    double getCof_a() {return cof_a;}
    double getCof_b() {return cof_b;}
    double getCof_c() {return cof_c;}
    void setCof_a(double rep_a) {this->cof_a = rep_a;}
    void setCof_b(double rep_b) {this->cof_b = rep_b;}
    void setCof_c(double rep_c) {this->cof_c = rep_c;}
    double getDiscriminant();
    double getRoot1();
    double getRoot2();
};

double Equation::getDiscriminant()
{
    return Equation::getCof_b() * Equation::getCof_b()
        - 4 * Equation::getCof_a() * Equation::getCof_c();
}

double Equation::getRoot1()
{
    return (-Equation::getCof_b() + sqrt(Equation::getDiscriminant())) / 2 * Equation::getCof_a();
}

double Equation::getRoot2()
{
    if (static_cast<int>(Equation::getDiscriminant()) != 0)
        return (-Equation::getCof_b() - sqrt(Equation::getDiscriminant())) / 2 * Equation::getCof_a();
    else
        return Equation::getRoot1();
}

//Test Function
int main()
{
    double x = 0;
    double y = 0;
    double z = 0;
    std::cout << "Please enter three parameters of the equation: ";
    std::cin >> x >> y >> z;
    Equation test(x,y,z);
    if (test.getDiscriminant() > 0)
        std::cout << test.getRoot1() << " " << test.getRoot2();
    else if (test.getDiscriminant() < 0)
        std::cout << "The equation has no real roots.";
    else if (static_cast<int>(test.getDiscriminant()) == 0)
        std::cout << test.getRoot1();
    return 0;
}
