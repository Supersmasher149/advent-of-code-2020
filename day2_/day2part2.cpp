#include "day2part2.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int day2part2::solver()
{
    fstream inFile;
    inFile.open("input.txt");

    string tp, characters, password, temp;

    int min, max;
    int truePasswords = 0;
    int count = 0;
    char character;

    vector<string>ts;


    if (inFile.is_open())
    {
        while (getline(inFile, tp))
        {
            ts.push_back(tp);
        }
    }

    for (int i = 0; i < ts.size(); i++)
    {
        stringstream ss(ts[i]);
        getline(ss, temp, '-');
        min = stoi(temp);
        temp = "";
        getline(ss, temp, ' ');
        max = stoi(temp);
        temp = "";
        getline(ss, characters, ':');
        character = characters[0];

        getline(ss, password, '\n');

        bool test = password[min - 1] == character | password[max - 1] == character;
        bool test1 = password[min - 1] == character && password[max - 1] == character;

        if (test == true & !test1)
        {
            truePasswords++;
        }
    }

    inFile.close();
}