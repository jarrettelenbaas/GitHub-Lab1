#include <iostream>

using  namespace std;

void printName(string name, int year){
    int age;
    age = year - 1999;
    cout << name << " " << age;
}

int main(){
    printName("Jarrett Elenbaas", 2021);
}