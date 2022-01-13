#include <iostream>
#include <stdio.h>

using namespace std;

template<class T>
    class Arithmetic{

        private:
            T a;
            T b;

        public:

            Arithmetic(T a, T b);
            T area();
            T add();
            T sub();

    };

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a; this->b = b;
    }

template<class T>
T Arithmetic<T>::area(){
    return a*b;
}



template<class T>
T Arithmetic<T>::add(){
    return a+b;
}

template<class T>
T Arithmetic<T>::sub(){
    return a-b;
}


int main(){

    Arithmetic<int> x(2,3);

    cout<<"Addition,Area and Subtraction of object X :\n";
    cout<<x.add()<<endl;
    cout<<x.area()<<endl;
    cout<<x.sub()<<endl;

    Arithmetic<float> y(1.45,5.67);

    cout<<"Addition,Area and Subtraction of object Y :\n";
    cout<<y.add()<<endl;
    cout<<y.area()<<endl;
    cout<<y.sub()<<endl;
    return 0;
}