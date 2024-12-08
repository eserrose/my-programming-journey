/*
Write a templated function that takes a reference to a templated data type and changes all of its most significant bits (MSB) that are 0 (zeros) into 1 (ones) until the first occurrence of 1 (one). E. g. 00010110 is changed into 11110110; 01111011 is changed into 11111011; and 10000000 remains unchanged (since its MSB is already 1). 
Note: you can assume that the input reference will be of integer numerical type. However, since this is a templated function, you cannot assume anything about the exact type of the input, hence of the size of the input references as well, i.e. it can be char, short, int or long int.
Hint: the sizeof(dataType) function returns the size of data type in bytes. 
*/
#include <iostream>


template < class Data>
Data Mutator(Data d){
    
    size_t size = sizeof(d);
    for(int i = 0; i < size; i++){
        unsigned char msbyte = (d >> (size-(i+1))*8);
        for(int j = 0; j < 8; j++){
            if(msbyte & (0x80 >> j)){
                return d;
            }
            
            d |= (1UL << ((size-(i+1))*8+(7-j)));
        }
    }

    return d;
}

int main(){
    std::cout << "Deneme: " << Mutator(0x7f);
}
