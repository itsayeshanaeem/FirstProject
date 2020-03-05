#include <iostream>
#include <vector>
#include <string>
/*
CH08-320143
a3 p1.cpp
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
    cin>>w;
    //taking input
    while(w!="END")
    {
        word.push_back(w);
        cin>>w;

    }
    //adding words into vector
    for(unsigned int i=0;i < word.size();i++)
    {
        cout<<word[i]<<" ";
    }
   cout<<endl;
    //loop to print with spaces
     for (vector<string>::iterator i =word.begin();i!= word.end();++i)
        {
            if (i<word.end()-1)
                cout<<*i<<",";
            else
                cout<<*i;

        }

    cout<<endl;
    //loop to print using iterator

    return 0;
}
