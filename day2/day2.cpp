#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <sstream>

void checkSorting(const std::vector<int>& v, bool& isAscending, bool& isDescending){

    isAscending = true;
    isDescending = true;

   for (size_t i = 1; i < v.size(); ++i) {
        if (v[i - 1] > v[i]) {
            isAscending = false; // No está en orden ascendente
        }
        if (v[i - 1] < v[i]) {
            isDescending = false; // No está en orden descendente
        }
        /*
        // Si ambas condiciones son falsas, podemos salir temprano
        if (!isAscending && !isDescending) {
            break;
        }
        */
    }
    
}

bool valid_distances(const std::vector<int>& v){
    
    for(auto it = v.begin(); it < v.end() - 1; it++){
        int distance = std::abs(*it - *(it+1));

        if(distance < 1 || distance > 3){
            return false;
        }

    }

    return true;

}

//PART2
 bool safeAfterToleration(const std::vector<int>& v){

    if (v.size() <= 1) {
    return false; // Un vector con 1 o 0 elementos no puede ser ascendente ni descendente tras eliminación
}
    for(int i = 0; i < v.size(); i++){
        std::vector<int> tmp(v);
        tmp.erase(tmp.begin() + i);
        bool isAscending = true;
        bool isDescending = true;

        checkSorting(tmp,isAscending,isDescending);
        if(isAscending || isDescending){
            if(valid_distances(tmp)){
                return true;
            }
        }
    }


    return false;


 }


int main(){


    std::ifstream input;
    input.open("day2_input.txt");

    std::vector<int> v;
    int n;

     std::string line;

     int safeReports = 0;

    // Leer el archivo línea por línea
    while (std::getline(input, line)) {
        std::vector<int> v;
        std::istringstream lineStream(line); // Convertir la línea en un flujo de entrada
        int number;
        while (lineStream >> number) {
            v.push_back(number); // Agregar cada número al vector
        }
        
        bool isAscending = true;
        bool isDescending = true;
        checkSorting(v,isAscending,isDescending);
        if((isAscending || isDescending) && valid_distances(v)){
          
                safeReports++;
        }else if(safeAfterToleration(v)){
                safeReports++;
            }
        }



    std::cout << "Safe Report Count: "<<safeReports<<std::endl;



    return 0;
}