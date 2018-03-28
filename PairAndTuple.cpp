****Pair****
1. class pair 可将两个value视为一个单元。

2. pair提供了“直接访问对应数据成员”的能力。

#include<utility>
namespace std{
  template <typename T1, typename T2>
  struct pair{
    //member
    T1 first;
    T2 second;
    ....
  };
}

3. 操作函数
    0)  pair<T1, T2> p(piecewise_construct, t1, t2); // t = tuple;
    1) pair<T1, T2> p;
    2) pair<T1, T2> p(val1, val2);
    3) pair<T1, T2> p(rv1, rv2);
    4) pair<T1, T2> p(p2);
    5) pair<T1, T2> p(rv);
    6) p = p2;
    7) p = rv;
    8) p.first;  p.second;
    9) get<0>(p);  get<1>(p);
   10) p1 operator p2;
   11) p1.swap(p2);
   12) swap(p1, p2);
   13) make_pair(val1, val2);

4. print_pair();
template <typename T1, typename T2>
std::ostream& opreator << (std::ostream& strm， const std::pair<T1, T2>& p)
{
  return strm << "[" << p.first << "," << p.second << "]";
}
