//Qn link:-https://leetcode.com/problems/remove-duplicate-letters/
string removeDuplicateLetters(string s)
    {
       vector<char>stk;
        vector<int>fre(26,0);
        vector<int>exist(26,0);
        int i=0;
        for(auto x:s)
        {   
        fre[int(x)-'a']++;// it is frequency array to store occurance of every charector
            
        }
        for(int i=0;i<s.size();i++)
        {
           
            fre[s[i]-'a']--;//reduce occurance 
            if(exist[s[i]-'a']==1)//check weather charector is taken or not 
               continue;
            
            while(stk.size()!=0 and stk.back()>s[i] and fre[stk.back()-'a']>0 )
            {
               
               
                exist[stk.back()-'a']=0;
                 stk.pop_back();
                
            }
            exist[s[i]-'a']=1;
            stk.push_back(s[i]);
        }
        string ans="";//it is for final answer
        for(auto x:stk)
        {
            ans+=x;
        }
     return ans;
        
    }     