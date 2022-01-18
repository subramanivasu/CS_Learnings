#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<char> vowels = {'a','e','i','o','u'};
    vector<int> game_score = {3,4,7,5,3,4};
    vector<double> temperature = {99.8,45.6,120.34};
    vector<vector<int>> movie_ratings = {
            {1,3,4,2},
            {2,3,1,4},
            {4,3,1,3}
    };

    cout<<"Accessing the Vector Elements using Array syntax :\n";
    for(int i =0;i<(sizeof(game_score)/sizeof(game_score[0]));i++){
        cout<<"The score at Index "<<i<<": "<<game_score[i]<<endl;
    }

    //Accessing the Vector elements using the "at" method
    cout<<"Accessing the Vector Elements using 'at' Method :\n";
    for(int i =0;i<game_score.size();i++){
        cout<<"The score at Index "<<i<<": "<<game_score.at(i)<<endl;
    }

    cout<<"\nThere are "<<game_score.size()<<" scores in the vector"<<endl;

    cout<<"Enter new Game scores :\n";
    cin>>game_score.at(0);
    cin>>game_score.at(1);
    cin>>game_score.at(2);
    cin>>game_score.at(3);

    cout<<"Updated Test Scores :\n";
    for(int i =0;i<game_score.size();i++){
        cout<<"The score at Index "<<i<<": "<<game_score.at(i)<<endl;
    }

    int new_score{0};
    cout<<"Enter score to add :\n";
    cin>>new_score;

    game_score.push_back(new_score);

    cout<<"Updated Test Scores :\n";
    for(int i =0;i<game_score.size();i++){
        cout<<"The score at Index "<<i<<": "<<game_score.at(i)<<endl;
    }

    cout<<"\nThe Movie Ratings : \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("The Rating given by Reviewer %d for Movie %d : %d\n",i+1,j+1,movie_ratings[i][j]);
        }
        cout<<"\n";
    }
}