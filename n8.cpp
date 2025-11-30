#include <iostream>
#include <string>
using namespace std;

int main(){
string userInput;

cout << "Enter ryadok";
getline(cin,userInput);

cout << "ryadok length is:  " << userInput.length() << " Symbols" << endl;
return 0;
}
