#include<bits/stdc++.h>
using namespace std;

struct job{
    char id;
    int dead;
    int profit;
};

bool compair(job a, job b){
    return (a.profit > b.profit);
}

int printresult(job arr[], int n){

    sort(arr, arr+n, compair);

     for(int i = 0; i<n; i++)
        cout <<arr[i].id<<"-->"<<arr[i].dead<<"-->"<<arr[i].profit<<endl;

     cout <<endl;

    int result[n];
    bool slot[n];

    for(int i = 0; i<n; i++)
        slot[i] = false;

    for(int i = 0; i < n; i++){

        for(int j = min(n ,arr[i].dead)-1; j>=0; j--){

            if(slot[j] == false){

                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(slot[i])
            cout <<arr[result[i]].id<<"-->";
    }

}

int main(){

    int n;
    cin >>n;
    job arr[n];
    for(int i = 0; i<n; i++)
    cin >>arr[i].id>>arr[i].dead>>arr[i].profit;

    for(int i = 0; i < n; i++)
        cout <<arr[i].id<<"-->"<<arr[i].dead<<"-->"<<arr[i].profit<<endl;

    cout <<endl;

    printresult(arr , n);

    return 0;
}
