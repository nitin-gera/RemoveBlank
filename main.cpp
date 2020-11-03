#include <iostream>
#include <string.h>

using namespace std;

void RemoveSpaces(char* original)
{
    int len = strlen(original);
    int space_ctr = 0;
    int ctr = 0;

    for(int i(0); i < len; i++)
    {
        if(original[i] == ' ')
            space_ctr++;
    }

    char without_spaces[len + space_ctr * 2];

    for(int i(0); i < len; i++)
    {
        if(original[i] == ' ')
        {
            without_spaces[ctr] = '%';
            ctr++;
            without_spaces[ctr] = '2';
            ctr++;
            without_spaces[ctr] = '0';
            ctr++;
        }
        else
        {
            without_spaces[ctr] = original[i];
            ctr++;
        }
    }

    cout << without_spaces << endl;
}

int main(int argc, char *argv[])
{
    char str[] = "nitin gera is great       ";

    RemoveSpaces(str);
}
