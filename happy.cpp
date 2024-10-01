#include<iostream>
using namespace std;
int main(){
int num,temp;
cout<<"enter the number:";
cin>>num;
while(num!=1 && num!=4){
   int  sum=0;
	while(num>0){
	temp=num%10;
	sum=sum+(temp*temp);
	num/=10;
}
num=sum;
}
 if(num==1){
	cout<<"happy"<<endl;
}else{
	cout<<"not happy"<<endl;
}
return 0;
}