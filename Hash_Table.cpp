#include<bits/stdc++.h>
using namespace std;

class Hash
{
    int BUCKET;

    list<int> *table;
public:
    Hash(int V);

    void insertItem(int x);

    void deleteItem(int key);

    int hashing(int x)
    {
        return(x % BUCKET);
    }

    void displayHash();
};

Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new list<int>[BUCKET];
    }

void Hash::insertItem(int key)
{
    int index = hashing(key);
    table[index].push_back(key);
}

void Hash::deleteItem(int key)
{
    int index = hashing(key);

    list<int>:: iterator it;

    for(it = table[index].begin(); it!=table[index].end(); ++it)
    {
        if(*it == key)
            break;
    }

        if(it != table[index].end())
            table[index].erase(it);

}

void Hash::displayHash()
{
    for(int i = 0; i < BUCKET; i++)
    {
        cout <<i;
        for(x : table[i])
            cout<<"-->"<< x;
        cout<<endl;
    }
}

int main()
{
    int n,a,d;
    cout<<"Enter no of items: ";
    cin>>n;

    Hash h(7);

    cout<<"Enter The Items:"
    for(int i = 0; i<n; i++){
        cin>>a;
        h.insertItem(a);
    }

    cout<<endl;
    h.displayHash();
    cout<<endl;

    cout<<endl<<"Enter item to delete :";
    cin>>d;
    h.deleteItem(d);
    cout<<endl;

    h.displayHash();

}
