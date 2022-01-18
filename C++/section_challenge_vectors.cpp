#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> vector1,vector2;

vector1.push_back(10);
vector1.push_back(20);

for(int i=0;i<vector1.size();i++){
    cout<<"Element at Index "<<i<<" "<<vector1.at(i)<<endl;
}
cout<<"The Size of Vector1 "<<vector1.size()<<endl;

vector2.push_back(100);
vector2.push_back(200);

for(int i=0;i<vector2.size();i++){
    cout<<"Element at Index "<<i<<" "<<vector2.at(i)<<endl;
}
cout<<"The Size of Vector1 "<<vector2.size()<<endl;

vector<vector<int>> vector_2d;

//We are adding a copy of what we are inserting in a Vector
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout<<"\nThe Elements in 2D Vector : \n";
    for(int i=0;i<vector_2d.size();i++){
        for(int j=0;j<vector_2d.size();j++){
        printf("The Element at row %d,coloumn %d: %d\n",i,j,vector_2d.at(i).at(j));
        }
    }
    cout<<"\n";

vector1.at(0) = 1000;

cout<<"\nThe Elements in 2D Vector : \n";
    for(int i=0;i<vector_2d.size();i++){
        for(int j=0;j<vector_2d.size();j++){
            printf("The Element at row %d,coloumn %d: %d\n",i,j,vector_2d.at(i).at(j));
        }
    }
    cout<<"\n";

cout<<"The Elements at Vector1 :\n";

for(int i=0;i<vector1.size();i++){
    cout<<"Element at Index "<<i<<" "<<vector1.at(i)<<endl;

}
}
