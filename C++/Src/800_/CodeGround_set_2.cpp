/*To check whether the two strings are anagram or not .You have to ask from user to enter the two string to start checking for anagram and display the result on the screen. Hint: An anagram is a word or phrase formed by rearranging the letters of a different word or phrase

Input Format

Line 1 contains first string. Line 2 contains second string

Constraints

1<= n <=10^2 : n is length of string

Output Format

If anagram - "The strings are anagrams" else - "The strings are not anagrams"

Sample Input 0

reactive
creative
Sample Output 0

The strings are anagrams
Sample Input 1

mango
orange
Sample Output 1

The strings are not anagrams
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<char,int> m_letter1,m_letter2;
    map<char,int>::iterator it;
    
    
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int  c = 0;
        if(s1.length()!=s2.length())goto a;
        for(int i = 0 ; i < s1.length() ; i++)
        {
            it = m_letter1.find(s1[i]);
            if(it == m_letter1.end())
            {
                m_letter1.insert(pair<char,int>(s1[i],1));
            }
            else
            {
                it->second += 1;
            }
            it = m_letter2.find(s2[i]);
            if(it == m_letter2.end())
            {
                m_letter2.insert(pair<char,int>(s2[i],1));
            }
            else
            {
                it->second += 1;
            }
        }
        if(m_letter1 == m_letter2)c = 1;
        m_letter1.clear();
        m_letter2.clear();

a:      if(!c) cout<<"The strings are not Anagrams\n";
        else cout<<"The strings are Anagrams\n";

    }
}