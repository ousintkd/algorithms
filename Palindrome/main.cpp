//
//  main.cpp
//  Palindrome
//
//  Created by Ousseynou khadim Beye on 08/07/2018.
//  Copyright © 2018 Ousseynou khadim Beye. All rights reserved.
//

#include <iostream>

using namespace std;

//assuming that the input is in lowercase
bool palindrome(string str)
{
    int i = 0; int j = str.size()-1;
    while(i<j)
    {
        if(str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}


int main()
{
    cout<<palindrome("anna");

    return 0;
}
