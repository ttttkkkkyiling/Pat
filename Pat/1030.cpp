
#include<iostream>                  //输入输出流头文件
#include<stdio.h>                   //标准输入输出
#include<stdlib.h>
#include<math.h>                    //数学函数
#include<string.h>                  //C语言字符数组的字符串
#include<algorithm>                 //C++标准模板库的函数
#include<map>                       //map映射容器
#include<unordered_map>             //无序的map映射容器
#include<vector>                    //变长数组容器
#include<queue>                     //队列
#include<stack>                     //栈
#include<string>                    //C++string类
#include<set>                       //set集合
using namespace std;                //标准命名空间

									//可以加入全局变量或者其他函数
int n, m, s, d;
const int maxn = 510;
const int Inf = 100000;
int G[maxn][maxn];
int Cost[maxn][maxn];
int dist[maxn];
int cost[maxn] ;
bool vis[maxn] = { false };
int pre[maxn];

void Dijk(int nowvis) {
	fill(dist, dist + maxn, Inf);
	fill(cost, cost + maxn, Inf);
	for (int i = 0; i < n; i++) {
		pre[i] = i;
	}
	//vis[nowvis] = true;
	cost[nowvis] = 0;
	dist[nowvis] = 0;
	for (int i = 0; i < n; i++) {
		int u = -1, min = Inf;
		for (int j = 0; j<n; j++) {
			if (vis[j] == false && dist[j]<min) {
				u = j;
				min = dist[j];
			}
		}
		if (u == -1)	return;
		vis[u] = true;
		for (int k = 0; k<n; k++) {
			if (vis[k] == false && G[u][k] !=Inf) {
				if (dist[k] > (dist[u] + G[u][k])) {
					dist[k] = dist[u] + G[u][k];
					cost[k] = cost[u] + Cost[u][k];
					pre[k] = u;
					}
				else if (dist[k] == (dist[u] + G[u][k])) {
					if ( cost[k] > cost[u] + Cost[u][k]) {
					cost[k] = cost[u] + Cost[u][k];
					pre[k] = u;
						}
				}
			}
		}
	}
}
void DFS(int d) {
	if (d == s) {
		printf("%d ", d);
		return;
	}
	DFS(pre[d]);
	printf("%d ", d);
}
int main() {                         //主函数
#ifdef ONLINE_JUDGE                 //如果有oj系统（在线判定），则忽略文件读入，否则使用文件作为标准输入
#else    
	freopen("1.txt", "r", stdin);   //从1.txt输入数据
#endif 

	fill(G[0], G[0] + maxn*maxn, Inf);

	cin >> n >> m >> s >> d;
	for (int i = 0; i < m; i++) {
		int city1, city2, dis, co;
		cin >> city1 >> city2 >> dis >> co;
		G[city1][city2] = dis;
		G[city2][city1] = dis;
		Cost[city1][city2] = co;
		Cost[city2][city1] = co;
	}

	Dijk(s);

	DFS(d);

	printf("%d %d\n", dist[d], cost[d]);
	return 0;                       //返回0，如果不返回0，PAT会报错
}