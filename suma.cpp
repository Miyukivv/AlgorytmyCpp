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