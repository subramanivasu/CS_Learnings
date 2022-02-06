#include<iostream>

using namespace std;

class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n=n;
            A = new int[n];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~Diagonal(){delete[] A;}
        
};

void Diagonal::set(int i,int j,int x){
    if(i==j){
        A[i-1]=x;
    }
}

int Diagonal::get(int i,int j){
    if(i==j){
        return A[i-1];
    }
    else{
        return 0;
    }
}

void Diagonal::display(){
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                printf("%d ",A[i-1]);
            }
            else{printf("%d ",0);}
        }
        printf("\n");
    }
}

int main(){
    Diagonal m(5);

    m.set(1,1,4);
    m.set(2,2,5);
    m.set(3,3,7);
    m.set(4,4,9);
    m.set(5,5,10);

    cout<<m.get(1,3)<<endl;
    cout<<m.get(3,3)<<endl;
    m.display();

}