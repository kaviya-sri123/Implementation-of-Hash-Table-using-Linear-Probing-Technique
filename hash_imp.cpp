#include "hash_header.h"
int Hash::h(int x)
{
    return x%10;
}
int Hash::insert(int x)
{
    if(!isFull())
    {
        int pos = h(x);
        if(hash[pos]==-1)
        {
            hash[pos]=x;
            capacity--;
            return 1;
        }
        else
        {
            for(int i=pos;i<10;i++)
            {
                if(hash[i]==-1)
                {
                    hash[i]=x;
                    capacity--;
                    return 1;
                }
            }
            for(int i=0;i<pos;i++)
            {
                if(hash[i]==-1)
                {
                    hash[i]=x;
                    capacity--;
                    return 1;
                }
            }  
        }
    }
    else
        return 0;
}
int Hash::search()
{
    if(capacity==10)
    {
        cout<<"\nTable is empty.\n\n";
        return 0;
    }
    else
    {
        int e;
        cout<<"Enter the element to search : ";
        cin>>e;
        for(int i=0;i<10;i++)
        {
            if(hash[i]==e)
            {
                cout<<"\nElement found.\n\n";
                return 1;
            }
        }
    }
    cout<<"\nElement not found.\n\n";
    return 0;
}
void Hash::display()
{
    if(capacity==10)
        cout<<"\nTable is empty.\n\n";
    else
    {
        cout<<"Linear Probing Hash Table\n\n";
        cout<<"Index\t\t"<<"Element"<<endl;
        for(int i=0;i<10;i++)
            cout<<i<<"\t|\t"<<hash[i]<<endl;
        cout<<"\n\n";
    }
}
bool Hash::isFull()
{
    if(capacity==0)
        return true;
    return false;
}
