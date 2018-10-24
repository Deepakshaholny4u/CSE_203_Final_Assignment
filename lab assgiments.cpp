#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s = "STUDENT";
    int comparisons = 0 , interchanges = 0;

    for(int i=0; i+1<7; i++){
        for(int j=0; j+i+1<7; j++){
            comparisons++;
            if(s[j] >= s[j+1]){
                swap(s[j], s[j+1]);
                interchanges++;
            }
        }
    }
    cout<<"Sorted string: "<<s<<endl;
    cout<<"Comparisons: "<<comparisons<<"\n"<<"Interchanges: "<<interchanges<<endl;


    int data[] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    int n;
    cout<<"Enter item to be searched: ";
    cin>>n;

    int en = 0, sc = 13, mid;
    bool found = false;

    while(en<=sc){
        mid = (en+sc)/2;
        if(data[mid] == n){
            cout<<n<<" is found at position: "<<mid+1<<endl;
            found = true;
            break;
        }
        else if(data[mid] > n) sc = mid - 1;
        else en = mid + 1;
    }

    if(found == false) cout<<n<<" is not present in data!"<<endl;

    return 0;
}
