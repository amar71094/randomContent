#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

  class Graph{
      int v;
      list<int> *adj;
   public:
      Graph(int v);
      void addedge(int u,int v);
      void BFS(int s);
    };
   
    Graph::Graph(int v){
        this->v=v;
        adj = new list<int>[v+1];
    }

    void Graph:: addedge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void Graph::BFS(int s){
        
        bool *visited = new bool[v+1];
        int  *count    = new int[v+1];
       for(int i=1;i<=v;i++)
         {
           visited[i]=false;
           count[i]=0; 
       }  
        
     list<int> queue;
     list<int>::iterator p;   
    // visited[s]=true;
     queue.push_back(s);
     int temp,temp2;   
        
     while(!queue.empty()){
         temp= queue.front();
         queue.pop_front();
         
         if(visited[temp]==false){
             visited[temp]=true;
             p=adj[temp].begin();
         
         
      for( ; p!=adj[temp].end(); p++){
            queue.push_back(*p);
               if(count[*p]!=0)
               {  
                   count[*p]= count[*p]<(count[temp]+1)?count[*p]:(count[temp]+1);
                  // count[*p]= count[temp]+1; 
               }
          else
             { 
               count[*p]= count[temp]+1; 
             }
      }  
     }     
    }   
        
    for(int i=1;i<=v;i++)
     {
          if(visited[i]==false)
           cout << "-1" << " " ;
          else
          {
              if(i!=s)
              cout << count[i]*6 << " " ;    
          }    
    }
        cout << endl ;
        
    }


int main() {
      
    int q,temp,temp2,n,m; cin >> q;
    while(q--){
      cin >> n >> m;
     Graph g(n);
      while(m--)
      {
          cin >> temp >> temp2;
          g.addedge(temp,temp2);
          
      }    
        cin >> temp;
        g.BFS(temp);
    }
    return 0;
}
