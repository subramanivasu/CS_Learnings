#include<iostream>
#include<string>

using namespace std;

int main(){
    string alph {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"~ZMXNCBV)_(*&^%$#QPWOEI!@<>qpwoeirutyasljkdfhgmznxvbc"};

    string message {};

    cout<<"Enter Message: ";
    getline(cin,message);

    string encrypt {};
    // cout<<alph.find(message[4]);
    for(size_t i=0;i<message.length();i++){
        size_t pos = alph.find(message[i]);
        if(pos!=string::npos){
            encrypt+= key[pos];
        }
        else{
            encrypt+=message[i];
        }
    }
    cout<<"The Encrypted Message is : "<<encrypt<<endl;

    string decrypt{};
    for(int i=0;i<encrypt.length();i++){
        size_t pos = key.find(encrypt[i]);
        if(pos!=string::npos){decrypt+=alph[pos];}
        else{decrypt+=encrypt[i];}
    }

    cout<<"The Decrypted Message : "<<decrypt<<endl;
    
}