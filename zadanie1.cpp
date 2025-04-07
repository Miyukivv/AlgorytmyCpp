/*
Napisz program, który wczytuje n par liczb całkowitych i porządkuje je według następujących zasad:

Liczby parzyste z pierwszych elementów par powinny znaleźć się na początku, a liczby nieparzyste na końcu.
W obrębie liczb parzystych i nieparzystych obowiązuje porządek rosnący względem pierwszego elementu pary.
Jeśli wartości pierwszych elementów z pary są równe, należy zachować kolejność wczytania pary.

Wejście:
W pierwszej linii znajduje się liczba całkowita n (1 ≤ n ≤ 30000) – liczba par. W kolejnej linii podano n par liczb całkowitych (a1, b1), (a2, b2), ..., (an, bn) (-106 ≤ ai, bi ≤ 106).

Wyjście:
Na wyjściu należy wyświetlić n liczb będących drugimi elementami par, uporządkowanych zgodnie z opisanymi zasadami.

UWAGA! W zadaniu nie można używać STL-a. Należy samodzielnie zaimplementować algorytm sortujący.

Przykład:
Wejście:
6  
7 20 2 30 3 40 8 50 6 60 5 70  

Wyjście:
30 60 50 40 70 20  
*/

#include <iostream>

struct Numbers{
    int a;
    int b;

    Numbers(int a, int b){
        this->a=a;
        this->b=b;
    }

    Numbers(){
    }
    //Two_numbers()

    void insertionSort(Numbers *arr, int n){
        Numbers tmp;
        for (int i=1; i<n; i++){
            tmp=arr[i];
            int j=i-1;

            while (j>=0 && arr[j].a>tmp.a){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=tmp;
        }
    }


    void code(Numbers *numbers, int n){
        int size=n;
        Numbers *parzyste=new Numbers[size];
        Numbers *nieparzyste=new Numbers[size];

        int k=0;
        int p=0;

        for (int i=0; i<n; i++){
            if (((numbers[i].a)%2)==0){
                parzyste[p]=numbers[i];
                p++;
            } else 
            {
                nieparzyste[k]=numbers[i];
                k++;
            }
        }

        insertionSort(parzyste, p);
        insertionSort(nieparzyste, k);
        show(parzyste,p);
        show (nieparzyste, k);

        delete parzyste;
        delete nieparzyste;
    }

    void show(Numbers *numbers, int n){
        for (int i=0; i<n; i++){
            std::cout<<numbers[i].b<<" ";
        }
    }
};
int main(){
    /*
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);*/

    int n; //ilosc par

    std::cin>>n;
    Numbers *numbers=new Numbers[n];

    for (int i=0; i<n;i++){
        int a,b;
        std::cin>>a>>b;
        numbers[i].a=a;
        numbers[i].b=b;
    }

    numbers->code(numbers,n);

    delete [] numbers;
    return 0;
}