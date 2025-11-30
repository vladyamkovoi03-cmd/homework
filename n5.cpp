#include <iostream> 
using namespace std;
int main(){
int count = 0;

for (int i = 0; i <= 999999; i++ ){
int n = i, sum1 = 0, sum2 = 0;

for (int d = 0; d < 3; d++) {
sum2 += n % 10; n /= 10;
}
for (int d = 0; d < 3; d++){
sum1 += n % 10; n/= 10; 
}
if (sum1 == sum2) count++;
}

cout << "Happy tickets : " << count << endl;
return 0;
}
