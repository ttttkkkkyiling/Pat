//#include<iostream>                  //���������ͷ�ļ�
//#include<stdio.h>                   //��׼�������
//#include<stdlib.h>
//#include<math.h>                    //��ѧ����
//#include<string.h>                  //C�����ַ�������ַ���
//#include<algorithm>                 //C++��׼ģ���ĺ���
//#include<map>                       //mapӳ������
//#include<unordered_map>             //�����mapӳ������
//#include<vector>                    //�䳤��������
//#include<queue>                     //����
//#include<stack>                     //ջ
//#include<string>                    //C++string��
//#include<set>                       //set����
//using namespace std;                //��׼�����ռ�
//
//									//���Լ���ȫ�ֱ���������������
//
//const int maxn = 2010, INF = 100000;
//
////��������ͼ��������������ɴ�,Ȩ����ֵ��
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
//int main() {                         //������
//#ifdef ONLINE_JUDGE                 //�����ojϵͳ�������ж�����������ļ����룬����ʹ���ļ���Ϊ��׼����
//#else    
//	freopen("1.txt", "r", stdin);   //��1.txt��������
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
//	return 0;                       //����0�����������0��PAT�ᱨ��
//}