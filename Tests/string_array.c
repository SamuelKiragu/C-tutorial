#include<stdio.h>
void main()
{
    // this is an array that holds various strings of specific sizes
    char word1[7];
    char word2[7];
    char word3[7];

    //this is an array that holds the strings
    char sentense[3];

    //position of the words in the sentence
    sentense[0] = word1;
    sentense[1] = word2;
    sentense[2] = word3;

    //here is where one reads the words one after the other
    printf("Enter your three worded sentence below");
    scanf("%5s %5s %5s", word1 , word2 , word3);

    //here is where we print the sentence as a whole
    for(int i = 0; i < 20; i++)
    {
        printf("%10.5s", sentense[i]);
    }
}
