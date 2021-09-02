// given prices of some stocks , find the span of days when prices is either <= price@day;


#include<bits/stdc++.h>
using namespace std;

//Brute force
vector<int> BFStocks(vector<int> prices){
  vector<int> result;
  for(int i = 0; i < prices.size(); i++){
    int days = 0;
    for(int j=i;j>=0;j--){
      if(prices[i] >= prices[j]) days++;
      else break;
    }
    result.push_back(days);
  }
  return result;
}

//Stack method

vector<int> StocksSpan(vector<int> prices){
  vector<int> result;
  stack<pair<int,int>> st;
  for(auto i : prices){
    int days = 1;
    while(!st.empty() && st.top().first <= i ){
      days+= st.top().second;
      st.pop();
    }
    st.push({i,days});
    result.push_back(days);
  }
  return result;
}



// nearest greater to left + index 
vector<int> stockop(vector<int>arr){
  vector<int> result;
  stack<pair<int,int>>s;
  for(int i = 0; i < arr.size(); i++){
    if(s.size()==0){
      result.push_back(-1);
    }
    else if(s.size()>0 and s.top().first > arr[i]){
      result.push_back(s.top().second);
    }
    else if(s.size()>0 and s.top().first < arr[i]){
      while(s.size()>0 and s.top().first < arr[i]){
        s.pop();
      }
      if(s.size()==0) result.push_back(-1);
      else result.push_back(s.top().second);
    }

    s.push({arr[i],i});
  }
  for(int i=0; i<result.size(); i++){
    result[i] = i - result[i];
  }
  return result;
}

int main()
{
  vector<int> prices = {100 ,80,60,70,60,75,85};
  vector<int> result = StocksSpan(prices);
  vector<int> resultBF = BFStocks(prices);
  for(auto i : result)
    cout << i << " ";
  cout << endl;
  for(auto i : resultBF){
    cout << i << " ";
  }
  
  return 0;
}
