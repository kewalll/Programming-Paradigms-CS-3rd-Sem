#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int BS(int arr[])
{
	int i,j;
	bool flag;
    int n=10;
	for (i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
			}
	return 0;
}
void mean(int arr[10]){
    int sum=0;
    for (int i=0;i<10;i++)
        sum=sum+i;
    int mean=sum/10;
    cout<<"\nMean : "<<mean;
}
float median(int arr[10]){
    int n = 10;
    if(n % 2 == 0)
        return ((arr[n/2 - 1] + arr[n/2])/2);
    return (arr[n/2]);
}
void mode(int arr[10]) {
    int n = 10;
    int freq[10] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i] - 1]++;
    }
    int maxFreq = 0;
    int mode = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mode = i + 1;
        }
    }
    cout << "\nMode: " << mode;
}

int main(){
    int ch;
    cout<<"Enter choice 1.mean 2.median 3.mode : ";
    cin>>ch;
    int arr[10]={1,2,3,4,5,9,7,8,9,10};
    BS(arr);
    if(ch==1)
        mean(arr);
    else if(ch==2)
        cout<<"\nMedian : "<<median(arr);
    else if(ch==3)
        mode(arr);
    else
        exit(0);
    return 0;
}