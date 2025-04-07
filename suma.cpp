/*
Dodaj do siebie dwie liczby całkowite.

Wejście:
Na wejściu znajduje się liczba naturalna n, a następnie n par liczb całkowitych.
1 ≤ n ≤ 10

Wyjście:
Na wyjściu dla każdej pary liczb należy wyświetlić wynik ich sumy.

Przykład:
Wejście:
4
3 5
2 9
0 10
100 200

Wyjście:
8
11
10
300*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin>>n;

    if (n<1 || n>10){
        std::cin>>n;
    }
    else{
        long int a,b;
        long int *arr=new long int[n];
        for (int i=0; i<n; i++){
            std::cin>>a>>b;
            std::cout<<"\n";
            arr[i]=a+b;
        }
        for (int i=0; i<n; i++){
            std::cout<<arr[i]<<"\n";
        }
        delete[]arr;
    }
}