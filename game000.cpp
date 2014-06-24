/**
 * 算法实验相关代码
 * */

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
ifstream fin("data.in");
ofstream fout("data.out");
int main(){
int line = 0 ;
char buffer[100];
while(fin.getline(buffer,100)){
cout<<line++<<":"<<buffer<<endl;
fout<<buffer<<endl;
}
return 0;
}

