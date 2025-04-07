/*
Napisz program, który obliczy wyrażenie zadane w Odwrotnej Notacji Polskiej (ONP).

Wejście:
W pierwszej linii znajduje się liczba całkowita t (1 ≤ t ≤ 10) – liczba testów. Następnie podanych jest t zestawów testowych. Na zestaw składa się liczba całkowita n (3 ≤ n < 1000000). 
W kolejnej linii podano n elementów, na które składają się liczby całkowite dodatnie (operandy) i operatory (+, -, *, /). 
Wyrażenie podane w linii stanowi poprawne wyrażenie w ONP i nie występuje w nim dzielenie przez 0. 
Należy założyć, że żadna z wartości: końcowa oraz pośrednie nie wykraczają poza zakres liczb long long. 
Dla operacji '/' przyjmij, że wykonywane jest dzielenie całkowite.

Wyjście:
Na wyjściu należy dla każdego wyrażenia wyświetlić jego wartość.
UWAGA! W zadaniu nie można używać STL-a. Dopuszczalne jest użycie typu string, strumieni, funkcji obsługujących konwersję napisów do liczb. 
Przydatne mogą być funkcje isdigit oraz stoi.

Przykład:
Wejście:
3
3
3 19 +
9
9 66 - 4 82 / * 45 +
7
95 32 + 24 + 8 - 

Wyjście:
22
45
143
*/
#include <iostream>

class MyStack{
    int *data;
    int topIndex;
    int capacity;
public:

    MyStack(int maxSize){
        capacity=maxSize;
        data=new int[capacity];
        topIndex=-1;
    }

    void push(int x){
        topIndex++;
        data[topIndex]=x;
    }
    int pop(){
        int val=data[topIndex];
        topIndex--;
        return val;
    }

    int top() const{
        return data[topIndex];
    }
    int size()const{
        return topIndex+1;
    }

};

int main (){
    int t;
    std::cin>>t;

    
    for (int i=0; i<t; i++){
        int ilosc_operacji;
        int result=0;
    std::cin>>ilosc_operacji;
        MyStack stack(ilosc_operacji);
        for (int j=0; j<ilosc_operacji; j++){
            std::string typ;
            std::cin>>typ;
            int k=0;
            
            if ((typ[k]!='+' ) && (typ[k]!='-' ) && (typ[k]!='/') && (typ[k]!='*')){
                int number=std::stoi(typ);
                stack.push(number);
            
            } else {

                int x,y;
                x=stack.pop();
                y=stack.pop();

                switch(typ[k]){
                case '+':
                result=y+x;
                break;
                case '-':
                result=y-x;
                break;
                case '*':
                result=y*x;
                break;
                case '/':
                result=y/x;
                break;
            }

            stack.push(result);
            }
           k++; 
        }
        std::cout<<stack.pop()<<"\n";
    }
    return 0;
    }