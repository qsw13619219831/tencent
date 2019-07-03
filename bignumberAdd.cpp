#include<iostream>
#include<string>
using namespace std;

string  add(string a, string b) {
  string tempa = a, tempb = b;
  if (tempb.length() > tempa.length()) {
    tempa = b;
    tempb = a;

  }

  int j = tempa.length() - 1;
  for (int i = tempb.length() - 1; i >= 0; i--) {
    tempa[j] += tempb[i] - '0';
    j--;

  }

  for (int i = tempa.length() - 1; i >= 1; i--)
  {
    if (tempa[i] >  '9') {
      tempa[i - 1] += 1;
      tempa[i] -= 10;//千万别忘了进位之后的只保留原来的个位数

    }

  }
  if (tempa[0] > '9')//注意是大于‘9’ 直接用编码比较
  {
    tempa[0] -= 10; //千万别忘了进位之后的只保留原来的个位数
    tempa = "1" + tempa; //

  }

  return tempa;

}
bool isbig(string a,string b){
  if (a.size() > b.size()){
    return true;

  }
  else if(a.size()==b.size()){
    int i = 0;
    for (; i < a.size();i++){
      if (a[i]>b[i]){
        return true;

      }
      if (a[i] < b[i]){
        return false;

      }

    }
    if (i == a.size()){
      return false;

    }

  }
  else{
    return false;

  }



}

int main(){
  string a, b,c;
  while (cin >> a >> b>>c){
    if (isbig(add(a, b),c)&&isbig(add(b,c),a)&&isbig(add(a,c),b)){

      cout << "Yes" << endl;

    }
    else{
      cout << "No" << endl;

    }

  }

}













