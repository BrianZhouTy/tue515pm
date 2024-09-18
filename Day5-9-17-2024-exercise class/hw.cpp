#include <bits/stdc++.h>
using namespace std;

int main(){

    string last_i;
    cin>>last_i;
    string first_name;
    cin>>first_name;
    string last_name;
    cin>>last_name;
    char middle;
    cin >> middle;
    string food;
    cin>>food;
    int num;
    cin>>num;
    string adj;
    cin>>adj;
    string color;
    cin>>color;
    string animal;
    cin>>animal;
    cout <<"Dear instructor "<<last_i<<endl;  
    cout <<"I'm sorry I'm not able to turn in my assignment at this time. First I ate a rotten "<<food;
    cout <<", which made me turn "<<color<<" and then become extremely ill. ";
    cout << "I came down with a fever of " << num << ". ";
    cout <<"Next, my "<<adj<<" pet "<<animal<<" must have smelled the remains of "<<food<<" on my homework. ";
    cout <<"I am currently rewriting my homework and hope you will accept it late."<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<first_name<<" "<<middle<<" "<<last_name<<endl;
}
