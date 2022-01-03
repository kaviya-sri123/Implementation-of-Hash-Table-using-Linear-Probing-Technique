#include "hash_header.h"
int main()
{
    Hash t;
    int ch,e,key;
    do
    {
        cout<<"\t==========MENU==========\n";
    	cout<<"\t\t1.Insert\n";
    	cout<<"\t\t2.Search\n";
    	cout<<"\t\t3.Display\n";
    	cout<<"\t\t4.Exit\n";
    	cout<<"\t========================\n";
    	cout<<"\nEnter your choice : ";
    	cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to be inserted : ";
                cin>>e;
                key = t.insert(e);
                if(key==1)
                    cout<<"\nElement hashed into table.\n\n";
                else
                    cout<<"\nHash Table is full.\n\n";
                break;
            case 2:
                t.search();
                break;
            case 3:
                t.display();
                break;
            case 4:
                break;
            default:
                cout<<"\nEnter a valid choice.\n\n";
                break;
        }
    }while(ch!=4);
}