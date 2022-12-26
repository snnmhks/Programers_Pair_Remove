#include <iostream>
#include <string>
#include <list>
using namespace std;

int solution(string s)
{
    if (s.length() == 0)
    {
        return 1;
    }

    list<char> sList;
    for (int i = 0; i < s.length(); i++)
    {
        sList.push_back(s[i]);
    }

    auto iter = sList.begin();
    auto nextIter = sList.begin();
    nextIter++;
    while (1)
    {
        if (sList.empty())
        {
            return 1;
        }
        else if (nextIter == sList.end())
        {
            return 0;
        }
        else if (*iter == *nextIter)
        {
            nextIter++;
            if (nextIter == sList.end())
            {
                iter = sList.erase(iter);
                iter = sList.erase(iter);
            }
            else
            {
                iter = sList.erase(iter);
                iter = sList.erase(iter);
                if (iter == sList.begin())
                {
                    nextIter++;
                }
                else
                {
                    iter--;
                }
            }
        }
        else
        {
            iter++;
            nextIter++;
        }
    }
}

int main()
{
    cout << solution("baabaa");
}