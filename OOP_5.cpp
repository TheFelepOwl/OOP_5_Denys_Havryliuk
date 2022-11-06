#include <iostream>
#include<math.h>


using namespace std;

class Triangle
{
private:

    float a;
    float b;
    float c;
    double p, s;


public:
    Triangle()
    {

        this->a = 0;
        this->b = 0;
        this->c = 0;
    }

    Triangle(float a, float b, float c)
    {

        this->a = a;
        this->b = b;
        this->c = c;
    }


    ~Triangle()
    {
        this->a = 0;
        this->b = 0;
        this->c = 0;


    }


    float Area()
    {
        this->a = a;
        this->b = b;
        this->c = c;

        double p, s;

        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));

        return s;

    }

    void print_sqr()
    {
        double p, s;

        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));


        cout << "\nA: " << a << "\nB: " << b << "\nC: " << c << "\nS: " << s << endl;


    }






    Triangle operator +(const Triangle & other)
    {
        Triangle temp;

        temp.a = this->a + other.a;
        temp.b = this->b + other.b;
        temp.c = this->c + other.c;

        return temp;


    }

    Triangle & operator ++()
    {


        this->a++;
        this->b++;
        this->c++;

        return *this;


    }


    friend ostream& operator << (ostream& os, Triangle& obj);

};

ostream& operator << (ostream& os, Triangle& obj)
{
    os << "\nA: " << obj.a << "\nB: " << obj.b << "\nC: " << obj.c << "\nS: " << obj.Area() << endl;
    return os;
}


int main()
{


    Triangle t1(5,2,4), t2(10, 8, 4);

    cout <<"Frist Triangle: " << t1 << "\nSecond Triangle: "<< t2;


    Triangle c = t1 + t2 ;

    cout << "\nT1+T2: " << c;

    ++c;

    cout << "\nC++ " << c;



    return 0;
}
