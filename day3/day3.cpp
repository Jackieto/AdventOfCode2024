#include <iostream>
#include <string>


int main(){


    std::string example = "xmul(2,4)%&mul[3,7]!@^do_not_mul(5,5)+mul(32,64]then(mul(11,8)mul(8,5))";
    std::string pattern = "(" ;
    std::size_t pos = example.find_first_of("(");
while(pos != std::string::npos){

        for(int i = 1; i < 5; i++) {
            char digit1 = '2';
            std::cout << example.at(pos + i)<<" ";
            if(atoi(&example.at(pos + i)) == digit1){
               // std::cout << "Es un 2 "<<std::endl;
            }
        }

        std::cout << std::endl;
        pos = example.find_first_of("(",pos + 1);


    }
    return 0;
}