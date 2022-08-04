class Solution
{
    public:
        vector<int> findSubstring(string s, vector<string> &words)
        {
            int wordLen = words[0].size(), strLen = s.size();
            int noOfWord = words.size();
            int subStrLen = wordLen * noOfWord;
            unordered_map<string, int> cntWordInArray;
            vector<int> ans;
            for (int i = 0; i < words.size(); i++)
            {
                cntWordInArray[words[i]]++;
            }
            for (int i = 0; i < strLen - subStrLen + 1; i++)
            {
                unordered_map<string, int> cntWordInSubStr;
                int flag = 0;
                for (int j = 0; j < noOfWord; j++)
                {
                    string word = s.substr(i + j *wordLen, wordLen);
                    if (cntWordInArray.find(word) == cntWordInArray.end())
                    {
                        flag = 1;
                        break;
                    }
                    else
                    {
                        cntWordInSubStr[word]++;
                        if (cntWordInSubStr[word] > cntWordInArray[word])
                        {
                            flag = 1;
                            break;
                        }
                        else
                        {
                            cout << word;
                        }
                    }
                }
                if (flag == 0) {
                    cout << endl;
                    ans.push_back(i);
                }
            }
            return ans;
        }
};