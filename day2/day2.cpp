#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>

,
bool valid_distances(std::vector<int> v){
    
    for(auto it = v.begin(); it < v.end() - 1; it++){
        int distance = std::abs(*it - *(it+1));

        if(distance < 1 || distance > 3){
            return false;
        }

    }

    return true;

}


int main(){


    std::ifstream input;
    input.open("day2_input.txt");

    std::vector<int> v;
    int n;
    for(int i = 0; i < 7; i++){
        input >> n;
        v.push_back(n);
    }

    std::vector<int> v2 = {1, 2, 7, 8, 9};

    std::cout << valid_distances(v2);



  
    return 0;
}