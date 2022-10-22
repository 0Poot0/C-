#include<iostream>
using namespace std;
int main(){
    float test[4][3];
    int total;
    char grade[4];
    for(int i=0; i<4; i++ ){
        total=0;
        cout<<"Enter 3 scores of student "<<i+1<<":";
        for(int j=0; j<3; j++){
            cin>>test[i][j];
            total= total+test[i][j];
        }
    if(total<=100){
        grade[i]='D';}
    
    else if(total>100 && total<150){
        grade[i]='C';
    }
    else if(total>=150 && total<200 ){
        grade[i]='B';
    }
    else{
        grade[i]='A';
    }}
    for(int i=0; i<4; i++){
        cout<<"Student "<<i+1<<"    "<<"Total Marks= "<<test[i][0]+test[i][1]+test[i][2]<<"    "<<"Grade ="<<grade[i]<<endl;
    }
    return 0;
}
    
