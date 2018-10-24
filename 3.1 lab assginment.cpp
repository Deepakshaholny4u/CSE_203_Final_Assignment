#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#define sf(f)                            scanf("%d",&f)
#define pf(f)                            printf("%d\n",f)
#define PI                               3.1415926535897932385
#define size                             3000000
#define mp                               make_pair
#define pb                               push_back
#define one(x)                           __builtin_popcount(x)              ///int
#define onel(x)                          __builtin_popcountl(x)             ///long int
#define onell(x)                         __builtin_popcountll(x)            ///long long
using namespace std;
typedef long long ll;

///int dx[]= {-1,-1,0,0,1,1};
///int dy[]= {-1,0,-1,1,0,1};
///int dx[]= {0,0,1,-1};                 /*4 side move*/
///int dy[]= {-1,1,0,0};                 /*4 side move*/
///int dx[]= {1,1,0,-1,-1,-1,0,1};       /*8 side move*/
///int dy[]= {0,1,1,1,0,-1,-1,-1};       /*8 side move*/
///int dx[]={1,1,2,2,-1,-1,-2,-2};       /*knight move*/
///int dy[]={2,-2,1,-1,2,-2,1,-1};       /*knight move*/
///Always Remember   'A'=65,'Z'=90 'a'=97 'z'=122 '0'=48

class node
{
public:
    int data;
    node *next;
};
class task
{
public:
    node *head, *tail;
    task()
    {
        head=NULL;
        tail=NULL;
    }
    void createnode(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
            temp=NULL;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
    }
    void display()
    {
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->next;
        }
        cout<<endl<<endl;
    }
    void insert_start(int value)
    {
        node *temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
    }
    void insert_position(int pos, int value)
    {
        node *pre=new node;
        node *cur=new node;
        node *temp=new node;
        cur=head;
        for(int i=1; i<pos; i++)
        {
            pre=cur;
            cur=cur->next;
        }
        temp->data=value;
        pre->next=temp;
        temp->next=cur;
    }
    void delete_position(int pos)
    {
        node *current=new node;
        node *previous=new node;
        current=head;
        for(int i=1; i<pos; i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }
    void findnode(int n)
    {
        int count=1;
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data == n)
            {
                cout<<n<<" Found at position "<<count<<" from start "<<endl;
            }
            count++;
            temp=temp->next;
        }
    }
    void deletenode(int n)
    {
        int count=1;
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data == n)
            {
                int pos=count;
                node *current=new node;
                node *previous=new node;
                current=head;
                for(int i=1; i<pos; i++)
                {
                    previous=current;
                    current=current->next;
                }
                previous->next=current->next;
            }
            count++;
            temp=temp->next;
        }
    }


};

void menu(void)
{
    cout<<"MENU:\n0....Exit\n1....Insert at first\n2....Insert at last\n3....Insert at particular place\n4....Find a data\n5....Delete a data\n6....Display all nodes\n";
    cout<<"\n\n\nPress any switch from 0 to 6 : ";
}
/*
void clr(void)
{
    cout<<endl<<endl<<endl<<"Press Any key to clear the screen :";
    char ch;
    ch= getchar();
    system("CLS");
}
*/
int main()
{
    task obj;
    ///At first let's create some node to understand easily
    obj.createnode(21);
    obj.createnode(27);
    obj.createnode(28);
    obj.createnode(13);
    obj.createnode(02);
    obj.createnode(65);
    menu();
    int c;
    while(cin>>c)
    {
        switch(c)
        {
        case 0 :
            return 0;

        case 1 :
        {
            cout<<"Inserting at first..."<<endl<<"Enter data: ";
            int data;
            cin>>data;
            obj.insert_start(data);
            //clr();
            menu();
        }
        break;


        case 2 :
        {
            cout<<"Inserting at last..."<<endl<<"Enter data: ";
            int data;
            cin>>data;
            obj.createnode(data);
            //clr();
            menu();
        }
        break;


        case 3 :
        {
            int m,n;
            cout<<"Where do you want to insert data?" ;
            cin>>m;
            cout<<"Enter data:"<<endl;
            cin>>n;
            obj.insert_position(m,n);
            //clr();
            menu();
        }
        break;


        case 4 :
        {
            int y;
            cout<<"Enter the data you want to find: ";
            cin>>y;
            obj.findnode(y);
            //clr();
            menu();
        }
        break;


        case 5 :
        {
            int y;
            cout<<"Enter the data you want to delete: ";
            cin>>y;
            obj.deletenode(y);
            //clr();
            menu();
        }
        break;


        case 6 :
        {
            cout<<"Displaying the data of nodes..."<<endl;
            obj.display();
            //clr();
            menu();
        }
        break;

        default:
        {
            cout<<"You pressed Wrong keyword"<<endl;
            //clr();
            menu();
        }
        break;
        }
    }
}

