#include <iostream>
#include <fstream>
#include "parallel_mt.hh"



using namespace autoreg;

int main(){
    int n = 8;
        
    std::ofstream file("init_data");
    parallel_mt_seq<> initializer(0);

    for (int i = 0; i < n; i++){
        mt_config configuration = initializer();
        file << configuration;
    }
}
