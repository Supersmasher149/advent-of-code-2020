#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Class.h"
#include "day2part2.h"

using namespace std;

int main()
{
    //day 2 part 1
    //Class mc;
    //cout << mc.MyMethoud() << endl;
    
    //day 2 part 2
    day2part2 day;
    cout << day.solver() << endl;
    /*
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

        for (int j = 0; j < password.size(); j++)
        {
            if (password[j] == character)
            {
                count++;
            }
        }
        if (count <= max && count >= min)
        {
            truePasswords++;
        }
        cout << truePasswords << endl;
        count = 0;
    }
    
    inFile.close();
    */
}
