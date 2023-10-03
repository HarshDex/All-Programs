#include <bits/stdc++.h>
using namespace std;
void printData1(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
void printData(vector<string> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
bool isSafe(vector<vector<int>> &v,int x,int y,int n,vector<vector<int>> visited)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && v[x][y] == 1)
        return true;
    else   
        return false;
}
void solve(vector<vector<int>> &v,int x_axis,int y_axis,vector<string> &ans, vector<vector<int>> visited,string path,int n)
{
    //base condition 
    if(x_axis == n-1 && y_axis == n-1)
    {
        ans.push_back(path);
        return;
    }

    visited[x_axis][y_axis] =1;

    //now we have four option wether we can go down,left,right,up
   
    //down
    int newx = x_axis +1;
    int newy = y_axis;
    if(isSafe(v,newx,newy,n,visited))
    {
        path.push_back('D');
        solve(v,newx,newy,ans,visited,path,n);
        path.pop_back();
    }
    //left
    newx = x_axis;
    newy = y_axis-1;
    if(isSafe(v,newx,newy,n,visited))
    {
        path.push_back('L');
        solve(v,newx,newy,ans,visited,path,n);
        path.pop_back();
    }
    //right
    newx = x_axis;
    newy = y_axis+1;
    if(isSafe(v,newx,newy,n,visited))
    {
        path.push_back('R');
        solve(v,newx,newy,ans,visited,path,n);
        path.pop_back();
    }
    //up
    newx = x_axis-1;
    newy = y_axis;
    if(isSafe(v,newx,newy,n,visited))
    {
        path.push_back('U');
        solve(v,newx,newy,ans,visited,path,n);
        path.pop_back();
    }
    visited[x_axis][y_axis] =0;
}
vector<string> pathOfrat(vector<vector<int>> &v,int order)
{
    vector<string> ans;
   
    int x = 0;
    int y = 0;
    if(v[0][0] == 0)
        return ans;
    

    vector<vector<int>> visited =v ;
    for(int i =0;i<order;i++)
    {
        for(int j= 0;j<order;j++)
        {
            visited[i][j] =0;
        }
    }

    string path = " ";
    solve(v,x,y,ans,visited,path,order);
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    int n;
    cout<<"enter the order of the box : ";cin>>n;
    vector<vector<int>> v;
    cout<<"press[1] if the path is open or press[0] if the path is closed : " <<endl;
    vector<int> temp;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            int a;
            cout<<"Is the path open or closed for ["<<i<<"]["<<j<<"]"<<"? : ";cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
        temp.clear();
    }
   
    cout<<"your maze : "<<endl;
    for(int i =0;i<n;i++)
    {
        printData1(v[i]);
    }

    vector<string> s = pathOfrat(v,n);
    cout<<"all the possible ways to get to the destination";
    printData(s);

    return 0;
}
