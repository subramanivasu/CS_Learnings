#include<iostream>

using namespace std;

int main(){
    const int tot_movies{3};
    const int tot_reviewers{4};

    int movie_rating [tot_reviewers][tot_movies];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Reviewer %d Rating for Movie %d ",i+1,j+1);
            scanf("%d",&movie_rating[i][j]);
        }
    }

    printf("The Movie Ratings : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Reviewer %d Rating for Movie %d : %d\n",i+1,j+1,movie_rating[i][j]);
        }
    }

    int movie_ratings_2 [3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };//Initializing and Declaration
    

}