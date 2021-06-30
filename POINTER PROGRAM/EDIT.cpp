#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	char item;
	node *next;	
};
int b=0;
node *infix=NULL;
node *head=NULL;
node *cur=NULL;
//void display()
void display()
{
	if(infix == NULL){
		cout<<"Link List Not Exist.";
	}else{
		cout<<"\n"<<"Own\t\tValue\t\tNext\n";
		cout<<&head<<"\thead\t\t"<<head<<endl;
		cout<<endl;
		cur = infix;
		do
		{
			cout<<cur<<"\t"<<cur->item;
			cout<<"\t\t"<<cur->next<<endl;
		cout<<cur->item;
		cur = cur->next;
		}
		while(cur!=NULL);
		cout<<endl;
	}
}

void input();
void pre2infix()
{
	if(head==NULL)
	{
		cout<<"1st u hv 2 input \n";
	}
	else
	{
		node *opr=NULL;
		node *copr=NULL;
		node *opd=NULL;
		node *copd=NULL;
		cur=head;
		while(cur!=NULL)
		{
			if(cur->item=='^' || cur->item=='*' || cur->item =='/' || cur->item=='+'||cur->item=='-')
			{
				if(opr==NULL)
				{
					opr=new node;
					opr->item=cur->item;
					opr->next=NULL;
					copr=opr;
				}
				else
				{
					copr->next=new node;
					copr=copr->next;
					copr->item=cur->item;
					copr->next=NULL;
				}
			}
			else
			{
				if(opd==NULL)
				{
					opd=new node;
					opd->item=cur->item;
					opd->next=NULL;
					copd=opd;
				}
				else
				{
					copd->next=new node;
					copd=copd->next;
					copd->item=cur->item;
					copd->next=NULL;
				}
			}
		}
		node *cinfix=NULL;
		copr=opr;
		copd=opd;
		while(copd!=NULL)
		{
			if(infix==NULL)
				{
					infix=new node;
					infix->item=copd->item;
					infix->next=NULL;
					cinfix=infix;
				}
				else
				{
					cinfix->next=new node;
					cinfix=cinfix->next;
					cinfix->item=copd->item;
					cinfix->next=NULL;
				}
				if(opr!=NULL)
				{
					cinfix->next=new node;
					cinfix=cinfix->next;
					cinfix->item=copr->item;
					cinfix->next=NULL;
				}
				else
				{
					cinfix->next=opr;
					
				}
		}
		display();
	}
}

int main()
{
	int a;
    while(1)
    {
	system ("CLS");
	cout<<"1-Ip \n";
	cout<<"2-Display \n";
	cout<<"3-pre2infix"<<endl;
	cout<<"4-Exit \n";
	cout<<"Enter no.";
	cin>>a;
	switch(a)
	{
	case 1:
	input();
	break;
	case 2:
		display();
		break;
		case 3:
			pre2infix();
			break;
				case 4:
				exit(0);
				break;
					default:
						cout<<"Invalid input \n";
		}
		system("PAUSE");
}	cin.get();
}
void input()
{
	char c;
	if(head!=NULL)
	{
		cout<<"Input already given \n";
		cout<<"Do you want to input again \n";
		cout<<"Press Y/N ? ";
		cin>>c;
	}
	if(head==NULL || c=='y' || c=='Y')
	{
		head=NULL;
		int size;
		do
		{
			cout<<"Enter size :";
			cin>>size;
		}
		while(size<3);
		cout<<"Enter exp:";
		for(int i=0;i<size;i++)
		{
			if(head==NULL)
			{
				cur=head;
				head=new node;
				cur=head;
				cur=cur->next;
				cin>>cur->item;

cur->next=NULL;				
				if(cur->item=='(')
				{
					b++;
				}
				else if(cur->item==')')
				{
					b--;
				}
				else
				{
					
				} 
				cur->next=NULL;
			}
			else
			{
				cur->next=new node;
				cur=cur->next;
				cin>>cur->item;
					if(cur->item=='(')
				{
					b++;
				}
				else if(cur->item==')')
				{
					b--;
				}
				else
				{
					
				} 
				cur->next=NULL;
			}
		}//for
		
		
		if(b==0)
		{
			cout<<"Fully \n"; 
		}
		else
		{
			
			cout<<"Not fully \n";
			node *temp=NULL;
			if(b<0)
			{
				b=b*-1;
				for(int i=0;i<b;i++)
				{
					temp=new node;
					temp->item='(';
					temp->next=head;
					head=temp;
				}
			}
			else
			{
				for(int i=0;i<b;i++)
				{
					cur->next=new node;
					cur=cur->next;
					cur->item=')';
					cur->next=NULL;
				}
			}
	cout<<endl<<"after pr:"; 
	display();		
		}
		
	}

}



