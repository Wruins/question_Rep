#include<iostream>  
using namespace std;  
  
int main(){  
  int m=0;
	/*while(1)
  {
  	cin>>a;
  	cout<<"�Ե�"<<cin.good()<<"\n"<<"���"<<cin.fail()<<endl;
  	if(cin.good()==1)
  	{
  		cout<<"�������"<<endl;
  		break;
	 }
  	if(cin.fail()==1)
  	{
  		cin.clear();
  		cin.sync();
  		cout<<"�������"<<endl;
		continue;	
  	}
  	cout<<"����ԵĲ��ܿ��õ�"<<endl; 
  } */
  do{
  
  while (1)
		{
			cin >> m;
			if (cin.good() == 1)
			{
				if (m > 7 || m < 0)
				{
					cout << "ѡ��������������" << endl;
					continue;
				}
				else break;
				
			}
			if (cin.fail() == 1)
			{
				cin.clear();
				cin.sync();
				cout << "����������������" << endl;
				continue;
			}
		}
  cout<<"����ԵĲ��ܿ��õ�"<<endl;
}while(m<=0&&m>=7);
  
}
