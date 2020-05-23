//#include<iostream>                  //输入输出流头文件
//#include<stdio.h>                   //标准输入输出
//#include<stdlib.h>
//#include<math.h>                    //数学函数
//#include<string.h>                  //C语言字符数组的字符串
//#include<algorithm>                 //C++标准模板库的函数
//#include<map>                       //map映射容器
//#include<unordered_map>             //无序的map映射容器
//#include<vector>                    //变长数组容器
//#include<queue>                     //队列
//#include<stack>                     //栈
//#include<string>                    //C++string类
//#include<set>                       //set集合
//using namespace std;                //标准命名空间
//
//									//可以加入全局变量或者其他函数
//
//const int maxn = 510;
//const int Inf = 100000;
//int G[maxn][maxn] = {Inf};
//int weight[maxn] = { 0 };
//int w[maxn] = { 0 };
//int l[maxn] = { Inf };
//int num[maxn] = { 0 };
//int n, k, s, e;
//bool vis[maxn] = { false };
//void Dijks(int nowvis) {
//		if(vis[nowvis]==false){
//			vis[nowvis] = true;
//			weight[nowvis] = w[nowvis];
//			l[nowvis] = 0;
//		}
//	for (int i = 0; i < n; i++) {
//		int u = -1, min = 0;
//		for(int j=0;j<n;j++){
//			if (vis[j] == false && l[j] < min) {
//				u = j;
//				min = l[j];
//			}
//		}
//		if (u == -1)	return;
//		vis[u] == true;
//		for(int v=0;v<n;v++){
//			if(vis[v]==false&&G[u][v]!=Inf){
//				if(l[u]+G[u][v]<l[v]){
//					l[v] = l[u] + G[u][v];
//					weight[v] = weight[v] + w[u];
//					num[v] = num[u];
//				}
//				
//			}
//		}
//	}
//}
//int main() {                         //主函数
//#ifdef ONLINE_JUDGE                 //如果有oj系统（在线判定），则忽略文件读入，否则使用文件作为标准输入
//#else    
//	freopen("1.txt", "r", stdin);   //从1.txt输入数据
//#endif 
//
//									
//	cin >> n >> k >> s >> e;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i];
//	}
//	for (int i = 0; i < k; i++) {
//		int a, b, l;
//		cin >> a >> b >> l;
//		G[a][b] = l;
//		G[b][a] = l;
//	}
//	Dijks(nowvis);
//	return 0;                       //返回0，如果不返回0，PAT会报错
//}