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
//const int maxn = 2010, INF = 100000;
//
////总人数，图，最大人数，不可达,权，阈值，
//int sumP = 0;
//int G[maxn][maxn] = { 0 }, weight[maxn] = { 0 };
//int k;
//int n;
//bool vis[maxn] = { false };
//map<int, string> inttostring;
//map<string, int> stringtoint;
//map<string, int >Bang;
//int totnum[maxn] = { 0 };
//void DFSTrave(){
//	for (int i = 0; i < sumP; i++) {
//		if(vis[i]==false){
//			int head = i, bangnum = 0, tow = 0;
//			DFS(i,head, bangnum, tow);
//			if (bangnum > 2 && tow > k)	Bang[inttostring[head]] = bangnum;
//		}
//	}
//}
//
//void DFS(int nowvis, int &head, int &num, int &tow) {
//	if (vis[nowvis] == false) {
//		vis[nowvis] = true;
//		num++;
//		if (weight[nowvis] > weight[head])	head = nowvis;
//		for (int i = 0; i++; i < sumP) {			
//			if (G[nowvis][i] > 0) {
//				num++;
//				tow += G[nowvis][i];
//				G[nowvis][i] = G[i][nowvis] = 0;
//				if (vis[i] == false)	DFS(i, head, num, tow);
//			}
//		}
//	}
//}
//int change(string str) {
//	if (stringtoint.find(str) != stringtoint.end())	return stringtoint[str];
//	else {
//		stringtoint[str] = sumP;
//		inttostring[sumP] = str;
//		return sumP++;
//	}
//}
//int main() {                         //主函数
//#ifdef ONLINE_JUDGE                 //如果有oj系统（在线判定），则忽略文件读入，否则使用文件作为标准输入
//#else    
//	freopen("1.txt", "r", stdin);   //从1.txt输入数据
//#endif 
//
//	
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		string str1, str2;
//		int t;
//		cin >> str1 >> str2 >> t;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += t;
//		weight[id2] += t;
//		G[id1][id2] += t;
//		G[id2][id1] += t;
//	}
//	DFSTrave();
//	return 0;                       //返回0，如果不返回0，PAT会报错
//}