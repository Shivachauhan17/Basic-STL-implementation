#include<iostream>
//sequence containers
#include<array>
#include<vector>
#include<deque>
#include<list>



//container adaptors
#include<stack>
#include<queue>



//associative containers
#include<set>
#include<map>


//algorithm
#include<algorithm>
int main(){
    //stl array
    std::array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        std::cout<<a[i]<<std::endl;

    }
    std::cout<<"element at 2nd index:"<<a.at(2)<<std::endl;
    std::cout<<"is empty:"<<a.empty()<<std::endl;
    std::cout<<"first element:"<<a.front()<<std::endl;
    std::cout<<"last element:"<<a.back()<<std::endl;


  //stl vector
    std::vector<int> v;
    std::vector<int> v1(5,1);//v1(size of vec,initialize all element by 1)in default case initialized with zero
    std::cout<<"capacity of vector:"<<v.capacity()<<std::endl;

    v.push_back(1);
    std::cout<<"capacity after pushing one element"<<v.capacity()<<std::endl;
    v.push_back(2);
    std::cout<<"capacity after pushing one more element"<<v.capacity()<<std::endl;
    v.push_back(3);//here vector will double his capacity automatically
    std::cout<<"capacity after pushing one more element"<<v.capacity()<<std::endl;
    std::cout<<"size of the vector is "<<v.size()<<std::endl;
    std::cout<<"the last element is "<<v.back()<<std::endl;

    v.pop_back();
    for(int i:v){
    std::cout<<i<<" ";
    }
//to delete the all element of the vector
    v.clear();
    std::cout<<"size of the array after clear:"<<v.size()<<std::endl;



//stl double ended queue
  std::deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        std::cout<<i<<" "<<std::endl;
    }
//d.pop_back();
//for(int i:d){
  //  std::cout<<i<<" "<<std::endl;
//}
std::cout<<"element at index 1:"<<d.at(1)<<std::endl;
std::cout<<"element at front:"<<d.front()<<std::endl;

     d.erase(d.begin(),d.begin()+1);
     std::cout<<"size of deque after deleting  a element :"<<d.size()<<std::endl;



//stl list
std::list<int> l;
std::list<int> n(l);//copy list l in n
l.push_back(1);
l.push_front(2);

for(int i:l){
    std::cout<<i<<" "<<std::endl;

}
l.erase(l.begin());

std::cout<<"list after erasing  a element:";
for(int i:l){
std::cout<<i<<" ";
}




//stl stacak
std::stack<std::string> s;
s.push("hello");
s.push("there");

std::cout<<"top element is : "<<s.top()<<std::endl;     



//stl queue
std::queue<std::string> Q;
Q.push("this");
Q.push("is");
Q.push("cool");

std::cout<<"first element: "<<Q.front()<<std::endl;
std::cout<<"size :"<<Q.size()<<std::endl;






//priority queue based on heap
//max heap
std::priority_queue<int> max_h;
//min heap
std::priority_queue<int,std::vector<int>,std::greater<int>> min_h;

max_h.push(1);
max_h.push(2);
max_h.push(3);
max_h.push(4);
int n= max_h.size();
for(int i=0; i < n;i++){
std::cout<<max_h.top()<<" "<<std::endl;
max_h.pop();
}




//stl set
std::set<int> set1;

set1.insert(4); 
set1.insert(7);
set1.insert(1);
set1.insert(0);
for(int i:set1){
    std::cout<<i<<" ";
}
std::cout<<std::endl;
std::set<int>::iterator it=set1.begin();
it++;
set1.erase(it);
for(int i:set1){
    std::cout<<i<<" ";

}
std::cout<<std::endl;
std::set<int>::iterator p=set1.find(7);
std::cout<<"iterator pointing to  the value: "<<*p<<std::endl;



//stl  map
std::map<int,std::string> map1;

map1[1]="is";
map1[2]="anyone";
map1[6]="there";

for(auto i:map1){
    std::cout<<i.first<<"-->"<<i.second<<std::endl;
}
map1.insert({5,"hello"});

for(auto i:map1){
    std::cout<<i.first<<"-->"<<i.second<<std::endl;
}
std::cout<<"before erase :"<<std::endl;
for(auto i:map1){
    std::cout<<i.first<<"-->"<<i.second<<std::endl;
}
std::cout<<"after erase:"<<std::endl;
map1.erase(5);
for(auto i:map1){
    std::cout<<i.first<<"-->"<<i.second<<std::endl;
}





//algorithm stl
std::vector<int> vector2;
vector2.push_back(1);
vector2.push_back(2);
vector2.push_back(3);
vector2.push_back(4);
std::cout<<"is element present: "<<binary_search(vector2.begin(),vector2.end(),3)<<std::endl;
std::cout<<"lower bound of the element  "<<*lower_bound(vector2.begin(),vector2.end(),3)<<std::endl;
std::cout<<"upper bound of the element :"<<*upper_bound(vector2.begin(),vector2.end(),3)<<std::endl;

int num1=2;
int num2=3;
std::cout<<"maximum between them :"<<std::max(num1,num2)<<std::endl;
std::cout<<"minimum between them :"<<std::min(num1,num2)<<std::endl;
std::swap(num1,num2);

std::cout<<"after swap num1:"<<num1<<"  num2: "<<num2<<std::endl;

std::string str1{"abcd"};
std::reverse(str1.begin(),str1.end());
std::cout<<str1<<std::endl;

std::rotate(str1.begin(),str1.begin()+1,str1.end());
std::cout<<str1<<std::endl;

std::sort(vector2.begin(),vector2.begin()+3);
for(int i:vector2){
    std::cout<<i<<" ";
}
std::cout<<std::endl;
}
