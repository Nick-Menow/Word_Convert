// TestTask_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    vector <char> arr;
    string str;
    getline(cin,str);
    transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c) { return tolower(c); });//для приведения всех букв к строчным 
    char ch;
    int counter=0;
    for (int i = 0; i < str.length(); i++)
    {
        for (; ; )
        {           
            if (counter>= str.length()) break;
            if (counter == i)
            {
                counter++;
            }
            else
            {
                if (str.at(counter) == str.at(i))
                {
                    counter++;
                    ch = ')';

                    break;
                }
                else
                {
                    counter++;
                    ch = '(';
                }
            }      
        }
        counter = 0;
        cout << ch;
        
    }















    /*int ch;
    for (int i = 0;i< str.length();i++)
    {       
        if (i >= str.length())break;
        for (int counter = 0; counter < i; counter++)
        {
            if (str.at(i) != arr[counter]) 
            {
                for (int thcon = counter+1; thcon<i;thcon++)
                {
                    if (str.at(counter) != str.at(thcon)) 
                    { 
                        ch = 0;
                    }
                    else 
                    { 
                        ch = 1; 
                    }
                }
                
            }
            else
            {
                ch = 1; 
                break;
            }
        }
        if (ch == 1)cout << "(";
        else
        {
            if (ch == 0)
            cout << ")";
        }
        arr.push_back(str.at(i));
        
    }*/
}


