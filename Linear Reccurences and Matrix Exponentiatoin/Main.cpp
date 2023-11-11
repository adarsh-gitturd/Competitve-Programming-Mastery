#include <iostream>
#include <string>

using namespace std;

//binary exponentiation 
int power(int a, int b); //iterative
int power2(int a, int b); //recursive

int main(){
    std::cout << power2(2, 12) << "\n";
}

int power(int a, int b) {
    //a^b 16 ^ 8
    int res = 1;
    while (b) {
        if (b & 1) {
            res = res * a;
        }
        a = a * a;
        b = b / 2;
    }
    return res;
}

int power2(int a, int b) {
    if (b == 0) { 
        return 1; 
    }
    int temp = power2(a, b / 2);
    int res = temp * temp;
    if (b % 2) {
        res = res * a;
    }
    return res;

}