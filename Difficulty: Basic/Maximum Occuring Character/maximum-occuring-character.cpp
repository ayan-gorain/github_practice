//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    char getmax(string s){
        int arr[26]={0};
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            int number=0;
            number=ch-'a';
            arr[number]++;
        }
        
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
        return 'a'+ans;
    }
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)     
    {
       return getmax(str);
        
        
       
}


};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends