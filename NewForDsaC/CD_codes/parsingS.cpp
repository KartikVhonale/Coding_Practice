#include <stack>
#include <bits/stdc++.h>
using namespace std;
int n,n1;
vector<char> temp_stack;
vector<char> in;
char c;
int main(){
    cout<<"give the number of rules";
    cin>>n1;
    string r[n1];
    string c1;
    for(int i=0;i<n1;i++){
        cout<<"give the rule "<<i+1<<endl;
        cout<<"E->";
        cin>>r[i];
    }
    cout<<"give the size of the string  :";
    cin>>n;
    cout<<"give the input buffer string with spaces";
    for(int i=0;i<n;i++){
            cin>>c;
            in.push_back(c);
    }
    temp_stack.push_back('$');
    int flag=0,one;
    cout<<"stack            Input_Buffer             Parsing_Action"<<endl;
    for(int i=0;i<n+3;i++){
          for (auto element :temp_stack) { cout<< element << " ";}
          cout<<"     ";
          for (auto element :in){cout<<element<<" ";} cout<<"   ";
          for(int j=0;j<n1;j++){
            if (temp_stack.back()==r[j].front()){
                flag=1;
                one=j;
                break;
            }
          }
          if (flag==1){
                vector<char> temp;
                int k=0;
                for(k=0;k<r[one].size();k++){
                    if(temp_stack.back()==r[one][k]){
                        temp.push_back(temp_stack.back());
                        temp_stack.pop_back();
                    }
                    else{break;}
                }
                if(r[one][k]=='\0'){
                        temp_stack.push_back('E');
                        cout<<"Reduced E->"<<r[one];
                }
                else if(in.front() =='$'&& temp_stack.back()=='E'){printf("accepted. \n");}
                else{
                     for(int l=0;l<temp.size();l++){
                        temp_stack.push_back(temp.back());
                        temp.pop_back();
                     }
                     cout<<"Shift";
                     temp_stack.push_back(in.front());
                     in.erase(in.begin());
                }
          }
          else if(in.front() =='$'&& temp_stack.back()=='E'){
            printf("accepted. \n");
          }
          else{
            cout<<"Shift";
            temp_stack.push_back(in.front());
            in.erase(in.begin());
          }
          cout<<endl;
    }
    return 0;
}



