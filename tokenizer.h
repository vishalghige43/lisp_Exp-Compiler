#include<vector>
class token{
    public:
    string type;
    string value;
    token();
    token(string type,string value){
        this->type=type;
        this->value=value;
    }
};
vector<token> tokenizer(string input){
    cout<<input<<endl;
    vector<token> output;
    int curr=0;
    int size=input.length();
    while(curr<size){
        char ch=input[curr];
        if(ch=='('||ch==')'){
            string x="";
            x+=ch;
            token temp("paren",x);
            output.push_back(temp);
        }
        else if(ch>96 && ch<123){
            string val="";
            while(ch>96 && ch<123){
                val+=ch;
                ch=input[++curr];
            }
            token temp("name",val);
            output.push_back(temp);
        }
        else if (ch==' '){
            curr++;
            continue;
        }
        else if(ch>47 && ch<58){
            string val="";
            while(ch>47 && ch<58){
                val+=ch;
                ch=input[++curr];
            }
            token temp("number",val);
            output.push_back(temp);
        }
        else{
            cout<<"Unknown char: "<<ch<<endl;
            vector<token> output;
            return output;
        }
        curr++;
    }
    return output;
}