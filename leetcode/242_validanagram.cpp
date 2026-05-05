class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    for (char ch : t) {
        if (freq[ch] == 0) return false;
        freq[ch]--;
    }

    return true;
    }
};
/*
Difficulty- Easy
T.C- O(n)
S.C- O(k) k- no. of distinct characters in string

approach- 
store frequencies for each character in first string and decrease it when it is found in second string, if it is found again after the frequency for that specific character becomes zero then return false, because different frequencies for a character is not possible for anagram, so if the characters in second string ends without the characters repeating after the corresponding frequencies becomes zero the function returns true because the frequencies of characters in second string are exact same as that of first one

it can also be done by creating two frequency maps and later compare by freq1 == freq2 to compare Frequencies for each character, but It will take extra space so we just decreased the frequencies for the corresponding same characters found in another string because we need to check if the frequencies for individual characters are same in both
*/