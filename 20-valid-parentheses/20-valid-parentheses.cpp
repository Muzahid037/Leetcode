class Solution
{
    public:
        char getOpen(char c)
        {
            if (c == ')') return '(';
            else if (c == '}') return '{';
            else return '[';
        }
    bool isValid(string s)
    {
        stack<char> opn;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                opn.push(s[i]);
            }
            else
            {
                if(opn.empty()) return false;
                char o = opn.top();
                opn.pop();
                if (getOpen(s[i]) != o)
                {
                    return false;
                }
            }
        }
        if (!opn.empty()) return false;
        else return true;
    }
};