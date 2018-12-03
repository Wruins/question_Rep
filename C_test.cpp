#include<iostream>  
using namespace std;  
  
int main(){  
  int m=0;
	/*while(1)
  {
  	cin>>a;
  	cout<<"对的"<<cin.good()<<"\n"<<"错的"<<cin.fail()<<endl;
  	if(cin.good()==1)
  	{
  		cout<<"输入对了"<<endl;
  		break;
	 }
  	if(cin.fail()==1)
  	{
  		cin.clear();
  		cin.sync();
  		cout<<"输入错了"<<endl;
		continue;	
  	}
  	cout<<"输入对的才能看得到"<<endl; 
  } */
  do{
  
  while (1)
		{
			cin >> m;
			if (cin.good() == 1)
			{
				if (m > 7 || m < 0)
				{
					cout << "选择有误，重新输入" << endl;
					continue;
				}
				else break;
				
			}
			if (cin.fail() == 1)
			{
				cin.clear();
				cin.sync();
				cout << "类型有误，重新输入" << endl;
				continue;
			}
		}
  cout<<"输入对的才能看得到"<<endl;
}while(m<=0&&m>=7);
  
}
