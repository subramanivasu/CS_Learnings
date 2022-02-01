#include<iostream>
#include<string>

using namespace std;

int main(){

    string word{};

    cout<<"Enter Word: ";
    getline(cin,word);

    int n = 30;
    char s = ' ';
    for(int i =0;i<word.length();){
        if(i==0){
            cout<<std::string(n,s)<<word[0]<<endl;
            i++;
            n--;
        }
        else{
            cout<<std::string(n,s)<<word.substr(0,i+1);
            n--;
            for(int j=i-1;j>=0;){
                cout<<word[j];
                j--;
            }
            cout<<" "<<endl;
            i++;
        }
    }
}