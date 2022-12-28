#include <algorithm>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>
#include <stdio.h>
//#include <cmath>
//#include <bits/stdc++.h> 
using namespace std;
//https://adventofcode.com/2022/day/1
// The input files that did not cause program to fail are
// calories.txt, newtest1.txt
// Somehow the rest of files got corrupted and cause the // system to halt

using namespace std;
int main() {
    vector<int> sums;
    ifstream file("calories.txt");
    string line;
    int current_sum = 0;
    while (getline(file, line)) {
        if (line.empty()) {
            sums.push_back(current_sum);
            current_sum = 0;
        } else {
            current_sum += stoi(line);
        }
    }
    sums.push_back(current_sum);
  
  for (int i = 0; i < (int)sums.size(); i++){
       cout<< sums.at(i) <<endl;
    }
  auto maxc = max_element(sums.begin(), sums.end());
  cout<<"max calories = "<<maxc[0]<<endl;

  sort(sums.begin(), sums.end(), greater<int>());
   current_sum = 0;
   for (int i = 0; i < 3; i++){
      current_sum += sums.at(i);
    }
  cout<< current_sum <<endl;
    return 0;
}

//The rest of the codes below didn't work because of various reasons.

/*
int main () {
int inc, totalc, maxc;  // string to form from file
string filepath; // for file name and location
filepath = "d1puzzle1-test.txt";
// Latest adapted from ChatGPT   
string line ;   // input as string
ifstream in(filepath);
 while (getline(in,line)) {
   //cout<<line<<endl;
   //cout<<"maxc = "<<maxc<<endl;
  if (line=="") {
      //reach end of one elf's calorie supply
     if (maxc<totalc) {
            maxc= totalc;      
     }
      totalc = 0; //reset for next elf input
  } else {
      inc = stoi(line);
      totalc +=inc;
    //cout<<"totalc = "<<totalc;
  }
}
  cout<<"maxc = "<<maxc;
 return 0;
}  
*/
/*
int main () {
long int inc, totalc, maxc;  // string to form from file
string filepath; // for file name and location
filepath = "d1puzzle1-test.txt";
// Latest adapted from ChatGPT   
string line ;   // input as string
ifstream in(filepath);
 while (getline(in,line)) {
  if (line=="x") {
      //reach end of one elf's calorie supply
     if (maxc<totalc) {
            maxc= totalc;      
     }
      totalc = 0; //reset for next elf input
  } else {
      inc = stoi(line);
      totalc +=inc;
  }
}
 return 0;
}  
*/
