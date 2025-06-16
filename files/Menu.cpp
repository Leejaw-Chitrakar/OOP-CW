#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int i,j;
    const char* food_items[] = {"Momo","Chowmin","Buff Chilly","Sekuwa","Coke","Fanta","Pizza","Burger","Alu Chop","Chatamari","Newari Khaja Set","Anda Bara"};
    const char* food_rate[] = {"Rs.70","Rs.70","Rs.55","Rs.35","Rs.75","Rs.75","Rs.350","Rs.250","Rs.50","Rs.120","Rs.350","Rs.70"};
    int rate_count = sizeof(food_rate) /  sizeof(food_rate[0]);
    int food_count = sizeof(food_items) / sizeof(food_items[0]);
    for(i=1;i<=20;i++){
        for(j=1;j<=50;j++){
            if(i==2 && j>=23 && j<=26){
                cout<<"Menu"[j-23];
            }
            else if( i == 4 && j >= 5 && j <= 8){
                cout<<"Item"[j - 5];
            }
            else if(i == 4 && j >= 40 && j <= 43){
                cout<<"Rate"[j - 40];
            }
            else if(i >=6 && i < 6 + food_count && j >= 5 && j < 5 + strlen(food_items[i - 6])){
                cout<< food_items[i - 6][j - 5];
            }
            else if(i >=6 && i < 6 + food_count && j >= 40 && j < 40 + strlen(food_rate[i - 6])){
                cout<< food_rate[i - 6][j - 40];
            }
            else if(i==1 || i==20 || j==1 || j==50){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<"\n";
    }

    return 0;
}
