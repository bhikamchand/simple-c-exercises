#include<simplecpp>

main_program{
double x,n,term = 1;
cin >> n >> x;
repeat (n) {
    term=term*x;              // generating x^n
}
double sum , an;
cin >> an;
sum =an*term;                 // forming an*x^n

repeat (n) {
    term=term/x;              // forming x^n-1  x^n-2  x^n-3  ..........x^0
    double a;
    cin >> a;
    sum=sum + term *a;        //forming (anx^n + an-1x^n-1)  (anx^n + an-1x^n-1 +an-2x^n-2)   (anx^n + an-1x^n-1 + an-2x^n-2 + .....+a0x^0)
}
cout << sum ;

}
