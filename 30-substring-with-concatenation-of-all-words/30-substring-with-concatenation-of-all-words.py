class Solution:
    def findSubstring(self, s: str, l: List[str]) -> List[int]:
        
        if not l or not s:
            return []

        dict = defaultdict(int)

        for i in l:
            dict[i] += 1

        result = []

        word_size = len(l[0])
        for i in range(word_size): 
            left = i
            right = left
            total = 0
            cur = defaultdict(int)

            while left <= len(s) - len(l) * word_size:
                if s[right:right + word_size] in dict and dict[s[right:right + word_size]] > cur[s[right:right + word_size]]:
                    total += 1
                    cur[s[right:right + word_size]] += 1
                    right += word_size

                elif s[right:right + word_size] not in dict:
                    left = right + word_size
                    right = left
                    cur = defaultdict(int)
                    total = 0

                elif s[right:right + word_size] in dict and dict[s[right:right + word_size]] == cur[s[right:right + word_size]]:
                    while dict[s[right:right + word_size]] == cur[s[right:right + word_size]]:
                        cur[s[left:left + word_size]] -= 1
                        total -= 1
                        left += word_size
                    cur[s[right:right + word_size]] += 1
                    right += word_size
                    total += 1

                if total == len(l):
                    result.append(left)
                    cur[s[left:left + word_size]] -= 1
                    total -= 1
                    left = left + word_size

        return result
