#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    fstream inFile;
    inFile.open("input.txt");
    string tp, min, max, character, password, temp;
    vector<string>ts;
    if (inFile.is_open())
    {
        


        while (getline(inFile, tp))
        {
            //cout << tp << "\n";
            

            ts.push_back(tp);
            
            //cout << tp << endl;
        }
    }
    for (int i = 0; i < ts.size(); i++)
    {
        stringstream ss(ts[i]);
        getline(ss, min, '-');
        getline(ss, max, ' ');
        getline(ss, character, ':');
        getline(ss, password, '\n');
    }
    inFile.close();
}
