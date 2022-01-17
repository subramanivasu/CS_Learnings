#include<iostream>
#include<stdlib.h>

using namespace std;

class Operations{
    private:
        int length;
    public:
        Operations(int length){
            this->length = length;
        }
        void display(int A[]){

            for(int i=0;i<length;i++){
                cout<<A[i]<<endl;
            }
            cout<<"Display Operation Completed\n";
        }
        void add(int A[],int x){
            A[length] = x;
            length=length+1;
            for(int i =0;i<length;i++){
                cout<<A[i]<<endl;
            }
            cout<<"Add Operation Completed\n";
        }

        void insert(int A[],int index,int x){
            printf("The length is %d\n",length);
            for(int i = length;i>index;i--){
                A[i] = A[i-1];
            }
            A[index] = x;
            length+=1;
            cout<<"Insertion Operation Completed\n";
        }

};

int main(){

    int A[10] = {1,2,3,4,5,6,7};
    Operations first(7);
    first.display(A);
    first.add(A,4);
    first.insert(A,3,7);
    cout<<"New Array :\n";
    first.display(A);

}