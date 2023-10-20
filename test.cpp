#include<iostream>
#include"compiler.h"
using namespace std;
    
int main(){
    string str="(add 2(sub (4 3)))";
    compile(str);
    return 0;
}