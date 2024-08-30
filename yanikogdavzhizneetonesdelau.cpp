#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;


int main()
{
    int* not_sorted = new int[10];
    int counter = 0;
    setlocale(LC_ALL, "rus");
    string line;

    ifstream in("stream.txt");
    if (in.is_open()) 
    {
        while (getline(in, line)) 
        {
            not_sorted[counter] = atoi(line.c_str());
            counter += 1;
        }
    }
    for (int i = 0; i < counter; i++) 
    {
        cout << not_sorted[i];
    }
    for (int j = 0; j < counter - 1; j++)
    {
        for (int k = 0; k < counter - 1; k++) 
        {
            if (not_sorted[k] > not_sorted[k + 1]) 
            {
                int temp = not_sorted[k + 1];
                not_sorted[k + 1] = not_sorted[k];
                not_sorted[k] = temp;
                
            }
        }
    }
    cout << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << not_sorted[i];
    }
}