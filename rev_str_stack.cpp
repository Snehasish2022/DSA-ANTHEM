#include<iostream>
#include<stack>
using namespace std;
void reverse_string(string str){
    stack <string> st;
    for(int i=0;i<str.length();i++){
        string word=" ";
        while(str[i]!=' '&& i<str.length()){
            word+=str[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }cout<<endl;

}
int main(){
    string str="my name is snehasish bhakat";
    reverse_string(str);
    return 0;
}