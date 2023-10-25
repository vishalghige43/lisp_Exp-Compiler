// 1. Lexical Analysis
// 2. Syntactic Analysis
// 3. Transformation
// 4. Code Generation
// return cCode;
#include"tokenizer.h"
void disply_tokens(const vector<token> &output){
    for(int i=0;i<output.size();i++){
        cout<<"  { "<<endl;
        cout<<"      type: \""<<output[i].type<<"\""<<endl;
        cout<<"      value: \""<<output[i].value<<"\""<<endl;
        cout<<"  }"<<endl;
    }
}
void compile(string str){
    /* 1. Lexical Analysis -
    Breaks the input code (string) into the basic syntax 
    of the language (array of objects)*/
    vector<token>output;
    output=tokenizer(str);
    disply_tokens(output); 
}
