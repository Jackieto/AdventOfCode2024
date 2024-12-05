#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>




int main(){

    std::ifstream input;
    input.open("day1_input.txt");
    int suma = 0;
    int n;

    std::vector<int> v1;
    std::vector<int> v2;

    while(input){
        input >> n;
        v1.push_back(n);
        input >> n;
        v2.push_back(n);
    }

    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());

    for(int i = 0; i < v1.size(); i++){
        suma += std::abs(v1[i] - v2[i]);
    }

    std::cout << "Suma final: " << suma  <<std::endl;;

    return 0;



}