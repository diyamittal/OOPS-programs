#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    char Name[12];
    int Age;
    float Weight;
    int RollNumber;
} sStudentInfo;
int main(int argc, char *argv[])
{
    sStudentInfo *psInfo  = NULL;
    psInfo++;
    cout<<"Size of structure is "<<psInfo;
    return 0;
}