#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdlib>




int main(){

    std::ifstream input;
    input.open("day1_input.txt");

    int n;

    std::vector<int> v1;
    std::vector<int> v2;

    while(input){
        input >> n;
        v1.push_back(n);
        input >> n;
        v2.push_back(n);
    }

    int suma = 0;
    int occurences = 0
    ;
 
    for(auto& val: v1){
        occurences = 0;
        auto it = std::find(v2.begin(),v2.end(),val);
        while(it != v2.end() ){

            if(val == 79469){
                break;
            }
            //std::cout << *it <<std::endl;;

            occurences++;
            it++;
            it = std::find(it,v2.end(),val);
        }

        std::cout << "val: " << val << "occurences :" <<occurences<<std::endl;

        suma += val * occurences;
    }
    
    std::cout << "Suma final; "<<suma<<std::endl;

    return 0;
}