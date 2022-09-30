#include<simplecpp>




main_program{
int n, fac=1, i=2;        // calculating value of e
double e=1.0;

cin >> n;
repeat(n){
e = e + 1.0/fac;
fac= fac* i;
i = i + 1;
}

cout << e << endl;
}
