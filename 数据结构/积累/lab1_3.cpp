#include<iostream>
using namespace std;
void re(int a[],int start,int en)
{
    int temp;
    for(int i=0;i<=(en-start)/2;i++)
    {
        temp=a[start+i];
        a[start+i]=a[en-i];
        a[en-i]=temp;
    }
}

void RRotate(int a[],int k)
{
    int n=10;
    re(a,0,k-1);
    re(a,k,n-1);
    re(a,0,n-1);
}
int main()
{
	int i,k,a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"循环移动前:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"循环移动多少位(0-10):"<<endl;
	cin>>k;

	RRotate(a,k);

	cout<<"循环移动后:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
    return 0;
}


