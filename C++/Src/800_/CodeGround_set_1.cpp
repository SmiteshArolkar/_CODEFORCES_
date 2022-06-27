/*
There is a login system having a database.Usernames are stored in this database.Each time a new user wants to register, he sends to the system a request with his name. If such a name does not exist in the system database, it is inserted into the database, and the user gets the response OK, confirming the successful registration. If the name already exists in the system database, the system makes up a new user name, sends it to the user as a prompt and also inserts the prompt into the database. The new name is formed by the following rule. Numbers, starting with 1, are appended one after another to name (name1, name2, ...), among these numbers the least i is found so that namei does not yet exist in the database.

Input Format

The first line contains number n. The following n lines contain the requests to the system. Each request is a non-empty line, and consists of not more than 32 characters, which are all lowercase Latin letters.

Constraints

1 ≤ n ≤ 10^5

Output Format

Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.

Sample Input 0

6
first
second
first
third
third
first
Sample Output 0

OK
OK
first1
OK
third1
first2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> m_name;
    int n;
    cin>>n;
    map<string,int>::iterator it;
    while(n--)
    {
        string name;

        cin>>name;
        it = m_name.find(name);
        if(it == m_name.end())
        {
            m_name.insert(pair<string,int>(name,1));
            cout<<"OK\n";
        }
        else 
        {
            it->second += 1;
            cout<<it->first<<it->second-1;
        }
    }
    return 0;
}