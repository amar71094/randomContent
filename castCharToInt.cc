#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    char const  *str = "qwwe";
     int **temp = &str;
     char a ='5';
    char b = '1';
    char * const str1 = &a;
    *str1 = '9';
   // str1 = "345";
cout<<*temp;
    return 0;
}
