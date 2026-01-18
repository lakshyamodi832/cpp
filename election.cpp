#include<iostream>
using namespace std;

int main(){
    
    int candidates[5] = {0};
    int spoilt = 0;
    int n;
    int v;

    cout<<"Enter number of voters: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        cout<<"Voter "<<i<<": ";
        cin>>v;

        if(v>=1 && v<=5){
            switch(v){
            case 1: candidates[0]++;
                    break;
            case 2: candidates[1]++;
                    break;
            case 3: candidates[2]++;
                    break;
            case 4: candidates[3]++;
                    break;
            case 5: candidates[4]++;
                    break;
            }
        } else{
            cout<<"Spoilt Ballot!"<<endl;
            spoilt++;
        }
    }

    cout<<"Election Results: "<<endl;
    cout<<"Candidate 1: "<<candidates[0]<<endl;
    cout<<"Candidate 2: "<<candidates[1]<<endl;
    cout<<"Candidate 3: "<<candidates[2]<<endl;
    cout<<"Candidate 4: "<<candidates[3]<<endl;
    cout<<"Candidate 5: "<<candidates[4]<<endl;
    cout<<"Spoilt Ballots: "<<spoilt<<endl;

    return 0;
}