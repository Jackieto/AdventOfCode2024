#include <iostream>
#include <sstream>
#include <string>

void sort(int *array, int n){
    int temp;
    int pos = 0;
    for(int j = 0; j < n - 1 ; j++){
            for(int i = 0; i < n - j - 1; i++)
                if(array[i] > array[i + 1]){
                    temp = array[i]  ;
                    array[i] = array[i+1];
                    array[i+1] = temp;
                      for(int i = 0; i < 6; i++){
                        std::cout << array[i] << " ";
                    }
                        std::cout<<std::endl;


                }

            }       
    }
  



int main(){
/*
    int list1[6] = {3,4,2,1,3,3};
    int list2[6] = {4,3,5,3,9,3};

    sort(list1, 6);

    for(int i = 0; i < 6; i++){
        std::cout << list1[i] << " ";
    }

    std::cout<<std::endl;

*/

    std::istringstream input;

    return 0;
}