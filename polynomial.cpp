
#include<simplecpp>






main_program{
int n;
double a0,x,term=1,y;
cout << "Degree of polynomial = ";
cin >> n;
cout << "value of variable x = ";
cin >> x ;
cout << "value of constant term of polynomial = ";
cin >> a0;

repeat (n) {
    double a;
    cin >> a;          // to form a1 a2 a3 a4.......an
    term=term*x;       // to form x x^2 x^3 ......x^n
    y=term*a;          // to form a1x a2x^2 a3x^3..........anx^n
    a0=a0+y;           // to form (a0+a1x)  (a0+a1x+a2x) ............  (a0 +a1x + a2x2 + ..... + anxn)
}
cout << "A(x) = " << a0 << endl;



}
