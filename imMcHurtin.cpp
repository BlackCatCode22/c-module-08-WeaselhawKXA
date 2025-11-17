/*
Le 17 novembre 2025
0836901 WeaselhawKXA
*/

#include <iostream>
#include <string>
//Didn't need <algorithm>, kept in case it is needed.
//#include <algorithm>



int main() {
    //Setting up the elements to be sorted.
    int s[10] = {4,3,7,6,0,1,2,5,9,8};

    int n = std::size(s);
    //Outputs the array elements to show the unsorted list.
    for (int i = 0; i < n; i++) {
        std::cout << s[i] << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
    //Clion figured out what I wanted to do and autocompleted most of this code.
    for (int i = 0; i < n - 1; i++) {
        //int j = i < 1 was originally int j = i + 1. Only half was sorted with this code. The < operator fixed that.
        for (int j = i < 1; j < n; j++) {
            if (s[j] > s[j + 1]) {
                //Swaping.
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << s[i] << std::endl;
    }

    return 0;
}