#include <iostream>

using namespace std;

int main()
{
int A,B,C;
cout<< "Mencari bilangan terbesar dari 3 bilangan: "<< endl;
cout<<"Masukan Bilangan 1:";
cin>> A;

cout<<"Masukan Bilangan 2:";
cin>> B;

cout<<"Masukan Bilangan 3:";
cin>> C;

if (A>B){
    if (A>C)
        cout<< "Bilangan Terbesar Adalah :" << A;
    else
        cout<< "Bilangan Terbesar Adalah :" << C;
    }else{
    if ( B>C )
        cout << "Bilangan Terbesar Adalah:" << B;
    else
        cout << "Bilangan Terbesar Adalah:" << C;
        }
}
