//poj 2271
//sep9
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int i,cnt=0;

	while(cin>>s){
		if(s=="<br>"){
			cout<<endl;
			cnt=0;
		}else if(s=="<hr>"){
			if(cnt)
				cout<<endl;
			for(int i=0;i<80;++i)
				cout<<"-";
			cout<<endl;
			cnt=0;
		}else{
			if(cnt+s.length()+(cnt==0?0:1)>80){
				cout<<endl<<s;
				cnt=s.length();
			}else{
				if(cnt){
					cout<<" "<<s;
					cnt+=s.length()+1;
				}else{
					cout<<s;
					cnt+=s.length();
				}
			}
		}
	}
	return 0;
}

/* accepted!!!

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
char s[1000];

int main()
{
	int sum = 0;
	while (~scanf("%s", s))
	{
		if (s[0] == '<')
		{
			if (s[1] == 'h'&&sum) printf("\n");
			for (int i = sum = 0; i < 80 && s[1] == 'h'; i++, printf("-"));
			printf("\n");
		}
		else
		if (sum == 0 || sum + strlen(s) + 1 > 80)
		{
			if (sum) printf("\n");
			printf("%s", s);
			sum = strlen(s);
		}
		else
		{
			printf(" %s", s);
			sum = sum + strlen(s) + 1;
		}
	}
	printf("\n");
	return 0;
}
*/
