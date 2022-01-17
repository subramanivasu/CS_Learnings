#include <iostream>

using namespace std;

class Array{

    private:
        int *A;
        int size;
        int length;
    
    public:
        Array(int size){
            this->size = size;
            A = new int[size];
        }

        void create(){

            cout<<"Enter the number of elements :";
            cin>>length;
            for(int i=0;i<length;i++){
                cout<<"Array Element : "<<i<<"="<<flush;
                cin>>A[i];
            }
        }

        void display(){
            for(int i=0;i<length;i++){
                cout<<"Array Element : "<<A[i]<<endl;                
            }
        }
        ~Array(){
            delete[]A;
            cout<<"Array Destroyed"<<endl;
        }
        
};

int main(){

    Array arr(10);
    arr.create();
    arr.display();
}

