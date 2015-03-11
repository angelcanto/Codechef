#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

inline void fastRead_string(string *a){
     register char c=0;
     while (c<32) c=getchar();
     *a="";
     while (c>32)
     {
         *a+=c;
         c=getchar();
     }
}
inline void fastRead(int *a){
     register char c=0;
     while (c<33) c=getchar();
     *a=0;
     while (c>33)
     {
         *a=*a*10+c-'0';
         c=getchar();
     }
}
int main(int argc, char *argv[])
{
    int T,p;
    string alphabet;
    string line;
    fastRead(&T);
    fastRead_string(&alphabet);    
    for(int i=0; i<T; i++){
            fastRead_string(&line);
            for(int j=0; j<line.size();j++){
                    
                    if(line[j] == '_'){
                               printf(" ");                               
                               }
                    if(line[j] >= 'a' && line[j] <= 'z'){
                               p = line[j] - 'a';
                               printf("%c", alphabet[p]);
                               }
                    if(line[j] >= 'A' && line[j] <= 'Z'){
                               p = line[j] - 'A';
                               printf("%c", alphabet[p]-32);
                               } 
                    if(line[j] == '!' || line[j] == '?' || line[j] == ',' || line[j] == '.'){
                               printf("%c", line[j]);
                               }    
            }
            printf("\n");         
    }
    return EXIT_SUCCESS;
}
