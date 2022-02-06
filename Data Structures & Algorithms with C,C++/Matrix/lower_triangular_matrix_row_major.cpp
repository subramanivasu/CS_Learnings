#include<iostream>

using namespace std;

class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n=n;
            A = new int[n*(n+1)/2];
        }
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~Diagonal(){delete[] A;}
        
};

void Diagonal::set(int i,int j,int x){
    if(i>=j){
        A[((i*(i-1))/2) + j-1]=x;
    }
}

int Diagonal::get(int i,int j){
    if(i>=j){
        return A[((i*(i-1))/2) + j-1];
    }
    else{
        return 0;
    }
}

void Diagonal::display(){
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                printf("%d  ",A[((i*(i-1))/2) + j-1]);
            }
            else{printf("%d  ",0);}
        }
        printf("\n");
    }
}

int main(){
    Diagonal m(5);

    m.set(1,1,4);
    m.set(2,1,5);
    m.set(2,2,7);
    m.set(3,1,6);
    m.set(3,2,2);
    m.set(3,3,4);
    m.set(4,1,5);
    m.set(4,2,6);
    m.set(4,3,4);
    m.set(4,4,7);
    m.set(5,1,5);
    m.set(5,2,7);
    m.set(5,3,3);
    m.set(5,4,9);
    m.set(5,5,1);


    cout<<m.get(1,1)<<endl;
    cout<<m.get(5,3)<<endl;
    m.display();

}