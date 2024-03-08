#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream score("score.txt");
    string line;
    vector<double> scoree;
    while(getline(score,line)){
        double number =stod(line);
        if(number >= 0) scoree.push_back(number);
    }
    for(int i=0; i<scoree.size(); i++) cout << scoree[i] << ' ';
    score.close();
}