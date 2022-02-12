


#include<iostream>
#include<stack>
#include<unordered_map>

using namespace std;

stack<char>op;
stack<int>num;


void eval(){
    int b=num.top();num.pop();
    int a=num.top();num.pop();
    char c=op.top();op.pop();
    int x;

    if(c=='+')x=a+b;
    else if(c=='-')x=a-b;
    else if(c=='*')x=a*b;
    else x=a/b;

    num.push(x);
}

int main(){
    string str;
    cin>>str;

    unordered_map<char,int> pr{{'+',1},{'-',1},{'*',2},{'/',2}};

    for(int i=0;i<str.size();i++){
        char c = str[i];

        if(isdigit(c)){
            int x=0,j=i;

            while(j<str.size()&&isdigit(str[j]))
                x=x*10+str[j++]-'0';

            i=j-1;
            num.push(x);
            cout <<  (op.top()) << endl;
        }else if(c=='(')op.push(c);
        else if(c==')'){
            while(op.top()!='(')eval();
            op.pop();//将左括号弹出
        }else{
            while(op.size()&&str[i]!='('&&pr[op.top()]>=pr[c]){
                cout << (op.top()) << endl;
                eval();
            }

            op.push(c);
        }

    }        //此时的式子没有括号，乘除只在最右面
    while(op.size())//表达式是(2+2)时,eval()0次；2+3*4时,eval()2次。最多eval()两次
        eval();

    cout<<num.top();//最终的结果保留在数字的栈顶
}

