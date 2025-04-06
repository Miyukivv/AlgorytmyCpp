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