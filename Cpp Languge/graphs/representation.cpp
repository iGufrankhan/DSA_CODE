#include<iostream>
#include<vector>
using namespace std;


//undirected grapgh un weighted
//undirected weihgt
//diercted unweighted;
int main(){


    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<bool> >graph(vertex,vector<bool>(vertex,0));
  // un weighted

//vector<vector<int > >graph(vertex,vector<int>(vertex,0));
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        graph[u][v]=1;
      //  graph[v][u]=weight;
    }

for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
}

}