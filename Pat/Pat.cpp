//#include"stdafx.h"
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
//const int maxn = 2010;
//const int INF = 100000000;
//
//map<int, string> intTostring;
//map<string, int >stringToint;
//map<string, int >Gang;
//
//int G[maxn][maxn] = { 0 }, weight[maxn] = { 0 };
//int n, k, numPerson = 0;
//bool vis[maxn] = { false };
//
//void DFS(int nowVis, int &head, int &numMenber, int&totalValue) {
//	//进入后帮派人数加以
//	//该节点设置为访问
//	//假设当前用户的权重大于帮派帮助的权重
//	//更换帮助
//	//然后迭代所有人
//	//查看与该节点有联系的节点，假如该节点未被访问，以该节点作为根节点继续访问
//	numMenber++;
//	vis[nowVis] = true;
//	if(weight[nowVis]>weight[head]){
//		head = nowVis;
//	}
//	for(int i=0;i<numPerson;i++){
//		//将该节点纳入帮派
//		if (G[nowVis][i] > 0) {
//			totalValue += G[nowVis][i];
//			G[nowVis][i] = G[i][nowVis] = 0;
//			if(vis[i]==false){
//				DFS(i, head, numMenber, totalValue);
//			}
//		}
//	}
//}
//
//void DFSTrave() {
//	//循环每一个用户
//	//如果该用户未被访问
//	//就以该用户作为节点访问其联通用户
//	for (int i = 0; i < numPerson; i++) {
//		if(vis[i]==false){
//			int head = i, numMember = 0, totalValue = 0;
//			DFS(i, head, numMember, totalValue);
//			if (numMember > 2 && totalValue > k) {
//				Gang[intTostring[head]] = numMember;
//			}
//		}
//	}
//}
//int change(string str) {
//	//如果该用户已经在列表中直接返回
//	//假如该用户不在列表里面
//	//将编号与用户名称对应
//	//并且将所有的用户总数加1
//	if (stringToint.find(str) != stringToint.end())	return stringToint[str];
//	else{
//		stringToint[str] = numPerson;
//		intTostring[numPerson] = str;
//		return numPerson++;
//	}
//}
//int main() {                         //主函数
//#ifdef ONLINE_JUDGE                 //如果有oj系统（在线判定），则忽略文件读入，否则使用文件作为标准输入
//#else    
//	freopen("1.txt", "r", stdin);   //从1.txt输入数据
//#endif 
//	int w;
//	string str1, str2;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> str1 >> str2 >> w;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += w;
//		weight[id2] += w;
//		G[id1][id2] += w;
//		G[id2][id1] += w;
//	}
//	DFSTrave();
//	cout << Gang.size() << endl;
//	map<string, int >::iterator it;
//	for (it = Gang.begin(); it != Gang.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//									//加入自己的代码
//	return 0;                       //返回0，如果不返回0，PAT会报错
//}