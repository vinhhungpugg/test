#include <bits/stdc++.h>

using namespace std;

struct person
{
    string ten, ngaysinh;
};

bool cmp(person a, person b)
{
    string s = a.ngaysinh, t = b.ngaysinh;
    int n1 = (s[0]-'0')*10 + (s[1]-'0');
    int t1 = (s[3]-'0')*10 + (s[4]-'0');
    int nam1 = std::stoi(s.substr(6));
    ////
    int n2 = (t[0]-'0')*10 + (t[1]-'0');
    int t2 = (t[3]-'0')*10 + (t[4]-'0');
    int nam2 = std::stoi(t.substr(6));
    ////
    if (nam1!=nam2) return nam1<nam2;
    if (t1!=t2) return t1<t2;
    return n1<n2;
}
int main()
{
    freopen("struct_tuoi.INP","r",stdin);
    freopen("struct_tuoi.OUT","w",stdout);
    int n; cin>>n;
    person a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i].ten>>a[i].ngaysinh;
    }
    sort(a,a+n,cmp);
    for (int i=0; i<n; i++)
        cout<<a[i].ten<<' '<<a[i].ngaysinh<<'\n';
    cout<<a[n-1].ten<<'\n'<<a[0].ten<<'\n';
    return 0;
}
