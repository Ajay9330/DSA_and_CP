//Ajaykumar Yadav
#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

// Define a custom exception class for timeout
struct TimeOutException {};

// Function to run the timeout thread
void timeoutThreadFunction() {
    this_thread::sleep_for(4s);
    cerr << "TLE Error" << endl;
    throw TimeOutException{};
}

int main() {
    // Start the timeout thread
    std::thread(timeoutThreadFunction).detach();

    #ifndef ONLINE_JUDGE
        // Redirect standard input and output to files for local testing
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

/*---------------------------------Start_Coding--------------------------------------*/
    int t;
    cin>>t;
    while(t--){
        int n,d;
    int c=0;
    cin>>n>>d;
    bool gun=0;
    for(int i=0;i<n;i++){
        int v;
        cin>>v;
        if(gun==0 && v<=d){
            continue;
        }
        if(gun==1 && v>d){
            continue;
        }
        c++;
        gun=!gun;
    }
    cout<<c<<endl;
    }
    
    return 0;
}