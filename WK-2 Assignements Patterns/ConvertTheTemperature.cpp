#include<bits/stdc++.h>
using namespace std;

vector<double> convertTemperature(double celsius) {
    vector<double> ans;
    double kelvin=0,fahrenheit=0;
    kelvin = celsius + 273.15;
    ans.push_back(kelvin);
    fahrenheit = celsius * 1.80 + 32.00;
    ans.push_back(fahrenheit);
    return ans;
}
int main(){
    double celcius;
    cin>>celcius;
    vector<double> ans = convertTemperature(celcius);
    for(auto &val: ans){
        cout<<val<<" ";
    }
    return 0;
}