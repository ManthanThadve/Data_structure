#include<bits/stdc++.h>
using namespace std;

class STL
{
public:

    void Vector(int a[], int n);

    void List(int a[], int n);

    void Deque(int a[], int n);

    void Queue(int a[], int n);

    void Priority_Queue(int a[], int n);

    void Stack(int a[], int n);

   // void Array();

    //void Forward_List(int a[], int n);

};

void STL::Vector(int a[], int n)
{
    vector<int> V;
    vector<int>:: iterator it;

    //Inserting elements into the vector
    for(int i=0; i<n;i++)
        V.push_back(a[i]);

    cout<<endl<<endl<<endl<<"Push 20 into from back Vector:"<<endl;
    V.push_back(1);

    sort(V.begin() , V.end());

    //Displaying the vector elements
    for(it = V.begin(); it != V.end(); ++it)
    {
        cout<<"-->"<<*it;
    }
}

void STL::List(int a[], int n)
{
    list<int> L;
    list<int>:: iterator it;

    for(int i=0; i<n; i++){
        L.push_back(a[i]*2);
        L.push_front(a[i]);
    }

    cout<<endl<<endl<<endl<<"Push 20 into List from back:"<<endl;
    L.push_back(20);

    L.sort();

    for(it = L.begin(); it != L.end(); ++it)
    {
        cout<<"-->"<<*it;
    }
}

void STL::Deque(int a[], int n)
{
    deque<int> D;
    deque<int>:: iterator it;

    for(int i=0; i<n;i++){
        D.push_back(a[i]*2);
        D.push_front(a[i]);
    }

    cout<<endl<<endl<<endl<<"Push 20 from back and 10 from front into Deqeue:"<<endl;
    D.push_back(20);
    D.push_front(10);

    sort(D.begin(), D.end());

    for(it = D.begin(); it != D.end(); ++it)
        cout<<"-->"<<*it;

}

void STL::Queue(int a[], int n)
{
    queue<int> Q;

    for(int i=0; i<n;i++)
        Q.push(a[i]);

    cout<<endl<<endl<<endl<<"Push 20 into from back Queue:"<<endl;
    Q.push(1);

    while(!Q.empty())
    {
        cout <<"-->"<<Q.front();
        Q.pop();
    }
}

void STL::Priority_Queue(int a[], int n)
{
    priority_queue<int> PQ;

    for(int i=0; i<n;i++)
        PQ.push(a[i]);

    cout<<endl<<endl<<endl<<"Push 20 into from back Queue:"<<endl;
    PQ.push(1);

    while(!PQ.empty())
    {
        cout <<"-->"<<PQ.top();
        PQ.pop();
    }
}

void STL::Stack(int a[], int n)
{
    stack<int> S;

    for(int i=0; i<n;i++)
        S.push(a[i]);

    cout<<endl<<endl<<endl<<"Push 20 into from back Queue:"<<endl;
    S.push(1);

    while(!S.empty())
    {
        cout <<"-->"<<S.top();
        S.pop();
    }
}
//void STL::Array()
//{
  //  array <int,5> A;

    //A.fill(3);

    //for(int i=0; i<5; i++)
      //  cout<<"-->"<<A[i];

//}

//void STL::Forward_List(int a[], int n)
//{
  //  forward_list<int> FL;
    //forward_list<int>:: iterator it;

    //for(int i=0; i<n-1;i++)
      //  FL.push_back(a[i]*2);

    //cout<<"Push A number into List:";
    //FL.push_back(20);

    //for(int&it : FL)
    //{
      //  cout<<"-->"<<it;
    //}
//}

int main()
{
    int n;
    cout<<"Enter no of Records: ";
    cin>>n;
    int ar[n];

    for(int i = 0; i<n;i++)
        cin>>ar[i];

    STL s;

    s.Vector(ar,n);
    s.List(ar,n);
    s.Deque(ar,n);
    s.Queue(ar,n);
    s.Priority_Queue(ar,n);
    s.Stack(ar ,n);
    //s.Array();
    //s.Forward_List(arr,n);
}
