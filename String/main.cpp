#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 255
using namespace std;


void ParseEven(char str[])
{
    char s[MAX_SIZE];
    int count = 0;
    int number;
    cout << "Number of deleting string:" << endl;
    cin >> number;
    cin.get();
    char n[] = "!;:,.?- ";
    s[0] = '\0';
    char *token = strtok(str, "!;:,.?- ");
    while (token != NULL)
    {
        if (count != number)    { strcat(s, token); strcat(s, " "); }
        token = strtok(NULL, "`!;:,.?- ");
        ++count;
    }
    if (number > count)
        cout << "The number of words less then ur nubmer! ";
    strcpy(str, s);
}



int main()
{
    char str[MAX_SIZE];
    
    gets(str);
    ParseEven(str);
    printf("parse: %s ", str);
    
    system("pause");
    return 0;
}