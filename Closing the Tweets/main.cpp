#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <math.h>
using namespace std;

inline void fastRead_string(string *a){
     register char c=0;
     while (c<33) c=getchar();
     *a="";
     while (c>33)
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
    int N,K;
    fastRead(&N);
    fastRead(&K);
    int tweets[N];
    memset(tweets, 0, sizeof(tweets));
    int click_tweet;
    int tweet_open=0;
    string read;
    for(int i=0; i<K; i++){
        fastRead_string(&read);
        if(read[read.length()-1] == 'L'){
            memset(tweets, 0, sizeof(tweets));
            printf("0\n");
            tweet_open=0;
        }else{
            fastRead(&click_tweet);
            if(tweets[click_tweet-1] == 1){
                tweets[click_tweet-1] = 0;
                tweet_open--;
                }else{
                    tweets[click_tweet-1] = 1;
                    tweet_open++;
                }
                printf("%d\n",tweet_open); 
        }
    }

    return EXIT_SUCCESS;
}
