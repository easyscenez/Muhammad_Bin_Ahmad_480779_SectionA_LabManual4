#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=150;i++){
		if(i%10==0){
			continue;
		}
	cout<<i<<endl;
	}
		end of task 1


	int num, sum=0;
	cout<<"Enter a positive number."<<endl;
	cin>>num;
	if (num<0)	{
		cout<<"Invalid input.";
	}
	else{
		do	{
			sum=sum + (num%10);
			num=num/10;
		}	while(num!=0);
	cout<<"The sum of all digits of this number is "<<sum<<endl;
}
 end of task 2
	
	int i,num;
	bool prime=true;
	cout<<"Enter a number."<<endl;
	cin>>num;
	i=(num-1);
	if(num<0){
		cout<<"Invalid input.";
	}
	do	{
		if (num%i==0){
			prime=false;
			break;
			}
		i--;
	}	while (prime==true && i>1);
	if(prime==true)	{
		cout<<"The number is prime.";
	}
	else	{
		cout<<"Number is not prime.";
	}
 end of task 3

}
