#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::string filename = "C:\\19.51\\word.txt";
    std::string word_to_find ;
    int count = 0 ;
    std::string word ;

    std::cout << "Enter the word to search :";
    std::cin >> word_to_find ;

    std::ifstream file;
    file.open(filename);

    if(!file.is_open()){
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }
    while(file >> word){
        if(word == word_to_find){
            count++;
        }
    }
    file.close();
    if(count > 0){
        std::cout << " The word " << word_to_find << " appears " << count << " times in the file " << std::endl;
    } else {
        std::cout << " The word " << word_to_find << " was not in  the files "<<std::endl;
    }
}