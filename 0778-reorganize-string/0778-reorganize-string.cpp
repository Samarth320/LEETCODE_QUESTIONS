class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};

        for(int i=0; i<s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }
        
        // finding most occurence character
        char max_freq_char;
        int max_frequency = INT_MIN;

        for(int i=0; i<26; i++)
        {
           if(hash[i] > max_frequency)
           {
               max_frequency = hash[i];
               max_freq_char = i + 'a';
           }
        }

        // placing most occurence character
        int index=0;

        while(max_frequency > 0 && index < s.size())
        {
            s[index]=max_freq_char;
            max_frequency--;
            index+=2;
        }

        if(max_frequency != 0)
        {
            return "";
        }

        else{
            hash[max_freq_char - 'a'] = 0;
        }

        // placing rest of character
        for(int i=0; i<26; i++)
        {
            while(hash[i] > 0)
            {
                index = index >= s.size() ? 1:index;
                s[index] = i + 'a';
                hash[i]--;
                index+=2;
            }
        }
       return s;
    }
};