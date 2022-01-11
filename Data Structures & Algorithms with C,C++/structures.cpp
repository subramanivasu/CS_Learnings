#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    
} //r1,r2,r3...(Global Declaration,defined inside the struct)
;

// struct Rectancle r1; - Global Declaration

int main(){
    struct Rectangle r1={12,12,}; //Declaration inside main()

    printf("The Area : %d\n",r1.length*r1.breadth);
    printf("The Size of r1 structure : %lu\n",sizeof(r1));

    return 0;
}