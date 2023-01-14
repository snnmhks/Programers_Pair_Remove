#include <iostream>
#include <string>
#include <vector>
using namespace std;

// STL중 벡터를 사용하여 간단하게 푼 문제이다.
// 방법은 빈 벡터를 만들고 다음 과정을 따른다.
// 1. 벡터가 비어있다면 i번째 문자를 벡터에 넣는다.
// 2. 비어있지 않다면 i번째 문자와 벡터의 마지막 값과 비교한다.
// 2.1. 비교한 둘이 같다면 벡터의 마지막 문자를 제거한다.
// 2.2. 같지 않다면 벡터 마지막에 i번쨔 문자를 넣는다.
// 3. 문자열의 마지막까지 위와 같은 과정을 반복한다.
// 4. 이후 벡터가 비어있다면 1을 리턴하고 비어있지 않다면 0을 리턴한다.

int solution(string s)
{
    if (s.length() == 0)
    {
        return 1;
    }

    vector<char> sList;
    for (int i = 0; i < s.length(); i++)
    {
        if (sList.empty())
        {
            sList.push_back(s[i]);
        }
        else
        {
            if (s[i] == sList[sList.size()-1])
            {
                sList.pop_back();
            }
            else
            {
                sList.push_back(s[i]);
            }
        }
    }
    
    if (sList.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
