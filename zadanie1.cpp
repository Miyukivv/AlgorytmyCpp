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