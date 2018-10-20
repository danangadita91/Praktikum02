# Praktikum02

Latihan1
"Menentukan bilangan terbesar dari 3 bilangan"
Alur Algoritma :
1. Mendeklarasikan variable int A, B, C sebagai variable input
2. Menginput nilai A, B, C
3. Membandingkan nilai A, B, C dengan rumus if

Berikut ini kodenya :
```c++
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
```
Berikut adalah hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum02/master/Latihan1/Terbesar%20dari%203%20bilagnan(code).png).
![img](https://raw.githubusercontent.com/danangadita91/Praktikum02/master/Latihan1/Terbesar%20dari%203%20bilagnan(run).png).



Latihan 2
"Menentukan bilangan terbesar dan terkecil dari 4 variable"
Alur Algoritma :
1. Mendeklarasikan variable n, nilai sebagai variable input
2. Mendeklarasikan variable i sebagai pembatas nilai input(perulangan)
3. Mendeklarasikan max sebagai nilai terbesar dan min sebagai nilai terkecil
4. Menginputkan nilai n, dimana menunjukan banyak nilai yang akan di bandingkan
5. Menginput nilai-nilai yang akan jadi nilai pembanding

Berikut adalah kodenya :
```c++
int i,n,max,min,nilai;

    cout<<"===Menentukan Bilangan Terbesar & Terkecil==="<< endl;
    cout<<"Masukan Banyak Bilangan:";
    cin>> n;
    cout<<"Masukan Nilai ke =";
    cin>> nilai;

    max=nilai;
    min=nilai;

    for(i=2;i<=n;i++) //dapat dibaca i akan membaca di nilai ke2 dimana i kurang dari samadengan n,i akan menambah 1 angka dan seterusnya.
    {

        cout<<"Masukan Nilai Ke"<<i<<"=";
        cin>>nilai;

        if (nilai>max) max=nilai;
        if (nilai<min) min=nilai;
    }
    cout<<"Nilai Terbesar Adalah:" <<max<<"\nNilai Terkecil Adalah:"<<min;
```
Berikut ini adalah hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum02/master/Latihan2/Bilangan%20terbesar%20dan%20terkecil%20(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum02/master/Latihan2/Bilangan%20terbesar%20dan%20terkecil%20(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum02/master/Latihan2/Bilangan%20terbesar%20dan%20terkecil%20(code).png)