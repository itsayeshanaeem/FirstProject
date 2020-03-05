#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
/*
CH08-320143
a3 p2.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/
using namespace std;
int main()
{
    string w;
    //variable for string word
    vector<string>word;
    //Initiating vector
    getline(cin,w);
    //taking input
    while(w!="END")
    {
        word.push_back(w);
        getline(cin,w);

    }
    //adding words into vector


    if (word.size() > 3)
        word[1].swap(word[4]);
    else
        cout << "Element is not present" <<endl;
    //swapping if present


    string oldval=word[word.size()-1];
    string newval="???";
    replace(word.begin(),word.end(),oldval,newval);
    //replacing last element


    for(unsigned int i=0;i < word.size();i++)
    {
        if (i<word.size()-1)
            cout<<word[i]<<",";
        else
            cout<<word[i];
    }
   cout<<endl;
    //loop to print with spaces



     for (vector<string>::iterator i =word.begin();i!= word.end();++i)
        {
            if (i<word.end()-1)
                cout<<*i<<";";
            else
                cout<<*i;

        }
    cout<<endl;
    //loop to print with semicolon using iterator


    for(vector<string>::iterator i=word.end()-1;i!=word.begin();--i)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    //loop to reverse print using iterator

    return 0;
}
