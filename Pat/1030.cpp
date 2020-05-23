
#include<iostream>                  //���������ͷ�ļ�
#include<stdio.h>                   //��׼�������
#include<stdlib.h>
#include<math.h>                    //��ѧ����
#include<string.h>                  //C�����ַ�������ַ���
#include<algorithm>                 //C++��׼ģ���ĺ���
#include<map>                       //mapӳ������
#include<unordered_map>             //�����mapӳ������
#include<vector>                    //�䳤��������
#include<queue>                     //����
#include<stack>                     //ջ
#include<string>                    //C++string��
#include<set>                       //set����
using namespace std;                //��׼�����ռ�

									//���Լ���ȫ�ֱ���������������
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
int main() {                         //������
#ifdef ONLINE_JUDGE                 //�����ojϵͳ�������ж�����������ļ����룬����ʹ���ļ���Ϊ��׼����
#else    
	freopen("1.txt", "r", stdin);   //��1.txt��������
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
	return 0;                       //����0�����������0��PAT�ᱨ��
}