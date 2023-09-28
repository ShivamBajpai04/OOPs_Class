#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    FILE *fptr;
    fptr = fopen("input.txt","r");
    int totCount=0,vowCount=0,sentCount=1,wordCount=1;
    while(!feof(fptr) && fptr!=NULL){
        char ch = fgetc(fptr);
        if(ch=='\n'){
            sentCount++;
        }
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            vowCount+=1;
        }
        if(ch==' ' || ch=='\n'){
            wordCount++;
        }
        totCount++;
    }
    fclose(fptr);
    fptr = fopen("output.txt","w");
    fprintf(fptr,"Total Characters: %d",totCount);
    fprintf(fptr,"\nTotal Vowels: %d",vowCount);
    fprintf(fptr,"\nTotal Sentences: %d",sentCount);
    fprintf(fptr,"\nTotal Words: %d",wordCount);
    fclose(fptr);
}