class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
         
        int fre_char[130]={0};
        int i,sum=0;
        for(int i=0;i<chars.size();i++)
              fre_char[chars[i]]++;
        for(i=0;i<words.size();i++)
        {
            string temp=words[i];
            int fre_str[130]={0};
            int j,k;
            for(j=0;j<temp.size();j++)
                fre_str[temp[j]]++;
            for(k=0;k<temp.size();k++)
            {
                if(fre_char[temp[k]]>=fre_str[temp[k]])
                    continue;
            else
                break;
            }
        if(k==temp.size())
            sum=sum+temp.size();
        }
            return sum;
        
    }   
    
};