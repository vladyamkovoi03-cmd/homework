#include <iostream>
using namespace std;

int main(){
int a, b;
cout << "Enter 2 numbers: ";
cin >>  a >> b;

int sum = 0;

for (int i = a; i <= b; i++){
if (i % 2 == 0){
sum +=i;
}
else {
cout << i << " - neparne chislo " << endl;
}
}
cout << "Suma parnyx chisel = " << sum << endl;
return 0;
}

