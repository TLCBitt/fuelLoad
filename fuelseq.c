#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{

    FILE *myFile;
    char fname[20];
    float sum = 0;
    int i, j, k =0;
    int num = 0;
    int mass = 0;
    int count = 0;
    int fuel = 0;
    int total = 0;
    int M[1000];
    char ch;
    char buffer[32];

    printf(" Input the filename to be opened : ");
    scanf("%s",fname);

    myFile = fopen(fname, "r");
 if(myFile == NULL)
    {
        printf("Can't open file\n");
    }
    while(1)
    {
        ch = fgetc(myFile);
        if(ch == EOF)
        {
            break;
        }
        else if(ch == '\n')
        {
            M[j] = atoi(buffer);
            j++;
            bzero(buffer, 32);
            i = 0;
            continue;
        }
        else
        {
            buffer[i] = ch;
            i++;
        }
    }
 for(i = 0; i < j; i++)
    {

        fuel = M[i] / 4-3;
        printf("Number [%d]: %d\n", i, M[i]);
        printf("Fuel: %d\n", fuel);
        //sum += fuel;
    }
    //printf("Total Fuel: %d\n", sum);

    //num = sum / 100;
    //total = sum + (num * 10);
    //printf("Fuel Load: %d\n", total);
