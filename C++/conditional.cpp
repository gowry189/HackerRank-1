#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n>=1&&n<=9)
    {switch(n)
    {case 1:cout<<"one";
     break;
     case 2:cout<<"two";
     break;
         case 3:cout<<"three";
     break;
             case 4: cout<<"four";
     break;
     case 5:cout<<"five";
     break;
     case 6:cout<<"six";
     break;
     case 7 :cout<< "seven";
     break;
     case 8: cout<<"eight";
     break;
     case 9: cout<<"nine";
     break;
    }}
    else
        cout<<"Greater than 9";
    // your code goes here
    return 0;
}

