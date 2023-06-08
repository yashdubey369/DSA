#include<bits/stdc++.h>
using namespace std;

#define int long long int
  
signed main(){
    string my_str;
    cin>>my_str;
    int len=my_str.length();
    for(int i=0;i<my_str.length();i++){
        if(my_str[i]=='a'||my_str[i]=='u'||my_str[i]=='A'||my_str[i]=='E'||my_str[i]=='I'||my_str[i]=='O'||my_str[i]=='U'||my_str[i]=='Y'||my_str[i]=='e'||my_str[i]=='i'||my_str[i]=='o'||my_str[i]=='y'){
             //my_str.erase(remove(my_str.begin(), my_str.end(), my_str[i]), my_str.end());
            for(int j=i; j<len; j++)
			{
				my_str[j]=my_str[j+1];
			}
		i--;
		len--;
        
		}

        }
    for(int i=0;i<my_str.length();i++) { 
      if(my_str[i]>=65 && my_str[i]<=92)
      {
	  my_str[i]=my_str[i]+32;
      }
   }
    
   for(int i=0;i<(my_str.length());i++){
     cout<<"."<<s[i];
     
}
}