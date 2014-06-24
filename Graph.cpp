/**
 * 图相关实验代码
 * 
 * */

#include <iostream>
using namespace std;
#define MAXVEX 100
#define INFINITY 65535
typedef char VertexType;
typedef int EdgeType;

typedef struct {
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numVertexes,numEdges;
}MGraph;

void CreateMGraph(MGraph *G){

	int i,j,k,w;
	cout<<"点数和边数(输入一个数回车）"<<endl;
	cin>>G->numVertexes>>G->numEdges;
	for(i = 0 ;i < G->numVertexes;i++){
		cout<<"第"<<i+1<<"个顶点"<<endl;
		cin>>G->vexs[i];
	}
	for(i = 0 ; i < G->numVertexes;i++)
		for(j = 0 ; j< G->numVertexes;j++)
			G->arc[i][j] = INFINITY;
	for(k = 0 ; k < G->numEdges;k++){
		cout<<"边相关下标i,j,(权值)w"<<endl;
        cin>>i>>j>>w;
		G->arc[i][j] = w;
		G->arc[j][i] = w;
}
}

int main(){
	
    MGraph graph;
	CreateMGraph(&graph);
	return 0;
}
