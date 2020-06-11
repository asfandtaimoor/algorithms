#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
	
int number = 2;
int power = 1000;
int length =1;
double product = pow(number,power);

// temp value
double temp = product;

cout << "Your product is "<<product<<endl;

// Calculating the length of number
while (temp > 0){
    temp/=10;
    length++;
	}

cout <<"Your length is "<<length<<endl;

// Product of power multiplication


//// Converting Integer to Array
int array[length];
for (int i = length -1; i >= 0; i--) {
    array[i] = product % 10;
    product /= 10;
}



	
	return 0;
}
