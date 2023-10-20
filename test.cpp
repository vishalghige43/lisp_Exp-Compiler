#include<iostream>
using namespace std;

#include"compiler.h"
    
int main(){
    string str="(add 2(sub (4 3)))";
    compile(str);
    return 0;
}