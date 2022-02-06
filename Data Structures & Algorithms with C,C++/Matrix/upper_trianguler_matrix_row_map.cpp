#include<iostream>

using namespace std;

class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n=n;
            A = new int[(n*(n+1)/2)];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~Diagonal(){delete[] A;}
        
};

void Diagonal::set(int i,int j,int x){
    if(i<=j){
        A[n*(i-1) - ((i-2)*(i-1)/2) + j-1]=x;
    }
}

int Diagonal::get(int i,int j){
    if(i<=j){
        return A[n*(i-1) - ((i-2)*(i-1)/2) + j-1];
    }
    else{
        return 0;
    }
}

void Diagonal::display(){
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=j){
                printf("%d ",A[n*(i-1) - ((i-2)*(i-1)/2) + j-1]);
            }
            else{printf("%d ",0);}
        }
        printf("\n");
    }
}

int main(){
    Diagonal m(5);

    m.set(1,1,4);
    m.set(1,2,5);
    m.set(1,3,7);
    m.set(1,4,6);
    m.set(1,5,2);
    m.set(2,2,4);
    m.set(2,3,5);
    m.set(2,4,6);
    m.set(2,5,8);
    m.set(3,3,4);
    m.set(3,4,7);
    m.set(3,5,5);
    m.set(4,4,7);
    m.set(4,5,3);
    m.set(5,5,9);


    cout<<m.get(1,1)<<endl;
    cout<<m.get(4,4)<<endl;
    m.display();;

}